
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int lzma_vli ;
typedef int lzma_ret ;
struct TYPE_4__ {scalar_t__ bufs_used; size_t bufs_pos; scalar_t__ read_pos; TYPE_2__* bufs; scalar_t__ bufs_allocated; } ;
typedef TYPE_1__ lzma_outq ;
struct TYPE_5__ {scalar_t__ size; int uncompressed_size; int unpadded_size; int buf; int finished; } ;
typedef TYPE_2__ lzma_outbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__,int *,size_t*,size_t) ;

extern lzma_ret
FUNC_1(lzma_outq *restrict VAR_2, uint8_t *restrict VAR_3,
  size_t *restrict VAR_4, size_t VAR_5,
  lzma_vli *restrict VAR_6,
  lzma_vli *restrict VAR_7)
{

 if (VAR_2->bufs_used == 0)
  return VAR_0;


 uint32_t VAR_8 = VAR_2->bufs_pos - VAR_2->bufs_used;
 if (VAR_2->bufs_pos < VAR_2->bufs_used)
  VAR_8 += VAR_2->bufs_allocated;

 lzma_outbuf *VAR_9 = &VAR_2->bufs[VAR_8];


 if (!VAR_9->finished)
  return VAR_0;


 FUNC_0(VAR_9->buf, &VAR_2->read_pos, VAR_9->size,
   VAR_3, VAR_4, VAR_5);


 if (VAR_2->read_pos < VAR_9->size)
  return VAR_0;


 *VAR_6 = VAR_9->unpadded_size;
 *VAR_7 = VAR_9->uncompressed_size;


 --VAR_2->bufs_used;
 VAR_2->read_pos = 0;

 return VAR_1;
}
