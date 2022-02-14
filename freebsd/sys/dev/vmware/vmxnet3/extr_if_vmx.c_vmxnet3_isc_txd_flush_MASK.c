
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct vmxnet3_txqueue {int vxtxq_id; int vxtxq_last_flush; } ;
struct vmxnet3_softc {struct vmxnet3_txqueue* vmx_txq; } ;
typedef int qidx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, uint16_t VAR_1, qidx_t VAR_2)
{
 struct vmxnet3_softc *VAR_3;
 struct vmxnet3_txqueue *VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = &VAR_3->vmx_txq[VAR_1];
 if (VAR_4->vxtxq_last_flush == VAR_2)
  return;
 VAR_4->vxtxq_last_flush = VAR_2;
 FUNC_1(VAR_3, FUNC_0(VAR_4->vxtxq_id), VAR_2);
}
