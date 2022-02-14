
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__,char**,int ,int*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5 (char *VAR_5, CORE_ADDR *VAR_6)
{
 CORE_ADDR VAR_7;
 char *VAR_8;
 char *VAR_9;
 int VAR_10;

 if (VAR_1 == 0 || VAR_2 == 0 || VAR_3 == 0 ||
     VAR_4 == 0)
  return (0);

 VAR_9 = FUNC_0(VAR_5);
 for (VAR_7 = FUNC_1(VAR_1); VAR_7 != 0;
      VAR_7 = FUNC_1(VAR_7 + VAR_4)) {

  FUNC_3(FUNC_1(VAR_7 + VAR_3),
      &VAR_8, VAR_0, &VAR_10);
  if (VAR_10)
   continue;


  if (FUNC_2(VAR_8, VAR_9) != 0) {
   FUNC_4(VAR_8);
   continue;
  }
  FUNC_4(VAR_8);





  *VAR_6 = FUNC_1(VAR_7 + VAR_2);
  if (*VAR_6 == 0)
   return (0);
  return (1);
 }
 return (0);
}
