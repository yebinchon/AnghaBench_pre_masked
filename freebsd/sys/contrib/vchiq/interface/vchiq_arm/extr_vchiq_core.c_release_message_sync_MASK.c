
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* remote; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_8__ {int msgid; } ;
typedef TYPE_3__ VCHIQ_HEADER_T ;
struct TYPE_6__ {int sync_release; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(VCHIQ_STATE_T *VAR_1, VCHIQ_HEADER_T *VAR_2)
{
 VAR_2->msgid = VAR_0;
 FUNC_1();
 FUNC_0(&VAR_1->remote->sync_release);
}
