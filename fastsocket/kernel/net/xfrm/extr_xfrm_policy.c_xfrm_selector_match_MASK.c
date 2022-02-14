
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_selector {int dummy; } ;
struct flowi {int dummy; } ;




 int FUNC_0 (struct xfrm_selector*,struct flowi*) ;
 int FUNC_1 (struct xfrm_selector*,struct flowi*) ;

int FUNC_2(struct xfrm_selector *VAR_0, struct flowi *VAR_1,
      unsigned short VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_0, VAR_1);
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 }
 return 0;
}
