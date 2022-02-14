
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Linetype ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int*,char const**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static Linetype
FUNC_2(const char **VAR_4)
{
 const char *VAR_5 = *VAR_4;
 int VAR_6;
 int VAR_7;

 FUNC_0("eval %s", *VAR_4);
 VAR_2 = VAR_3 ? 0 : 1;
 VAR_6 = FUNC_1(VAR_1, &VAR_7, &VAR_5);
 if (VAR_6 != VAR_0)
  *VAR_4 = VAR_5;
 FUNC_0("eval = %d", VAR_7);
 return (VAR_2 ? VAR_0 : VAR_6);
}
