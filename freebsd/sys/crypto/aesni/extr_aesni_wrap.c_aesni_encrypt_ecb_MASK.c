
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct blocks8 {void** blk; } ;
typedef void* __m128i ;


 size_t VAR_0 ;
 int FUNC_0 (void* const*) ;
 int FUNC_1 (void**,void*) ;
 void* FUNC_2 (int,void const*,int ) ;
 int FUNC_3 (int,void const*,void*,void*,void*,void*,void*,void*,void*,void*,void**) ;

void
FUNC_4(int VAR_1, const void *VAR_2, size_t VAR_3,
    const uint8_t *VAR_4, uint8_t *VAR_5)
{
 __m128i VAR_6;
 __m128i VAR_7[8];
 struct blocks8 *VAR_8;
 const struct blocks8 *VAR_9;
 size_t VAR_10, VAR_11;

 VAR_11 = VAR_3 / VAR_0 / 8;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_9 = (const struct blocks8 *)VAR_4;
  VAR_8 = (struct blocks8 *)VAR_5;
  FUNC_3(VAR_1 - 1, VAR_2, VAR_9->blk[0], VAR_9->blk[1],
      VAR_9->blk[2], VAR_9->blk[3], VAR_9->blk[4], VAR_9->blk[5],
      VAR_9->blk[6], VAR_9->blk[7], VAR_7);
  VAR_8->blk[0] = VAR_7[0];
  VAR_8->blk[1] = VAR_7[1];
  VAR_8->blk[2] = VAR_7[2];
  VAR_8->blk[3] = VAR_7[3];
  VAR_8->blk[4] = VAR_7[4];
  VAR_8->blk[5] = VAR_7[5];
  VAR_8->blk[6] = VAR_7[6];
  VAR_8->blk[7] = VAR_7[7];
  VAR_4 += VAR_0 * 8;
  VAR_5 += VAR_0 * 8;
 }
 VAR_10 *= 8;
 VAR_11 = VAR_3 / VAR_0;
 for (; VAR_10 < VAR_11; VAR_10++) {
  VAR_6 = FUNC_2(VAR_1 - 1, VAR_2,
      FUNC_0((const __m128i *)VAR_4));
  FUNC_1((__m128i *)VAR_5, VAR_6);
  VAR_4 += VAR_0;
  VAR_5 += VAR_0;
 }
}
