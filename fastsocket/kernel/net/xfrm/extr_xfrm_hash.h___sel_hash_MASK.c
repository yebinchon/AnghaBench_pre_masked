
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct xfrm_selector {int prefixlen_d; int prefixlen_s; int saddr; int daddr; } ;




 unsigned int FUNC_0 (int *,int *) ;
 unsigned int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct xfrm_selector *VAR_0, unsigned short VAR_1, unsigned int VAR_2)
{
 xfrm_address_t *VAR_3 = &VAR_0->daddr;
 xfrm_address_t *VAR_4 = &VAR_0->saddr;
 unsigned int VAR_5 = 0;

 switch (VAR_1) {
 case 129:
  if (VAR_0->prefixlen_d != 32 ||
      VAR_0->prefixlen_s != 32)
   return VAR_2 + 1;

  VAR_5 = FUNC_0(VAR_3, VAR_4);
  break;

 case 128:
  if (VAR_0->prefixlen_d != 128 ||
      VAR_0->prefixlen_s != 128)
   return VAR_2 + 1;

  VAR_5 = FUNC_1(VAR_3, VAR_4);
  break;
 };
 VAR_5 ^= (VAR_5 >> 16);
 return VAR_5 & VAR_2;
}
