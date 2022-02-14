
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_5__ {int argc; int iflags; TYPE_1__** argv; } ;
struct TYPE_4__ {int len; int bp; } ;
typedef int SCR ;
typedef int FILE ;
typedef TYPE_2__ EXCMD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ,char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,char*) ;
 int FUNC_8 (char*,int,int) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *,char*,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (char*,struct stat*) ;

int
FUNC_13(SCR *VAR_16, EXCMD *VAR_17)
{
 struct stat VAR_18;
 FILE *VAR_19;
 int VAR_20, VAR_21;
 char *VAR_22;
 size_t VAR_23;

 switch (VAR_17->argc) {
 case 0:
  VAR_22 = VAR_14;
  break;
 case 1:
  FUNC_1(VAR_16, VAR_17->argv[0]->bp, VAR_17->argv[0]->len + 1,
       VAR_22, VAR_23);
  FUNC_11(VAR_16, VAR_22);
  break;
 default:
  FUNC_2();
 }

 if (!FUNC_0(VAR_17->iflags, VAR_0) && !FUNC_12(VAR_22, &VAR_18)) {
  FUNC_7(VAR_16, VAR_1, VAR_22,
      "137|%s exists, not written; use ! to override");
  return (1);
 }


 if ((VAR_20 = FUNC_8(VAR_22, VAR_4 | VAR_5 | VAR_6,
     VAR_12 | VAR_13 | VAR_10 | VAR_11)) < 0) {
  FUNC_7(VAR_16, VAR_3, VAR_22, "%s");
  return (1);
 }

 if ((VAR_19 = FUNC_5(VAR_20, "w")) == ((void*)0)) {
  VAR_21 = VAR_15;
  (void)FUNC_3(VAR_20);
  goto e2;
 }

 if (FUNC_10(VAR_16, VAR_19, "abbreviate ", VAR_7) || FUNC_6(VAR_19))
  goto e1;
 if (FUNC_10(VAR_16, VAR_19, "map ", VAR_8) || FUNC_6(VAR_19))
  goto e1;
 if (FUNC_10(VAR_16, VAR_19, "map! ", VAR_9) || FUNC_6(VAR_19))
  goto e1;
 if (FUNC_9(VAR_16, VAR_19) || FUNC_6(VAR_19))
  goto e1;
 if (FUNC_4(VAR_19)) {
  VAR_21 = VAR_15;
  goto e2;
 }

 FUNC_7(VAR_16, VAR_2, VAR_22, "138|New exrc file: %s");
 return (0);

e1: VAR_21 = VAR_15;
 (void)FUNC_4(VAR_19);
e2: VAR_15 = VAR_21;
 FUNC_7(VAR_16, VAR_3, VAR_22, "%s");
 return (1);
}
