
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sha2_word64 ;
typedef int const sha2_byte ;
struct TYPE_4__ {int* bitcount; int * buffer; } ;
typedef TYPE_1__ SHA512_CTX ;


 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int) ;

void FUNC_4(SHA512_CTX* VAR_1, void *VAR_2, size_t VAR_3) {
 size_t VAR_4, VAR_5;
 const sha2_byte* VAR_6 = (const sha2_byte*)VAR_2;

 if (VAR_3 == 0) {

  return;
 }


 FUNC_3(VAR_1 != (SHA512_CTX*)0 && VAR_6 != (sha2_byte*)0);

 VAR_5 = (VAR_1->bitcount[0] >> 3) % VAR_0;
 if (VAR_5 > 0) {

  VAR_4 = VAR_0 - VAR_5;

  if (VAR_3 >= VAR_4) {

   FUNC_1(&VAR_1->buffer[VAR_5], VAR_6, VAR_4);
   FUNC_0(VAR_1->bitcount, VAR_4 << 3);
   VAR_3 -= VAR_4;
   VAR_6 += VAR_4;
   FUNC_2(VAR_1, (sha2_word64*)VAR_1->buffer);
  } else {

   FUNC_1(&VAR_1->buffer[VAR_5], VAR_6, VAR_3);
   FUNC_0(VAR_1->bitcount, VAR_3 << 3);

   VAR_5 = VAR_4 = 0;
   return;
  }
 }
 while (VAR_3 >= VAR_0) {

  FUNC_2(VAR_1, (sha2_word64*)VAR_6);
  FUNC_0(VAR_1->bitcount, VAR_0 << 3);
  VAR_3 -= VAR_0;
  VAR_6 += VAR_0;
 }
 if (VAR_3 > 0) {

  FUNC_1(VAR_1->buffer, VAR_6, VAR_3);
  FUNC_0(VAR_1->bitcount, VAR_3 << 3);
 }

 VAR_5 = VAR_4 = 0;
}
