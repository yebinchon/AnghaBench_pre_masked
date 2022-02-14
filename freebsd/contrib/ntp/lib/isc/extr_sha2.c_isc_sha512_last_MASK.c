
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_uint64_t ;
struct TYPE_4__ {int* bitcount; int* buffer; } ;
typedef TYPE_1__ isc_sha512_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (int*,int ,unsigned int) ;

void FUNC_3(isc_sha512_t *VAR_2) {
 unsigned int VAR_3;

 VAR_3 = (unsigned int)((VAR_2->bitcount[0] >> 3) %
        VAR_0);


 FUNC_0(VAR_2->bitcount[0],VAR_2->bitcount[0]);
 FUNC_0(VAR_2->bitcount[1],VAR_2->bitcount[1]);

 if (VAR_3 > 0) {

  VAR_2->buffer[VAR_3++] = 0x80;

  if (VAR_3 <= VAR_1) {

   FUNC_2(&VAR_2->buffer[VAR_3], 0,
          VAR_1 - VAR_3);
  } else {
   if (VAR_3 < VAR_0) {
    FUNC_2(&VAR_2->buffer[VAR_3], 0,
           VAR_0 - VAR_3);
   }

   FUNC_1(VAR_2,
         (isc_uint64_t*)VAR_2->buffer);


   FUNC_2(VAR_2->buffer, 0, VAR_0 - 2);
  }
 } else {

  FUNC_2(VAR_2->buffer, 0, VAR_1);


  *VAR_2->buffer = 0x80;
 }

 *(isc_uint64_t*)&VAR_2->buffer[VAR_1] = VAR_2->bitcount[1];
 *(isc_uint64_t*)&VAR_2->buffer[VAR_1+8] = VAR_2->bitcount[0];


 FUNC_1(VAR_2, (isc_uint64_t*)VAR_2->buffer);
}
