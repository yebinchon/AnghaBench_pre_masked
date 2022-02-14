
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocs_softc {TYPE_1__* reg; } ;
typedef int device_t ;
struct TYPE_2__ {int * res; int bhandle; int btag; int rid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, struct ocs_softc *VAR_5)
{





 VAR_5->reg[0].rid = FUNC_0(VAR_1);
 VAR_5->reg[0].res = FUNC_1(VAR_4, VAR_3,
   &VAR_5->reg[0].rid, VAR_2);

 if (VAR_5->reg[0].res == ((void*)0)) {
  FUNC_2(VAR_4, "bus_alloc_resource failed rid=%#x\n",
    VAR_5->reg[0].rid);
  return VAR_0;
 }

 VAR_5->reg[0].btag = FUNC_4(VAR_5->reg[0].res);
 VAR_5->reg[0].bhandle = FUNC_3(VAR_5->reg[0].res);
 return 0;
}
