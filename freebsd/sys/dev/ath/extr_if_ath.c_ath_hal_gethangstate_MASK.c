
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_hal {int dummy; } ;
typedef int mask ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ath_hal*,int ,int*,int,void**,int*) ;

int
FUNC_2(struct ath_hal *VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 uint32_t VAR_4;
 void *VAR_5;

 if (!FUNC_1(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2), &VAR_5, &VAR_4))
  return 0;
 FUNC_0(VAR_4 == sizeof(uint32_t), ("resultsize %u", VAR_4));
 *VAR_3 = *(uint32_t *)VAR_5;
 return 1;
}
