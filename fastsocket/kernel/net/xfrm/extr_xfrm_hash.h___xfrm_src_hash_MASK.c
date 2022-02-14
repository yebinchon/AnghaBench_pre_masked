
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;




 unsigned int FUNC_0 (int *,int *) ;
 unsigned int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline unsigned FUNC_2(xfrm_address_t *VAR_0,
           xfrm_address_t *VAR_1,
           unsigned short VAR_2,
           unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2;
 switch (VAR_2) {
 case 129:
  VAR_4 ^= FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  VAR_4 ^= FUNC_1(VAR_0, VAR_1);
  break;
 };
 return (VAR_4 ^ (VAR_4 >> 16)) & VAR_3;
}
