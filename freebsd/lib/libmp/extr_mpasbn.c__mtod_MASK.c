
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bn; } ;
typedef TYPE_1__ MINT ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char**,char*,char*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const MINT *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1->bn);
 if (VAR_2 == ((void*)0))
  FUNC_3(VAR_0);
 FUNC_4(&VAR_3, "%s", VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1(("%s", VAR_0));
 FUNC_2(VAR_2);
 return (VAR_3);
}
