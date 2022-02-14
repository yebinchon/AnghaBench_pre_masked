
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {TYPE_1__* ioa_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_7__ {int host_to_ioa_db; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(pqisrc_softstate_t *VAR_3)
{
 uint32_t VAR_4;

 FUNC_1("IN\n");

 VAR_4 = FUNC_2(VAR_3, &VAR_3->ioa_reg->host_to_ioa_db,
   VAR_0);
 VAR_4 |= VAR_2;
 FUNC_3(VAR_3, &VAR_3->ioa_reg->host_to_ioa_db,
   VAR_0, VAR_4);
 if (FUNC_4(VAR_3,VAR_2)
   != VAR_1) {
  FUNC_0("Failed to wait for enable intx db bit to clear\n");
 }
 FUNC_1("OUT\n");
}
