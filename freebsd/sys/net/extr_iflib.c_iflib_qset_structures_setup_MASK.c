
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* if_ctx_t ;
struct TYPE_5__ {int ifc_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(if_ctx_t VAR_0)
{
 int VAR_1;





 if ((VAR_1 = FUNC_2(VAR_0)) != 0) {
  FUNC_0(VAR_0->ifc_dev, "iflib_tx_structures_setup failed: %d\n", VAR_1);
  return (VAR_1);
 }

 if ((VAR_1 = FUNC_1(VAR_0)) != 0)
  FUNC_0(VAR_0->ifc_dev, "iflib_rx_structures_setup failed: %d\n", VAR_1);

 return (VAR_1);
}
