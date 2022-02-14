
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int recoveredname ;
typedef int newname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;

int
FUNC_9(char *VAR_12)
{
 int VAR_13, VAR_14;
 char *VAR_15;
 char *VAR_16 = ((void*)0);
 struct stat VAR_17;
 char VAR_18[VAR_8];
 char VAR_19[VAR_8];





 VAR_13 = FUNC_3(VAR_4, VAR_18,
     sizeof(VAR_18) - 1);
 if (VAR_13 > 0) {

  VAR_18[VAR_13++] = '\0';
  if (FUNC_4(VAR_18, &VAR_17) == 0) {

   FUNC_5(VAR_19, VAR_18, sizeof(VAR_19));

   if ((VAR_15 = FUNC_6(VAR_19, VAR_9)) != ((void*)0)) {
    FUNC_2(VAR_15, VAR_6, VAR_10);
    if (FUNC_1(VAR_18, VAR_19) != 0)
     return (VAR_1);
   } else
    return (VAR_2);

   VAR_16 = VAR_19;
  }


  (void) FUNC_8(VAR_4);


  VAR_14 = FUNC_0(VAR_5, VAR_16);
  if (VAR_14)
   return (VAR_14);
 }

 if (VAR_13 < 0 && VAR_11 != VAR_7)
  return (VAR_0);

 if (FUNC_7(VAR_12, VAR_4) != 0)
  return (VAR_3);

 return (0);
}
