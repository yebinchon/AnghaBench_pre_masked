
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct perf_report {int dont_use_callchains; } ;
struct option {scalar_t__ value; } ;
struct TYPE_5__ {int order; int print_limit; int min_percent; int mode; } ;
struct TYPE_4__ {int use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_7 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (char*,char**) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char**,int ) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int
FUNC_8(const struct option *VAR_9, const char *VAR_10, int VAR_11)
{
 struct perf_report *VAR_12 = (struct perf_report *)VAR_9->value;
 char *VAR_13, *VAR_14;
 char *VAR_15;




 if (VAR_11) {
  VAR_12->dont_use_callchains = 1;
  return 0;
 }

 VAR_8.use_callchain = 1;

 if (!VAR_10)
  return 0;

 VAR_13 = FUNC_6((char *)VAR_10, ",");
 if (!VAR_13)
  return -1;


 if (!FUNC_4(VAR_13, "graph", FUNC_3(VAR_10)))
  VAR_6.mode = VAR_1;

 else if (!FUNC_4(VAR_13, "flat", FUNC_3(VAR_10)))
  VAR_6.mode = VAR_0;

 else if (!FUNC_4(VAR_13, "fractal", FUNC_3(VAR_10)))
  VAR_6.mode = VAR_2;

 else if (!FUNC_4(VAR_13, "none", FUNC_3(VAR_10))) {
  VAR_6.mode = VAR_3;
  VAR_8.use_callchain = 0;

  return 0;
 }

 else
  return -1;


 VAR_13 = FUNC_6(((void*)0), ",");
 if (!VAR_13)
  goto setup;

 VAR_6.min_percent = FUNC_5(VAR_13, &VAR_15);
 if (VAR_13 == VAR_15)
  return -1;


 VAR_14 = FUNC_6(((void*)0), ",");
 if (!VAR_14)
  goto setup;

 if (VAR_14[0] != 'c') {
  VAR_6.print_limit = FUNC_7(VAR_14, &VAR_15, 0);
  VAR_14 = FUNC_6(((void*)0), ",");
  if (!VAR_14)
   goto setup;
 }


 if (!FUNC_2(VAR_14, "caller"))
  VAR_6.order = VAR_5;
 else if (!FUNC_2(VAR_14, "callee"))
  VAR_6.order = VAR_4;
 else
  return -1;
setup:
 if (FUNC_0(&VAR_6) < 0) {
  FUNC_1(VAR_7, "Can't register callchain params\n");
  return -1;
 }
 return 0;
}
