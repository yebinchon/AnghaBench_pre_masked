
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int workrq_bus; int workrp_bus; int workrp_map; int workrp_tag; int workrp; int workrq_map; int workrq_tag; } ;
struct mvs_channel {scalar_t__ in_idx; scalar_t__ out_idx; TYPE_1__ dma; int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 struct mvs_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_9)
{
 struct mvs_channel *VAR_10 = FUNC_2(VAR_9);
 uint64_t VAR_11;


 VAR_11 = VAR_10->dma.workrq_bus;
 FUNC_0(VAR_10->r_mem, VAR_2, VAR_11 >> 32);
 FUNC_0(VAR_10->r_mem, VAR_3, VAR_11 & 0xffffffff);
 FUNC_0(VAR_10->r_mem, VAR_4, VAR_11 & 0xffffffff);
 FUNC_1(VAR_10->dma.workrq_tag, VAR_10->dma.workrq_map,
     VAR_1);

 FUNC_3(VAR_10->dma.workrp, 0xff, VAR_8);
 VAR_11 = VAR_10->dma.workrp_bus;
 FUNC_0(VAR_10->r_mem, VAR_5, VAR_11 >> 32);
 FUNC_0(VAR_10->r_mem, VAR_6, VAR_11 & 0xffffffff);
 FUNC_0(VAR_10->r_mem, VAR_7, VAR_11 & 0xffffffff);
 FUNC_1(VAR_10->dma.workrp_tag, VAR_10->dma.workrp_map,
     VAR_0);
 VAR_10->out_idx = 0;
 VAR_10->in_idx = 0;
}
