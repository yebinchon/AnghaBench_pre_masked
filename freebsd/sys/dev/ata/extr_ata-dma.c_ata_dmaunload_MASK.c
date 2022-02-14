
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int flags; TYPE_1__* dma; } ;
struct TYPE_2__ {int data_map; int data_tag; int sg_map; int sg_tag; } ;


 int FUNC_0 (struct ata_request*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct ata_request *VAR_3)
{
    FUNC_0(VAR_3, "dmaunload");

    if (VAR_3->dma) {
 FUNC_1(VAR_3->dma->sg_tag, VAR_3->dma->sg_map,
   VAR_2);
 FUNC_1(VAR_3->dma->data_tag, VAR_3->dma->data_map,
   (VAR_3->flags & VAR_0) ?
   VAR_1 : VAR_2);

 FUNC_2(VAR_3->dma->data_tag, VAR_3->dma->data_map);
        VAR_3->dma = ((void*)0);
    }
    return 0;
}
