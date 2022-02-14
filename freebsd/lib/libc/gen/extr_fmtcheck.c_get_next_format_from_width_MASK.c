
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const**,char const*,int ) ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static EFT
FUNC_3(const char **VAR_2)
{
 const char *VAR_3;

 VAR_3 = *VAR_2;
 if (*VAR_3 == '.') {
  VAR_3++;
  if (*VAR_3 == '*') {
   FUNC_0(VAR_2,VAR_3,VAR_0);
  }

  while (FUNC_2(*VAR_3)) VAR_3++;
  if (!*VAR_3) FUNC_0(VAR_2,VAR_3,VAR_1);
 }
 FUNC_0(VAR_2,VAR_3,FUNC_1(VAR_2));

}
