
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t uint16_t ;
struct vmxnet3_softc {struct vmxnet3_rxqueue* vmx_rxq; } ;
struct vmxnet3_rxring {scalar_t__ vxrxr_ndesc; } ;
struct vmxnet3_rxqueue {struct vmxnet3_rxring* vxrxq_cmd_ring; } ;
typedef scalar_t__ qidx_t ;
typedef int bus_size_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct vmxnet3_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, uint16_t VAR_1, uint8_t VAR_2, qidx_t VAR_3)
{
 struct vmxnet3_softc *VAR_4;
 struct vmxnet3_rxqueue *VAR_5;
 struct vmxnet3_rxring *VAR_6;
 bus_size_t VAR_7;

 VAR_4 = VAR_0;
 VAR_5 = &VAR_4->vmx_rxq[VAR_1];
 VAR_6 = &VAR_5->vxrxq_cmd_ring[VAR_2];

 if (VAR_2 == 0)
  VAR_7 = FUNC_0(VAR_1);
 else
  VAR_7 = FUNC_1(VAR_1);






 if (++VAR_3 == VAR_6->vxrxr_ndesc)
  VAR_3 = 0;
 FUNC_2(VAR_4, VAR_7, VAR_3);
}
