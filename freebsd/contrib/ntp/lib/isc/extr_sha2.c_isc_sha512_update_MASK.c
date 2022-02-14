
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const isc_uint8_t ;
typedef int isc_uint64_t ;
struct TYPE_4__ {int* bitcount; int * buffer; } ;
typedef TYPE_1__ isc_sha512_t ;


 int FUNC_0 (int*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int const*,size_t) ;

void FUNC_5(isc_sha512_t *VAR_1, const isc_uint8_t *VAR_2, size_t VAR_3) {
 unsigned int VAR_4, VAR_5;

 if (VAR_3 == 0U) {

  return;
 }


 FUNC_2(VAR_1 != (isc_sha512_t *)0 && VAR_2 != (isc_uint8_t*)0);

 VAR_5 = (unsigned int)((VAR_1->bitcount[0] >> 3) %
       VAR_0);
 if (VAR_5 > 0) {

  VAR_4 = VAR_0 - VAR_5;

  if (VAR_3 >= VAR_4) {

   FUNC_4(&VAR_1->buffer[VAR_5], VAR_2, VAR_4);
   FUNC_0(VAR_1->bitcount, VAR_4 << 3);
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
   FUNC_3(VAR_1,
          (isc_uint64_t*)VAR_1->buffer);
  } else {

   FUNC_4(&VAR_1->buffer[VAR_5], VAR_2, VAR_3);
   FUNC_0(VAR_1->bitcount, VAR_3 << 3);

   VAR_5 = VAR_4 = 0;

   FUNC_1(VAR_5); FUNC_1(VAR_4);
   return;
  }
 }
 while (VAR_3 >= VAR_0) {

  FUNC_4(VAR_1->buffer, VAR_2, VAR_0);
  FUNC_3(VAR_1, (isc_uint64_t*)VAR_1->buffer);
  FUNC_0(VAR_1->bitcount, VAR_0 << 3);
  VAR_3 -= VAR_0;
  VAR_2 += VAR_0;
 }
 if (VAR_3 > 0U) {

  FUNC_4(VAR_1->buffer, VAR_2, VAR_3);
  FUNC_0(VAR_1->bitcount, VAR_3 << 3);
 }

 VAR_5 = VAR_4 = 0;

 FUNC_1(VAR_5); FUNC_1(VAR_4);
}
