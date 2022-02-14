
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sha2_word64 ;
struct TYPE_5__ {int* theChars; int* theLongs; } ;
typedef TYPE_1__ ldns_sha2_buffer_union ;
struct TYPE_6__ {int* bitcount; int* buffer; } ;
typedef TYPE_2__ SHA512_CTX ;


 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(SHA512_CTX* VAR_2) {
 size_t VAR_3;
 ldns_sha2_buffer_union VAR_4;

 VAR_3 = (VAR_2->bitcount[0] >> 3) % VAR_0;


 FUNC_1(VAR_2->bitcount[0],VAR_2->bitcount[0]);
 FUNC_1(VAR_2->bitcount[1],VAR_2->bitcount[1]);

 if (VAR_3 > 0) {

  VAR_2->buffer[VAR_3++] = 0x80;

  if (VAR_3 <= VAR_1) {

   FUNC_0(&VAR_2->buffer[VAR_3], VAR_1 - VAR_3);
  } else {
   if (VAR_3 < VAR_0) {
    FUNC_0(&VAR_2->buffer[VAR_3], VAR_0 - VAR_3);
   }

   FUNC_2(VAR_2, (sha2_word64*)VAR_2->buffer);


   FUNC_0(VAR_2->buffer, VAR_0 - 2);
  }
 } else {

  FUNC_0(VAR_2->buffer, VAR_1);


  *VAR_2->buffer = 0x80;
 }

 VAR_4.theChars = VAR_2->buffer;
 VAR_4.theLongs[VAR_1 / 8] = VAR_2->bitcount[1];
 VAR_4.theLongs[VAR_1 / 8 + 1] = VAR_2->bitcount[0];


 FUNC_2(VAR_2, (sha2_word64*)VAR_2->buffer);
}
