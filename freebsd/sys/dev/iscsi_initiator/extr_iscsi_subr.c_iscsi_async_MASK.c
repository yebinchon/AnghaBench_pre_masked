
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int asyncEvent; int asyncVCode; } ;
struct TYPE_6__ {TYPE_4__ async; } ;
struct TYPE_8__ {TYPE_1__ ipdu; } ;
struct TYPE_7__ {TYPE_3__ pdu; } ;
typedef TYPE_2__ pduq_t ;
typedef TYPE_3__ pdu_t ;
typedef int isc_session_t ;
typedef TYPE_4__ async_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,int,int ) ;

void
FUNC_3(isc_session_t *VAR_0, pduq_t *VAR_1)
{
     pdu_t *VAR_2 = &VAR_1->pdu;
     async_t *VAR_3 = &VAR_2->ipdu.async;

     FUNC_0(8);

     FUNC_2(3, "asyncevent=0x%x asyncVCode=0x%0x", VAR_3->asyncEvent, VAR_3->asyncVCode);
     switch(VAR_3->asyncEvent) {
     case 0:
   break;

     case 1:
   FUNC_1(VAR_0);
   break;

     case 2:
   FUNC_1(VAR_0);
   break;

     case 3:
   FUNC_1(VAR_0);
   break;

     case 4:
   break;

     default:
   break;
     }
}
