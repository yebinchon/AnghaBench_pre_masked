
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_3__ {int* bitcount; int const* buffer; int state; } ;
typedef TYPE_1__ SHA512_CTX ;


 int FUNC_0 (int*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int const*,int const*,size_t) ;

void
FUNC_3(SHA512_CTX *VAR_1, const u_int8_t *VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;


 if (VAR_3 == 0)
  return;

 VAR_5 = (VAR_1->bitcount[0] >> 3) % VAR_0;
 if (VAR_5 > 0) {

  VAR_4 = VAR_0 - VAR_5;

  if (VAR_3 >= VAR_4) {

   FUNC_2(&VAR_1->buffer[VAR_5], VAR_2, VAR_4);
   FUNC_0(VAR_1->bitcount, VAR_4 << 3);
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
   FUNC_1(VAR_1->state, VAR_1->buffer);
  } else {

   FUNC_2(&VAR_1->buffer[VAR_5], VAR_2, VAR_3);
   FUNC_0(VAR_1->bitcount, VAR_3 << 3);

   VAR_5 = VAR_4 = 0;
   return;
  }
 }
 while (VAR_3 >= VAR_0) {

  FUNC_1(VAR_1->state, VAR_2);
  FUNC_0(VAR_1->bitcount, VAR_0 << 3);
  VAR_3 -= VAR_0;
  VAR_2 += VAR_0;
 }
 if (VAR_3 > 0) {

  FUNC_2(VAR_1->buffer, VAR_2, VAR_3);
  FUNC_0(VAR_1->bitcount, VAR_3 << 3);
 }

 VAR_5 = VAR_4 = 0;
}
