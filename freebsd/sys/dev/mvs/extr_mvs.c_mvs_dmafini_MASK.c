
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * workrq_tag; int * workrq; scalar_t__ workrq_bus; int workrq_map; int * workrp_tag; int * workrp; scalar_t__ workrp_bus; int workrp_map; int * data_tag; } ;
struct mvs_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 struct mvs_channel* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0)
{
 struct mvs_channel *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->dma.data_tag) {
  FUNC_0(VAR_1->dma.data_tag);
  VAR_1->dma.data_tag = ((void*)0);
 }
 if (VAR_1->dma.workrp_bus) {
  FUNC_1(VAR_1->dma.workrp_tag, VAR_1->dma.workrp_map);
  FUNC_2(VAR_1->dma.workrp_tag,
      VAR_1->dma.workrp, VAR_1->dma.workrp_map);
  VAR_1->dma.workrp_bus = 0;
  VAR_1->dma.workrp = ((void*)0);
 }
 if (VAR_1->dma.workrp_tag) {
  FUNC_0(VAR_1->dma.workrp_tag);
  VAR_1->dma.workrp_tag = ((void*)0);
 }
 if (VAR_1->dma.workrq_bus) {
  FUNC_1(VAR_1->dma.workrq_tag, VAR_1->dma.workrq_map);
  FUNC_2(VAR_1->dma.workrq_tag,
      VAR_1->dma.workrq, VAR_1->dma.workrq_map);
  VAR_1->dma.workrq_bus = 0;
  VAR_1->dma.workrq = ((void*)0);
 }
 if (VAR_1->dma.workrq_tag) {
  FUNC_0(VAR_1->dma.workrq_tag);
  VAR_1->dma.workrq_tag = ((void*)0);
 }
}
