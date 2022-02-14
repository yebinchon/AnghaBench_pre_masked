
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* value; } ;


 int FUNC_0 (int,char*,...) ;
 struct option* FUNC_1 (char const*) ;

char *
FUNC_2(const char *VAR_0)
{
 struct option *VAR_1;

 if (VAR_0 == ((void*)0))
  FUNC_0(1, "getoptionvalue: invoked with NULL name");
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0))
  return (VAR_1->value);
 FUNC_0(1, "getoptionvalue: invoked with unknown option `%s'", VAR_0);

}
