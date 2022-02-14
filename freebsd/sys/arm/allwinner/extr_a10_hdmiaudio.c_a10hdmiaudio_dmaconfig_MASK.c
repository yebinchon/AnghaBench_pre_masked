
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_dma_config {int dst_noincr; int dst_drqtype; int src_drqtype; int dst_wait_cyc; int src_wait_cyc; int dst_blksize; int src_blksize; int dst_burst_len; int src_burst_len; int dst_width; int src_width; } ;
struct a10hdmiaudio_chinfo {int dmachan; int dmac; } ;
typedef int conf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,struct sunxi_dma_config*) ;
 int FUNC_1 (struct sunxi_dma_config*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct a10hdmiaudio_chinfo *VAR_6)
{
 struct sunxi_dma_config VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.src_width = VAR_7.dst_width = VAR_3;
 VAR_7.src_burst_len = VAR_7.dst_burst_len = VAR_2;
 VAR_7.src_blksize = VAR_7.dst_blksize = VAR_0;
 VAR_7.src_wait_cyc = VAR_7.dst_wait_cyc = VAR_1;
 VAR_7.src_drqtype = VAR_5;
 VAR_7.dst_drqtype = VAR_4;
 VAR_7.dst_noincr = 1;

 FUNC_0(VAR_6->dmac, VAR_6->dmachan, &VAR_7);
}
