
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_2__ {int oq_id; int pqi_dev; } ;
typedef TYPE_1__ pqi_intr_ctx_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 pqi_intr_ctx_t *VAR_1 = (pqi_intr_ctx_t *)VAR_0;
 pqisrc_softstate_t *VAR_2 = FUNC_1(VAR_1->pqi_dev);
 int VAR_3 = VAR_1->oq_id;

 FUNC_0("IN\n");

 FUNC_3(VAR_2, VAR_3);
 FUNC_2(VAR_2, VAR_3 - 1);

 FUNC_0("OUT\n");
}
