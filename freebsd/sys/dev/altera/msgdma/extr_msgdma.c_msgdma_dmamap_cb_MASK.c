
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msgdma_channel {int map_err; size_t map_descr; TYPE_1__* descs_phys; } ;
struct TYPE_5__ {int ds_len; int ds_addr; } ;
typedef TYPE_2__ bus_dma_segment_t ;
struct TYPE_4__ {int ds_len; int ds_addr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct msgdma_channel *VAR_4;

 VAR_4 = (struct msgdma_channel *)VAR_0;
 FUNC_0(VAR_4 != ((void*)0), ("xchan is NULL"));

 if (VAR_3) {
  VAR_4->map_err = 1;
  return;
 }

 VAR_4->descs_phys[VAR_4->map_descr].ds_addr = VAR_1[0].ds_addr;
 VAR_4->descs_phys[VAR_4->map_descr].ds_len = VAR_1[0].ds_len;

 FUNC_1("map desc %d: descs phys %lx len %ld\n",
     VAR_4->map_descr, VAR_1[0].ds_addr, VAR_1[0].ds_len);
}
