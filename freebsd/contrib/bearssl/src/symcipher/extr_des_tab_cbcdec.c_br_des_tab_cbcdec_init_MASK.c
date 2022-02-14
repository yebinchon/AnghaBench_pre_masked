
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void** skey; int num_rounds; int * vtable; } ;
typedef TYPE_1__ br_des_tab_cbcdec_keys ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int FUNC_1 (void**,void const*,size_t) ;

void
FUNC_2(br_des_tab_cbcdec_keys *VAR_1,
 const void *VAR_2, size_t VAR_3)
{
 VAR_1->vtable = &VAR_0;
 VAR_1->num_rounds = FUNC_1(VAR_1->skey, VAR_2, VAR_3);
 if (VAR_3 == 8) {
  FUNC_0(VAR_1->skey);
 } else {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < 48; VAR_4 += 2) {
   uint32_t VAR_5;

   VAR_5 = VAR_1->skey[VAR_4];
   VAR_1->skey[VAR_4] = VAR_1->skey[94 - VAR_4];
   VAR_1->skey[94 - VAR_4] = VAR_5;
   VAR_5 = VAR_1->skey[VAR_4 + 1];
   VAR_1->skey[VAR_4 + 1] = VAR_1->skey[95 - VAR_4];
   VAR_1->skey[95 - VAR_4] = VAR_5;
  }
 }
}
