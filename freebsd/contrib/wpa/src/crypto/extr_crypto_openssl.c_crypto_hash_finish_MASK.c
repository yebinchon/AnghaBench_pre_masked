
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_hash {int ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned int*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct crypto_hash*,int) ;

int FUNC_4(struct crypto_hash *VAR_0, u8 *VAR_1, size_t *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0))
  return -2;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0->ctx);
  FUNC_3(VAR_0, sizeof(*VAR_0));
  return 0;
 }

 VAR_3 = *VAR_2;
 VAR_4 = FUNC_1(VAR_0->ctx, VAR_1, &VAR_3);
 FUNC_0(VAR_0->ctx);
 FUNC_3(VAR_0, sizeof(*VAR_0));

 if (FUNC_2())
  return -1;

 if (VAR_4 == 1) {
  *VAR_2 = VAR_3;
  return 0;
 }

 return -1;
}
