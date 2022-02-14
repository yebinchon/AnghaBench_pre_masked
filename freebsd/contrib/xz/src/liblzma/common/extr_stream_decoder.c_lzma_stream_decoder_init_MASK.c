
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int tell_no_check; int tell_unsupported_check; int tell_any_check; int ignore_check; int concatenated; int first_stream; int memusage; int memlimit; int * index_hash; int block_decoder; } ;
typedef TYPE_1__ lzma_stream_coder ;
typedef int lzma_ret ;
struct TYPE_9__ {int * memconfig; int * get_check; int * end; int * code; TYPE_1__* coder; } ;
typedef TYPE_2__ lzma_next_coder ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_0 (int,int const*) ;
 int FUNC_1 (int (*) (TYPE_2__*,int const*,int ,int),TYPE_2__*,int const*) ;
 int FUNC_2 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*,int const*) ;

extern lzma_ret
FUNC_4(
  lzma_next_coder *VAR_14, const lzma_allocator *VAR_15,
  uint64_t VAR_16, uint32_t VAR_17)
{
 FUNC_1(&FUNC_4, VAR_14, VAR_15);

 if (VAR_17 & ~VAR_6)
  return VAR_5;

 lzma_stream_coder *VAR_18 = VAR_14->coder;
 if (VAR_18 == ((void*)0)) {
  VAR_18 = FUNC_0(sizeof(lzma_stream_coder), VAR_15);
  if (VAR_18 == ((void*)0))
   return VAR_3;

  VAR_14->coder = VAR_18;
  VAR_14->code = &VAR_10;
  VAR_14->end = &VAR_11;
  VAR_14->get_check = &VAR_12;
  VAR_14->memconfig = &VAR_13;

  VAR_18->block_decoder = VAR_4;
  VAR_18->index_hash = ((void*)0);
 }

 VAR_18->memlimit = FUNC_2(1, VAR_16);
 VAR_18->memusage = VAR_2;
 VAR_18->tell_no_check = (VAR_17 & VAR_8) != 0;
 VAR_18->tell_unsupported_check
   = (VAR_17 & VAR_9) != 0;
 VAR_18->tell_any_check = (VAR_17 & VAR_7) != 0;
 VAR_18->ignore_check = (VAR_17 & VAR_1) != 0;
 VAR_18->concatenated = (VAR_17 & VAR_0) != 0;
 VAR_18->first_stream = 1;

 return FUNC_3(VAR_18, VAR_15);
}
