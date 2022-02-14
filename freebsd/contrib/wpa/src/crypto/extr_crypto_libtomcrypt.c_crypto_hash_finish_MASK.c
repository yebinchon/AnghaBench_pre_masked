
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hmac; int md; } ;
struct crypto_hash {int alg; TYPE_1__ u; scalar_t__ error; } ;






 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int *,unsigned long*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct crypto_hash*) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(struct crypto_hash *VAR_1, u8 *VAR_2, size_t *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 if (VAR_1 == ((void*)0))
  return -2;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  FUNC_3(VAR_1);
  return 0;
 }

 if (VAR_1->error) {
  FUNC_3(VAR_1);
  return -2;
 }

 switch (VAR_1->alg) {
 case 129:
  if (*VAR_3 < 16) {
   *VAR_3 = 16;
   FUNC_3(VAR_1);
   return -1;
  }
  *VAR_3 = 16;
  if (FUNC_2(&VAR_1->u.md, VAR_2) != VAR_0)
   VAR_4 = -2;
  break;
 case 128:
  if (*VAR_3 < 20) {
   *VAR_3 = 20;
   FUNC_3(VAR_1);
   return -1;
  }
  *VAR_3 = 20;
  if (FUNC_4(&VAR_1->u.md, VAR_2) != VAR_0)
   VAR_4 = -2;
  break;
 case 130:
  if (*VAR_3 < 20) {
   *VAR_3 = 20;
   FUNC_3(VAR_1);
   return -1;
  }

 case 131:
  if (*VAR_3 < 16) {
   *VAR_3 = 16;
   FUNC_3(VAR_1);
   return -1;
  }
  VAR_5 = *VAR_3;
  if (FUNC_1(&VAR_1->u.hmac, VAR_2, &VAR_5) != VAR_0) {
   FUNC_3(VAR_1);
   return -1;
  }
  *VAR_3 = VAR_5;
  break;
 default:
  VAR_4 = -2;
  break;
 }

 FUNC_3(VAR_1);

 if (FUNC_0())
  return -1;

 return VAR_4;
}
