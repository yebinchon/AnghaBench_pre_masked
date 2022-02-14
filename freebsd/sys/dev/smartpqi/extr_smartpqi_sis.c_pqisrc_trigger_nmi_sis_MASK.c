
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ioa_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_5__ {int host_to_ioa_db; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 int VAR_1 ;

void FUNC_3(pqisrc_softstate_t *VAR_2)
{

 FUNC_0("IN\n");

 FUNC_2(VAR_2, &VAR_2->ioa_reg->host_to_ioa_db,
   VAR_0, FUNC_1(VAR_1));
 FUNC_0("OUT\n");
}
