
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct manpaths {size_t sz; int * paths; } ;
struct manpage {char* file; int bits; size_t ipath; char sec; int form; int * output; int * names; } ;
struct TYPE_4__ {int * gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef enum form { ____Placeholder_form } form ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char**,char*,char const*,char const*,...) ;
 int FUNC_4 (int ,int ,int ,char*,char*,int ) ;
 struct manpage* FUNC_5 (struct manpage*,size_t,int) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*,char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(const struct manpaths *VAR_8, size_t VAR_9,
 const char *VAR_10, const char *VAR_11, const char *VAR_12,
 struct manpage **VAR_13, size_t *VAR_14)
{
 struct stat VAR_15;
 glob_t VAR_16;
 struct manpage *VAR_17;
 char *VAR_18;
 int VAR_19;
 enum form VAR_20;

 VAR_20 = VAR_2;
 FUNC_3(&VAR_18, "%s/man%s/%s.%s",
     VAR_8->paths[VAR_9], VAR_10, VAR_12, VAR_10);
 if (FUNC_7(VAR_18, &VAR_15) != -1)
  goto found;
 FUNC_0(VAR_18);

 FUNC_3(&VAR_18, "%s/cat%s/%s.0",
     VAR_8->paths[VAR_9], VAR_10, VAR_12);
 if (FUNC_7(VAR_18, &VAR_15) != -1) {
  VAR_20 = VAR_1;
  goto found;
 }
 FUNC_0(VAR_18);

 if (VAR_11 != ((void*)0)) {
  FUNC_3(&VAR_18, "%s/man%s/%s/%s.%s",
      VAR_8->paths[VAR_9], VAR_10, VAR_11, VAR_12, VAR_10);
  if (FUNC_7(VAR_18, &VAR_15) != -1)
   goto found;
  FUNC_0(VAR_18);
 }

 FUNC_3(&VAR_18, "%s/man%s/%s.[01-9]*",
     VAR_8->paths[VAR_9], VAR_10, VAR_12);
 VAR_19 = FUNC_1(VAR_18, 0, ((void*)0), &VAR_16);
 if (VAR_19 != 0 && VAR_19 != VAR_3)
  FUNC_4(VAR_4, 0, 0,
      "%s: %s", VAR_18, FUNC_8(VAR_7));
 FUNC_0(VAR_18);
 if (VAR_19 == 0)
  VAR_18 = FUNC_6(*VAR_16.gl_pathv);
 FUNC_2(&VAR_16);
 if (VAR_19 == 0) {
  if (FUNC_7(VAR_18, &VAR_15) != -1)
   goto found;
  FUNC_0(VAR_18);
 }
 if (VAR_13 != ((void*)0) || VAR_9 + 1 != VAR_8->sz)
  return -1;

 FUNC_3(&VAR_18, "%s.%s", VAR_12, VAR_10);
 VAR_19 = FUNC_7(VAR_18, &VAR_15);
 FUNC_0(VAR_18);
 return VAR_19;

found:
 FUNC_9("outdated mandoc.db lacks %s(%s) entry, run %s %s",
     VAR_12, VAR_10, VAR_0, VAR_8->paths[VAR_9]);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_18);
  return 0;
 }
 *VAR_13 = FUNC_5(*VAR_13, ++*VAR_14, sizeof(**VAR_13));
 VAR_17 = *VAR_13 + (*VAR_14 - 1);
 VAR_17->file = VAR_18;
 VAR_17->names = ((void*)0);
 VAR_17->output = ((void*)0);
 VAR_17->bits = VAR_5 & VAR_6;
 VAR_17->ipath = VAR_9;
 VAR_17->sec = (*VAR_10 >= '1' && *VAR_10 <= '9') ? *VAR_10 - '1' + 1 : 10;
 VAR_17->form = VAR_20;
 return 0;
}
