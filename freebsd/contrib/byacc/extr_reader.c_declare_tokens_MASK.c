
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* tag; scalar_t__ prec; scalar_t__ value; int name; scalar_t__ assoc; int class; } ;
typedef TYPE_1__ bucket ;
typedef scalar_t__ Value_t ;
typedef scalar_t__ Assoc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 char* FUNC_3 () ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(int VAR_6)
{
    int VAR_7;
    bucket *VAR_8;
    Value_t VAR_9;
    char *VAR_10 = 0;

    if (VAR_6 != VAR_2)
 ++VAR_5;

    VAR_7 = FUNC_6();
    if (VAR_7 == VAR_0)
 FUNC_11();
    if (VAR_7 == '<')
    {
 VAR_10 = FUNC_3();
 VAR_7 = FUNC_6();
 if (VAR_7 == VAR_0)
     FUNC_11();
    }

    for (;;)
    {
 if (FUNC_4(VAR_7) || VAR_7 == '_' || VAR_7 == '.' || VAR_7 == '$')
     VAR_8 = FUNC_1();
 else if (VAR_7 == '\'' || VAR_7 == '"')
     VAR_8 = FUNC_0();
 else
     return;

 if (VAR_8 == VAR_4)
     FUNC_10(VAR_8->name);
 VAR_8->class = VAR_1;

 if (VAR_10)
 {
     if (VAR_8->tag && VAR_10 != VAR_8->tag)
  FUNC_8(VAR_8->name);
     VAR_8->tag = VAR_10;
 }

 if (VAR_6 != VAR_2)
 {
     if (VAR_8->prec && VAR_5 != VAR_8->prec)
  FUNC_7(VAR_8->name);
     VAR_8->assoc = (Assoc_t)VAR_6;
     VAR_8->prec = VAR_5;
 }

 VAR_7 = FUNC_6();
 if (VAR_7 == VAR_0)
     FUNC_11();

 VAR_9 = VAR_3;
 if (FUNC_5(VAR_7))
 {
     VAR_9 = FUNC_2();
     if (VAR_8->value != VAR_3 && VAR_9 != VAR_8->value)
  FUNC_9(VAR_8->name);
     VAR_8->value = VAR_9;
     VAR_7 = FUNC_6();
     if (VAR_7 == VAR_0)
  FUNC_11();
 }
    }
}
