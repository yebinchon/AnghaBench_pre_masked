
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_uint8_t ;
typedef int isc_uint64_t ;
typedef int isc_sha512_t ;
struct TYPE_4__ {int * state; } ;
typedef TYPE_1__ isc_sha384_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void
FUNC_5(isc_uint8_t VAR_1[], isc_sha384_t *VAR_2) {
 isc_uint64_t *VAR_3 = (isc_uint64_t*)VAR_1;


 FUNC_0(VAR_2 != (isc_sha384_t *)0);


 if (VAR_1 != (isc_uint8_t*)0) {
  FUNC_2((isc_sha512_t *)VAR_2);



  {

   int VAR_4;
   for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
    FUNC_1(VAR_2->state[VAR_4],VAR_2->state[VAR_4]);
    *VAR_3++ = VAR_2->state[VAR_4];
   }
  }



 }


 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
}
