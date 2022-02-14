
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdsmn_softc {int smn_lock; TYPE_1__* smn_pciid; } ;
typedef int device_t ;
struct TYPE_2__ {int amdsmn_data_reg; int amdsmn_addr_reg; } ;


 int FUNC_0 (int ) ;
 struct amdsmn_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;

int
FUNC_6(device_t VAR_0, uint32_t VAR_1, uint32_t *VAR_2)
{
 struct amdsmn_softc *VAR_3 = FUNC_1(VAR_0);
 device_t VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 FUNC_2(&VAR_3->smn_lock);
 FUNC_5(VAR_4, VAR_3->smn_pciid->amdsmn_addr_reg, VAR_1, 4);
 *VAR_2 = FUNC_4(VAR_4, VAR_3->smn_pciid->amdsmn_data_reg, 4);
 FUNC_3(&VAR_3->smn_lock);

 return (0);
}
