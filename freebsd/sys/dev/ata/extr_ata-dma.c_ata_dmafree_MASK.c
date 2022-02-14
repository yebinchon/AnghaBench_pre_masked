
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_dmaslot {int * data_tag; int * sg_tag; int * data_map; int * sg; int sg_map; scalar_t__ sg_bus; } ;
struct TYPE_2__ {struct ata_dmaslot* slot; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 struct ata_channel* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1)
{
    struct ata_channel *VAR_2 = FUNC_4(VAR_1);
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 struct ata_dmaslot *VAR_4 = &VAR_2->dma.slot[VAR_3];

 if (VAR_4->sg_bus) {
            FUNC_2(VAR_4->sg_tag, VAR_4->sg_map);
            VAR_4->sg_bus = 0;
 }
 if (VAR_4->sg) {
            FUNC_3(VAR_4->sg_tag, VAR_4->sg, VAR_4->sg_map);
            VAR_4->sg = ((void*)0);
 }
 if (VAR_4->data_map) {
            FUNC_1(VAR_4->data_tag, VAR_4->data_map);
            VAR_4->data_map = ((void*)0);
 }
 if (VAR_4->sg_tag) {
            FUNC_0(VAR_4->sg_tag);
            VAR_4->sg_tag = ((void*)0);
 }
 if (VAR_4->data_tag) {
            FUNC_0(VAR_4->data_tag);
            VAR_4->data_tag = ((void*)0);
 }
    }
}
