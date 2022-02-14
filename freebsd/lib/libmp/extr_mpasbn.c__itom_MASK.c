
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char**,char*,short) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static MINT *
FUNC_4(const char *VAR_0, short VAR_1)
{
 MINT *VAR_2;
 char *VAR_3;

 FUNC_2(&VAR_3, "%hx", VAR_1);
 if (VAR_3 == ((void*)0))
  FUNC_0(("%s", VAR_0));
 VAR_2 = FUNC_1(VAR_0, VAR_3);
 FUNC_3(VAR_3);
 return (VAR_2);
}
