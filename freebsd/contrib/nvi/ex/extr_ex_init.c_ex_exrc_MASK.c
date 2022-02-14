
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct stat {int st_ino; int st_dev; } ;
struct TYPE_11__ {int gp; } ;
typedef TYPE_1__ SCR ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,char*,scalar_t__,int *,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char*,int *,size_t,int,int ) ;
 int const FUNC_7 (TYPE_1__*,struct stat*,char*,int,int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(SCR *VAR_7)
{
 struct stat VAR_8, VAR_9;
 char *VAR_10, *VAR_11;
 CHAR_T *VAR_12;
 size_t VAR_13;
 switch (FUNC_7(VAR_7, &VAR_8, VAR_6, 1, 0)) {
 case 130:
 case 129:
  break;
 case 128:
  if (FUNC_5(VAR_7, VAR_6))
   return (1);
  break;
 }


 if (FUNC_1(VAR_7->gp))
  (void)FUNC_4(VAR_7);
 if (FUNC_2(VAR_7, VAR_2 | VAR_3))
  return (0);

 if ((VAR_10 = FUNC_9("NEXINIT")) != ((void*)0)) {
  FUNC_0(VAR_7, VAR_10, FUNC_12(VAR_10) + 1, VAR_12, VAR_13);
  if (FUNC_6(VAR_7, "NEXINIT", VAR_12, VAR_13 - 1, 1, 0))
   return (1);
 } else if ((VAR_10 = FUNC_9("EXINIT")) != ((void*)0)) {
  FUNC_0(VAR_7, VAR_10, FUNC_12(VAR_10) + 1, VAR_12, VAR_13);
  if (FUNC_6(VAR_7, "EXINIT", VAR_12, VAR_13 - 1, 1, 0))
   return (1);
 } else if ((VAR_10 = FUNC_9("HOME")) != ((void*)0) && *VAR_10) {
  int VAR_14 = 0;

  if ((VAR_11 = FUNC_10(VAR_10, VAR_5)) == ((void*)0)) {
   FUNC_11(VAR_7, VAR_0, ((void*)0));
   return (1);
  }
  switch (FUNC_7(VAR_7, &VAR_8, VAR_11, 0, 1)) {
  case 130:
   FUNC_8(VAR_11);
   if ((VAR_11 = FUNC_10(VAR_10, VAR_4)) == ((void*)0)) {
    FUNC_11(VAR_7, VAR_0, ((void*)0));
    return (1);
   }
   if (FUNC_7(VAR_7,
       &VAR_8, VAR_11, 0, 1) == 128 && FUNC_5(VAR_7, VAR_11))
    VAR_14 = 1;
   break;
  case 129:
   break;
  case 128:
   if (FUNC_5(VAR_7, VAR_11))
    VAR_14 = 1;
   break;
  }
  FUNC_8(VAR_11);
  if (VAR_14)
   return VAR_14;
 }


 if (FUNC_1(VAR_7->gp))
  (void)FUNC_4(VAR_7);
 if (FUNC_2(VAR_7, VAR_2 | VAR_3))
  return (0);


 if (FUNC_3(VAR_7, VAR_1)) {
  switch (FUNC_7(VAR_7, &VAR_9, VAR_5, 0, 0)) {
  case 130:
   if (FUNC_7(VAR_7, &VAR_9, VAR_4, 0, 0) == 128 &&
       (VAR_9.st_dev != VAR_8.st_dev ||
       VAR_9.st_ino != VAR_8.st_ino) &&
       FUNC_5(VAR_7, VAR_4))
    return (1);
   break;
  case 129:
   break;
  case 128:
   if ((VAR_9.st_dev != VAR_8.st_dev ||
       VAR_9.st_ino != VAR_8.st_ino) &&
       FUNC_5(VAR_7, VAR_5))
    return (1);
   break;
  }

  if (FUNC_1(VAR_7->gp))
   (void)FUNC_4(VAR_7);
  if (FUNC_2(VAR_7, VAR_2 | VAR_3))
   return (0);
 }

 return (0);
}
