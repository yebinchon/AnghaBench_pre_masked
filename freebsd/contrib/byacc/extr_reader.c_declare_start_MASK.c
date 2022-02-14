
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ class; int name; } ;
typedef TYPE_1__ bucket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
    int VAR_6;
    bucket *VAR_7;

    VAR_6 = FUNC_2();
    if (VAR_6 == VAR_0)
 FUNC_6();
    if (!FUNC_1(VAR_6) && VAR_6 != '_' && VAR_6 != '.' && VAR_6 != '$')
 FUNC_4(VAR_5, VAR_4, VAR_2);
    VAR_7 = FUNC_0();
    if (VAR_7->class == VAR_1)
 FUNC_5(VAR_7->name);
    if (VAR_3 && VAR_3 != VAR_7)
 FUNC_3();
    VAR_3 = VAR_7;
}
