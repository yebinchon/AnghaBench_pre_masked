
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;


 int VAR_0 ;
 struct xfrm_policy* FUNC_0 (struct xfrm_policy*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_policy*) ;
 int VAR_1 ;

int FUNC_4(struct xfrm_policy *VAR_2, int VAR_3)
{
 FUNC_1(&VAR_1);
 VAR_2 = FUNC_0(VAR_2, VAR_3);
 FUNC_2(&VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_2);
  return 0;
 }
 return -VAR_0;
}
