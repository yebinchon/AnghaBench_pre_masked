
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_9__ {scalar_t__ (* code ) (int ,int const*,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;int coder; } ;
typedef TYPE_1__ lzma_next_coder ;
struct TYPE_10__ {size_t header_size; size_t compressed_size; int filters; } ;
typedef TYPE_2__ lzma_block ;
typedef int lzma_allocator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int const*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int const*,int const*,size_t*,size_t,int *,size_t*,size_t,int ) ;

__attribute__((used)) static lzma_ret
FUNC_6(lzma_block *VAR_6, const lzma_allocator *VAR_7,
  const uint8_t *VAR_8, size_t VAR_9,
  uint8_t *VAR_10, size_t *VAR_11, size_t VAR_12)
{

 FUNC_4(FUNC_1(VAR_6));


 if (VAR_12 - *VAR_11 <= VAR_6->header_size)
  return VAR_0;

 const size_t VAR_13 = *VAR_11;
 *VAR_11 += VAR_6->header_size;



 if (VAR_12 - *VAR_11 > VAR_6->compressed_size)
  VAR_12 = *VAR_11 + VAR_6->compressed_size;



 lzma_next_coder VAR_14 = VAR_2;
 lzma_ret VAR_15 = FUNC_3(
   &VAR_14, VAR_7, VAR_6->filters);

 if (VAR_15 == VAR_3) {
  size_t VAR_16 = 0;
  VAR_15 = VAR_14.code(VAR_14.coder, VAR_7,
    VAR_8, &VAR_16, VAR_9, VAR_10, VAR_11, VAR_12,
    VAR_1);
 }


 FUNC_2(&VAR_14, VAR_7);

 if (VAR_15 == VAR_5) {

  VAR_6->compressed_size
    = *VAR_11 - (VAR_13 + VAR_6->header_size);
  VAR_15 = FUNC_0(VAR_6, VAR_10 + VAR_13);
  if (VAR_15 != VAR_3)
   VAR_15 = VAR_4;

 } else if (VAR_15 == VAR_3) {

  VAR_15 = VAR_0;
 }


 if (VAR_15 != VAR_3)
  *VAR_11 = VAR_13;

 return VAR_15;
}
