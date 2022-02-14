
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bufs_used; int bufs_allocated; size_t bufs_pos; int buf_size_max; int bufs_mem; TYPE_2__* bufs; } ;
typedef TYPE_1__ lzma_outq ;
struct TYPE_6__ {int finished; scalar_t__ size; int buf; } ;
typedef TYPE_2__ lzma_outbuf ;


 int FUNC_0 (int) ;

extern lzma_outbuf *
FUNC_1(lzma_outq *VAR_0)
{

 FUNC_0(VAR_0->bufs_used < VAR_0->bufs_allocated);


 lzma_outbuf *VAR_1 = &VAR_0->bufs[VAR_0->bufs_pos];
 VAR_1->buf = VAR_0->bufs_mem + VAR_0->bufs_pos * VAR_0->buf_size_max;
 VAR_1->size = 0;
 VAR_1->finished = 0;


 if (++VAR_0->bufs_pos == VAR_0->bufs_allocated)
  VAR_0->bufs_pos = 0;

 ++VAR_0->bufs_used;

 return VAR_1;
}
