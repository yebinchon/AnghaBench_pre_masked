
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_hash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_hash*) ;
 int FUNC_1 (struct crypto_hash**) ;

void FUNC_2(struct crypto_hash *VAR_1[])
{
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
 {
  if (VAR_1[VAR_2])
   FUNC_0(VAR_1[VAR_2]);
 }
 FUNC_1(VAR_1);
}
