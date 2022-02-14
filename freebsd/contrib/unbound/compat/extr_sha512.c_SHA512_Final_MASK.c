
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sha2_word64 ;
typedef int sha2_byte ;
struct TYPE_5__ {int * state; } ;
typedef TYPE_1__ SHA512_CTX ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;

void FUNC_5(sha2_byte VAR_1[], SHA512_CTX* VAR_2) {
 sha2_word64 *VAR_3 = (sha2_word64*)VAR_1;


 FUNC_4(VAR_2 != (SHA512_CTX*)0);


 if (VAR_1 != (sha2_byte*)0) {
  FUNC_3(VAR_2);



  {

   int VAR_4;
   for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
    FUNC_2(VAR_2->state[VAR_4],VAR_2->state[VAR_4]);
    *VAR_3++ = VAR_2->state[VAR_4];
   }
  }



 }


 FUNC_1(VAR_2, sizeof(SHA512_CTX));
}
