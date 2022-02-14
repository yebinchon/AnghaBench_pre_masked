
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshmac {int type; int * key; int * umac_ctx; int key_len; int * hmac_ctx; } ;



 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

int
FUNC_3(struct sshmac *VAR_2)
{
 if (VAR_2->key == ((void*)0))
  return VAR_1;
 switch (VAR_2->type) {
 case 130:
  if (VAR_2->hmac_ctx == ((void*)0) ||
      FUNC_0(VAR_2->hmac_ctx, VAR_2->key, VAR_2->key_len) < 0)
   return VAR_1;
  return 0;
 case 129:
  if ((VAR_2->umac_ctx = FUNC_2(VAR_2->key)) == ((void*)0))
   return VAR_0;
  return 0;
 case 128:
  if ((VAR_2->umac_ctx = FUNC_1(VAR_2->key)) == ((void*)0))
   return VAR_0;
  return 0;
 default:
  return VAR_1;
 }
}
