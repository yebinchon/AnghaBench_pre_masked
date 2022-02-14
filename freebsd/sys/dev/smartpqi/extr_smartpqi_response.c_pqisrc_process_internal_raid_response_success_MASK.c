
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_pending; int status; } ;
typedef TYPE_1__ rcb_t ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

void FUNC_1(pqisrc_softstate_t *VAR_1,
       rcb_t *VAR_2)
{
 FUNC_0("IN");

 VAR_2->status = VAR_0;
 VAR_2->req_pending = 0;

 FUNC_0("OUT");
}
