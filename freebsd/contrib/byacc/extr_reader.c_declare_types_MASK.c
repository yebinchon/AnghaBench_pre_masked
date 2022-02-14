
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* tag; int name; scalar_t__ args; } ;
typedef TYPE_1__ bucket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(void)
{
    int VAR_2;
    bucket *VAR_3 = ((void*)0);
    char *VAR_4 = ((void*)0);

    VAR_2 = FUNC_5();
    if (VAR_2 == VAR_0)
 FUNC_7();
    if (VAR_2 == '<')
 VAR_4 = FUNC_3();

    for (;;)
    {
 VAR_2 = FUNC_5();
 if (VAR_2 == VAR_0)
     FUNC_7();
 if (FUNC_4(VAR_2) || VAR_2 == '_' || VAR_2 == '.' || VAR_2 == '$')
 {
     VAR_3 = FUNC_2();






 }
 else if (VAR_2 == '\'' || VAR_2 == '"')
 {
     VAR_3 = FUNC_1();



 }
 else
     return;

 if (VAR_4)
 {
     if (VAR_3->tag && VAR_4 != VAR_3->tag)
  FUNC_6(VAR_3->name);
     VAR_3->tag = VAR_4;
 }
    }
}
