
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arith_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char**) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static arith_t FUNC_3(char *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 arith_t VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_1 && VAR_3 == ((void*)0))
  FUNC_2("variable not set");
 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  VAR_3 = "0";
 VAR_0 = 0;
 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_0 != 0 || *VAR_4 != '\0')
  FUNC_2("variable conversion error");
 return VAR_5;
}
