
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ size; size_t limit; scalar_t__ need_reset; scalar_t__ buf; } ;
struct TYPE_6__ {scalar_t__ (* code ) (int ,TYPE_3__*,int const*,size_t*,size_t) ;int coder; } ;
struct TYPE_7__ {TYPE_3__ dict; TYPE_1__ lz; } ;
typedef TYPE_2__ lzma_coder ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,scalar_t__,size_t const) ;
 size_t FUNC_3 (size_t,size_t) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,int const*,size_t*,size_t) ;

__attribute__((used)) static lzma_ret
FUNC_5(lzma_coder *VAR_1,
  const uint8_t *restrict VAR_2, size_t *restrict VAR_3,
  size_t VAR_4, uint8_t *restrict VAR_5,
  size_t *restrict VAR_6, size_t VAR_7)
{
 while (1) {

  if (VAR_1->dict.pos == VAR_1->dict.size)
   VAR_1->dict.pos = 0;



  const size_t VAR_8 = VAR_1->dict.pos;





  VAR_1->dict.limit = VAR_1->dict.pos
    + FUNC_3(VAR_7 - *VAR_6,
     VAR_1->dict.size - VAR_1->dict.pos);


  const lzma_ret VAR_9 = VAR_1->lz.code(
    VAR_1->lz.coder, &VAR_1->dict,
    VAR_2, VAR_3, VAR_4);



  const size_t VAR_10 = VAR_1->dict.pos - VAR_8;
  FUNC_0(VAR_10 <= VAR_7 - *VAR_6);
  FUNC_2(VAR_5 + *VAR_6, VAR_1->dict.buf + VAR_8,
    VAR_10);
  *VAR_6 += VAR_10;


  if (VAR_1->dict.need_reset) {
   FUNC_1(VAR_1);



   if (VAR_9 != VAR_0 || *VAR_6 == VAR_7)
    return VAR_9;
  } else {
   if (VAR_9 != VAR_0 || *VAR_6 == VAR_7
     || VAR_1->dict.pos < VAR_1->dict.size)
    return VAR_9;
  }
 }
}
