
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remove_event; int insert_event; } ;
typedef TYPE_1__ USER_SERVICE_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 USER_SERVICE_T *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->insert_event);
 FUNC_0(&VAR_1->remove_event);

 FUNC_1(VAR_1);
}
