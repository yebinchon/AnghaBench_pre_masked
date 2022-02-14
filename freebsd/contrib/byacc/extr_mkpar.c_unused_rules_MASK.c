
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ action_code; size_t number; struct TYPE_4__* next; } ;
typedef TYPE_1__ action ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int* FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_9;
    action *VAR_10;

    VAR_7 = FUNC_2(VAR_1, VAR_3);
    FUNC_1(VAR_7);

    for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
 VAR_7[VAR_9] = 0;

    for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
    {
 for (VAR_10 = VAR_6[VAR_9]; VAR_10; VAR_10 = VAR_10->next)
 {
     if ((VAR_10->action_code == VAR_0) && FUNC_0(VAR_10))
  VAR_7[VAR_10->number] = 1;
 }
    }

    VAR_5 = 0;
    for (VAR_9 = 3; VAR_9 < VAR_3; ++VAR_9)
 if (!VAR_7[VAR_9])
     ++VAR_5;

    if (VAR_5)
    {
 if (VAR_5 == 1)
     FUNC_3(VAR_8, "%s: 1 rule never reduced\n", VAR_2);
 else
     FUNC_3(VAR_8, "%s: %d rules never reduced\n", VAR_2, VAR_5);
    }
}
