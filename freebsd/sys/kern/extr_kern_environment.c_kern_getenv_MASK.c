
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 char* FUNC_3 (char*,int ) ;

char *
FUNC_4(const char *VAR_6)
{
 char VAR_7[VAR_0 + 1 + VAR_1 + 1];
 char *VAR_8;

 if (VAR_5) {
  if (FUNC_2(VAR_6, VAR_7, sizeof(VAR_7))) {
   VAR_8 = FUNC_3(VAR_7, VAR_2);
  } else {
   VAR_8 = ((void*)0);
   FUNC_0(VAR_3 | VAR_4, ((void*)0),
       "getenv");
  }
 } else
  VAR_8 = FUNC_1(VAR_6);
 return (VAR_8);
}
