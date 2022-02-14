
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_dma_config {int src_width; int dst_width; int src_burst_len; int dst_burst_len; int dst_noincr; int src_noincr; int dst_drqtype; int src_drqtype; } ;
struct a10codec_info {TYPE_1__* cfg; } ;
struct a10codec_chinfo {scalar_t__ dir; int dmachan; int dmac; struct a10codec_info* parent; } ;
typedef int conf ;
struct TYPE_2__ {int drqtype_sdram; int drqtype_codec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,struct sunxi_dma_config*) ;
 int FUNC_1 (struct sunxi_dma_config*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct a10codec_chinfo *VAR_1)
{
 struct a10codec_info *VAR_2 = VAR_1->parent;
 struct sunxi_dma_config VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.src_width = VAR_3.dst_width = 16;
 VAR_3.src_burst_len = VAR_3.dst_burst_len = 4;

 if (VAR_1->dir == VAR_0) {
  VAR_3.dst_noincr = 1;
  VAR_3.src_drqtype = VAR_2->cfg->drqtype_sdram;
  VAR_3.dst_drqtype = VAR_2->cfg->drqtype_codec;
 } else {
  VAR_3.src_noincr = 1;
  VAR_3.src_drqtype = VAR_2->cfg->drqtype_codec;
  VAR_3.dst_drqtype = VAR_2->cfg->drqtype_sdram;
 }

 FUNC_0(VAR_1->dmac, VAR_1->dmachan, &VAR_3);
}
