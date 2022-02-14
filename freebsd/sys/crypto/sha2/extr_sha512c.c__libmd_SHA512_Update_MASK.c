
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* count; unsigned char const* buf; int state; } ;
typedef TYPE_1__ SHA512_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

void
FUNC_2(SHA512_CTX * VAR_1, const void *VAR_2, size_t VAR_3)
{
 uint64_t VAR_4[2];
 uint64_t VAR_5;
 const unsigned char *VAR_6 = VAR_2;


 VAR_5 = (VAR_1->count[1] >> 3) & 0x7f;


 VAR_4[1] = ((uint64_t)VAR_3) << 3;
 VAR_4[0] = ((uint64_t)VAR_3) >> 61;


 if ((VAR_1->count[1] += VAR_4[1]) < VAR_4[1])
  VAR_1->count[0]++;
 VAR_1->count[0] += VAR_4[0];


 if (VAR_3 < VAR_0 - VAR_5) {
  FUNC_1(&VAR_1->buf[VAR_5], VAR_6, VAR_3);
  return;
 }


 FUNC_1(&VAR_1->buf[VAR_5], VAR_6, VAR_0 - VAR_5);
 FUNC_0(VAR_1->state, VAR_1->buf);
 VAR_6 += VAR_0 - VAR_5;
 VAR_3 -= VAR_0 - VAR_5;


 while (VAR_3 >= VAR_0) {
  FUNC_0(VAR_1->state, VAR_6);
  VAR_6 += VAR_0;
  VAR_3 -= VAR_0;
 }


 FUNC_1(VAR_1->buf, VAR_6, VAR_3);
}
