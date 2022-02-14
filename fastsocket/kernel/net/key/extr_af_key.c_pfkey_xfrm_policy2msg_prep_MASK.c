
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (struct xfrm_policy*) ;

__attribute__((used)) static struct sk_buff * FUNC_3(struct xfrm_policy *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_4 + 16, VAR_1);
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);

 return VAR_3;
}
