
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_16__ {TYPE_1__* script; } ;
struct TYPE_15__ {int sh_master; } ;
typedef TYPE_1__ SCRIPT ;
typedef TYPE_2__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_2__*,char*,size_t,size_t) ;
 int FUNC_1 (TYPE_2__*,char*,size_t,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*,size_t) ;
 int FUNC_3 (TYPE_2__*,char*,size_t,size_t) ;
 int FUNC_4 (TYPE_2__*,int *,size_t,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int **,size_t*,int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int ,int **,size_t*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *,size_t) ;
 int VAR_4 ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,char*,size_t,size_t*) ;
 int FUNC_12 (int ,char*,int) ;

int
FUNC_13(SCR *VAR_5, recno_t VAR_6)
{
 SCRIPT *VAR_7;
 recno_t VAR_8;
 size_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 char *VAR_17 = ((void*)0), *VAR_18;
 CHAR_T *VAR_19;
 size_t VAR_20;


 if (FUNC_7(VAR_5, &VAR_8))
  return (1);
 if (FUNC_6(VAR_5, VAR_8, VAR_0, &VAR_19, &VAR_20))
  return (1);
 FUNC_4(VAR_5, VAR_19, VAR_20, VAR_18, VAR_11);
 if (FUNC_11(VAR_5, VAR_18, VAR_11, &VAR_12) && VAR_12 == 0) {
  VAR_14 = 1;
  FUNC_3(VAR_5, VAR_17, VAR_9, VAR_11 + 128);
  FUNC_9(VAR_17, VAR_18, VAR_11);
 } else
  VAR_14 = 0;


 if (FUNC_5(VAR_5, VAR_6, &VAR_19, &VAR_20, &VAR_13)) {
  if (VAR_13)
   goto empty;
  goto err1;
 }


 if (VAR_20 == 0)
  goto empty;
 FUNC_4(VAR_5, VAR_19, VAR_20, VAR_18, VAR_10);


 if (FUNC_11(VAR_5, VAR_18, VAR_10, &VAR_12)) {
  if (VAR_12 == VAR_10) {
empty: FUNC_10(VAR_5, VAR_2, "151|No command to execute");
   goto err1;
  }
  VAR_18 += (VAR_10 - VAR_12);
  VAR_10 = VAR_12;
 }


 VAR_7 = VAR_5->script;
 if ((VAR_15 = FUNC_12(VAR_7->sh_master, VAR_18, VAR_10)) != VAR_10)
  goto err2;
 VAR_16 = 0;
 if (FUNC_12(VAR_7->sh_master, "\n", 1) != 1) {
err2: if (VAR_15 == 0)
   VAR_4 = VAR_1;
  FUNC_10(VAR_5, VAR_3, "shell");
  goto err1;
 }

 if (VAR_14) {
  FUNC_0(VAR_5, VAR_17, VAR_9, VAR_11 + VAR_10);
  FUNC_9(VAR_17 + VAR_11, VAR_18, VAR_10);
  FUNC_1(VAR_5, VAR_17, VAR_11 + VAR_10, VAR_19, VAR_20);
  if (FUNC_8(VAR_5, VAR_8, VAR_19, VAR_20))
err1: VAR_16 = 1;
 }
 if (VAR_14)
  FUNC_2(VAR_5, VAR_17, VAR_9);
 return (VAR_16);
}
