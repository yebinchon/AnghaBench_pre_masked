
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int lzma_ret ;
struct TYPE_4__ {scalar_t__ buf_size_max; int bufs_allocated; scalar_t__ read_pos; scalar_t__ bufs_used; scalar_t__ bufs_pos; int * bufs_mem; int * bufs; } ;
typedef TYPE_1__ lzma_outq ;
typedef int lzma_outbuf ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int*,scalar_t__,int) ;
 void* FUNC_1 (size_t,int const*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (int ) ;

extern lzma_ret
FUNC_4(lzma_outq *VAR_3, const lzma_allocator *VAR_4,
  uint64_t VAR_5, uint32_t VAR_6)
{
 uint64_t VAR_7;
 uint32_t VAR_8;


 FUNC_3(FUNC_0(&VAR_7, &VAR_8,
   VAR_5, VAR_6));


 if (VAR_3->buf_size_max != VAR_5
   || VAR_3->bufs_allocated != VAR_8) {
  FUNC_2(VAR_3, VAR_4);






  VAR_3->bufs = FUNC_1(VAR_8 * sizeof(lzma_outbuf),
    VAR_4);
  VAR_3->bufs_mem = FUNC_1((size_t)(VAR_7),
    VAR_4);

  if (VAR_3->bufs == ((void*)0) || VAR_3->bufs_mem == ((void*)0)) {
   FUNC_2(VAR_3, VAR_4);
   return VAR_0;
  }
 }



 VAR_3->buf_size_max = (size_t)(VAR_5);
 VAR_3->bufs_allocated = VAR_8;
 VAR_3->bufs_pos = 0;
 VAR_3->bufs_used = 0;
 VAR_3->read_pos = 0;

 return VAR_1;
}
