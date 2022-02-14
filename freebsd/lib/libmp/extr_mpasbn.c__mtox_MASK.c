
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
 int FUNC_5 (char*) ;
 char FUNC_6 (char) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_0, const MINT *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_1->bn);
 if (VAR_3 == ((void*)0))
  FUNC_3(VAR_0);
 FUNC_4(&VAR_4, "%s", VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_1(("%s", VAR_0));
 FUNC_2(VAR_3);
 VAR_5 = FUNC_5(VAR_4);
 for (VAR_2 = VAR_4; VAR_2 < VAR_4 + VAR_5; VAR_2++)
  *VAR_2 = FUNC_6(*VAR_2);

 return (VAR_4);
}
