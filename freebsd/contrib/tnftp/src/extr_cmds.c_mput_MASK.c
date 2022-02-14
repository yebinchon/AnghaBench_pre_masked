
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sigfunc ;
struct TYPE_5__ {scalar_t__ gl_pathc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int gl ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_3 (char*,int,char*,int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (char*,int,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 char* FUNC_8 (char**,int ,int *) ;
 int FUNC_9 (char*,char*,char const*,int) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ VAR_17 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int ) ;

void
FUNC_13(int VAR_18, char *VAR_19[])
{
 int VAR_20;
 sigfunc VAR_21;
 int VAR_22;
 const char *VAR_23;

 if (VAR_18 == 0 || (VAR_18 == 1 && !FUNC_1(&VAR_18, &VAR_19, "local-files"))) {
  FUNC_0("usage: %s local-files\n", VAR_19[0]);
  VAR_5 = -1;
  return;
 }
 VAR_13 = 1;
 VAR_21 = FUNC_12(VAR_4, VAR_14);
 if (FUNC_10(VAR_10, 1))
  FUNC_6(VAR_19[0]);
 if (VAR_16) {
  char *VAR_24;

  while ((VAR_24 = FUNC_8(VAR_19, 0, ((void*)0))) != ((void*)0)) {
   if (*VAR_24 == '\0' || !VAR_6) {
    VAR_13 = 0;
    continue;
   }
   if (VAR_13 && FUNC_2(VAR_19[0], VAR_24)) {
    char VAR_25[VAR_3];
    VAR_23 = FUNC_3(VAR_25, sizeof(VAR_25), VAR_24,
        VAR_12, VAR_15, VAR_11);
    FUNC_9((VAR_17) ? "STOU" : "STOR",
        VAR_24, VAR_23, VAR_24 != VAR_23 || !VAR_9);
    if (!VAR_13 && VAR_8) {
     VAR_22 = VAR_9;
     VAR_9 = 1;
     if (FUNC_2(VAR_19[0], ((void*)0))) {
      VAR_13++;
     }
     VAR_9 = VAR_22;
    }
   }
  }
  goto cleanupmput;
 }
 for (VAR_20 = 1; VAR_20 < VAR_18 && VAR_6; VAR_20++) {
  char **VAR_26;
  glob_t VAR_27;
  int VAR_28;

  if (!VAR_7) {
   if (VAR_13 && FUNC_2(VAR_19[0], VAR_19[VAR_20])) {
    char VAR_29[VAR_3];
    VAR_23 = FUNC_3(VAR_29, sizeof(VAR_29), VAR_19[VAR_20],
     0, VAR_15, VAR_11);
    FUNC_9((VAR_17) ? "STOU" : "STOR",
        VAR_19[VAR_20], VAR_23, VAR_23 != VAR_19[VAR_20] || !VAR_9);
    if (!VAR_13 && VAR_8) {
     VAR_22 = VAR_9;
     VAR_9 = 1;
     if (FUNC_2(VAR_19[0], ((void*)0))) {
      VAR_13++;
     }
     VAR_9 = VAR_22;
    }
   }
   continue;
  }

  FUNC_7(&VAR_27, 0, sizeof(VAR_27));
  VAR_28 = VAR_0|VAR_1|VAR_2;
  if (FUNC_4(VAR_19[VAR_20], VAR_28, ((void*)0), &VAR_27) || VAR_27.gl_pathc == 0) {
   FUNC_11("Glob pattern `%s' not found", VAR_19[VAR_20]);
   FUNC_5(&VAR_27);
   continue;
  }
  for (VAR_26 = VAR_27.gl_pathv; VAR_26 && *VAR_26 != ((void*)0) && VAR_6;
      VAR_26++) {
   if (VAR_13 && FUNC_2(VAR_19[0], *VAR_26)) {
    char VAR_30[VAR_3];
    VAR_23 = *VAR_26;
    VAR_23 = FUNC_3(VAR_30, sizeof(VAR_30), *VAR_26,
        0, VAR_15, VAR_11);
    FUNC_9((VAR_17) ? "STOU" : "STOR",
        *VAR_26, VAR_23, *VAR_26 != VAR_23 || !VAR_9);
    if (!VAR_13 && VAR_8) {
     VAR_22 = VAR_9;
     VAR_9 = 1;
     if (FUNC_2(VAR_19[0], ((void*)0))) {
      VAR_13++;
     }
     VAR_9 = VAR_22;
    }
   }
  }
  FUNC_5(&VAR_27);
 }
 cleanupmput:
 (void)FUNC_12(VAR_4, VAR_21);
 VAR_13 = 0;
}
