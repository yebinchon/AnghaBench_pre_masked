
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {unsigned long long start; } ;
struct perf_probe_point {char const* function; unsigned long long offset; } ;
struct perf_probe_event {char* event; void* group; struct perf_probe_point point; } ;
struct map {unsigned long long start; unsigned long long pgoff; int dso; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct map* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,unsigned long long,...) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct map*) ;
 struct symbol* FUNC_6 (struct map*,char*,int *) ;
 scalar_t__ FUNC_7 (struct map*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 char* FUNC_10 (char const*,int *) ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*,int *) ;
 char* FUNC_13 (char*,char*) ;
 void* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct perf_probe_event *VAR_6, const char *VAR_7)
{
 struct perf_probe_point *VAR_8 = &VAR_6->point;
 struct symbol *VAR_9;
 struct map *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_0;
 unsigned long long VAR_14 = 0;

 if (!VAR_8->function) {
  FUNC_9("No function specified for uprobes");
  goto out;
 }

 VAR_11 = FUNC_11(VAR_8->function);
 if (!VAR_11) {
  FUNC_9("Failed to allocate memory by strdup.\n");
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_12 = FUNC_10(VAR_7, ((void*)0));
 if (!VAR_12) {
  FUNC_9("Cannot find realpath for %s.\n", VAR_7);
  goto out;
 }
 VAR_10 = FUNC_2(VAR_12);
 if (!VAR_10) {
  FUNC_9("Cannot find appropriate DSO for %s.\n", VAR_7);
  goto out;
 }
 VAR_4 = FUNC_12(VAR_11, ((void*)0));
 if (FUNC_7(VAR_10, VAR_5)) {
  FUNC_8("Failed to load map.\n");
  goto out;
 }

 VAR_9 = FUNC_6(VAR_10, VAR_11, ((void*)0));
 if (!VAR_9) {
  FUNC_9("Cannot find %s in DSO %s\n", VAR_11, VAR_7);
  goto out;
 }

 if (VAR_10->start > VAR_9->start)
  VAR_14 = VAR_10->start;
 VAR_14 += VAR_9->start + VAR_8->offset + VAR_10->pgoff;
 VAR_8->offset = 0;

 if (!VAR_6->event) {
  VAR_6->event = VAR_11;
  VAR_11 = ((void*)0);
 }
 if (!VAR_6->group) {
  char *VAR_15, *VAR_16, *VAR_17;

  VAR_6->group = FUNC_14(sizeof(char *) * 64);
  VAR_17 = FUNC_11(VAR_7);
  if (!VAR_17) {
   VAR_13 = -VAR_1;
   FUNC_9("Failed to copy exec string.\n");
   goto out;
  }

  VAR_15 = FUNC_11(FUNC_0(VAR_17));
  if (VAR_15) {
   VAR_16 = FUNC_13(VAR_15, "-._");
   if (VAR_16)
    *VAR_16 = '\0';
   FUNC_3(VAR_6->group, 64, "%s_%s", VAR_3,
     VAR_15);
   FUNC_4(VAR_15);
  }
  FUNC_4(VAR_17);
 }
 FUNC_4(VAR_8->function);
 VAR_8->function = FUNC_14(sizeof(char *) * VAR_2);
 if (!VAR_8->function) {
  VAR_13 = -VAR_1;
  FUNC_9("Failed to allocate memory by zalloc.\n");
  goto out;
 }
 FUNC_3(VAR_8->function, VAR_2, "0x%llx", VAR_14);
 VAR_13 = 0;

out:
 if (VAR_10) {
  FUNC_1(VAR_10->dso);
  FUNC_5(VAR_10);
 }
 if (VAR_11)
  FUNC_4(VAR_11);
 if (VAR_12)
  FUNC_4(VAR_12);
 return VAR_13;
}
