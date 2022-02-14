
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_7__ {scalar_t__ action; scalar_t__ read_pos; scalar_t__ read_limit; } ;
struct TYPE_5__ {scalar_t__ (* code ) (int ,TYPE_3__*,int *,size_t*,size_t) ;int coder; } ;
struct TYPE_6__ {TYPE_3__ mf; TYPE_1__ lz; } ;
typedef TYPE_2__ lzma_coder ;
typedef int lzma_allocator ;
typedef scalar_t__ lzma_action ;


 scalar_t__ const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int const*,int const*,size_t*,size_t,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int *,size_t*,size_t) ;

__attribute__((used)) static lzma_ret
FUNC_3(void *VAR_2, const lzma_allocator *VAR_3,
  const uint8_t *restrict VAR_4, size_t *restrict VAR_5,
  size_t VAR_6,
  uint8_t *restrict VAR_7, size_t *restrict VAR_8,
  size_t VAR_9, lzma_action VAR_10)
{
 lzma_coder *VAR_11 = VAR_2;

 while (*VAR_8 < VAR_9
   && (*VAR_5 < VAR_6 || VAR_10 != VAR_1)) {

  if (VAR_11->mf.action == VAR_1 && VAR_11->mf.read_pos
    >= VAR_11->mf.read_limit)
   FUNC_1(FUNC_0(VAR_11, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_10));


  const lzma_ret VAR_12 = VAR_11->lz.code(VAR_11->lz.coder,
    &VAR_11->mf, VAR_7, VAR_8, VAR_9);
  if (VAR_12 != VAR_0) {



   VAR_11->mf.action = VAR_1;
   return VAR_12;
  }
 }

 return VAR_0;
}
