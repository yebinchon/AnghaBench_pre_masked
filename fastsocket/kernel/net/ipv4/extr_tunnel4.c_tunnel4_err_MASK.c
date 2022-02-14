
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_tunnel {int (* err_handler ) (struct sk_buff*,int ) ;struct xfrm_tunnel* next; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 struct xfrm_tunnel* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_1, u32 VAR_2)
{
 struct xfrm_tunnel *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
  if (!VAR_3->err_handler(VAR_1, VAR_2))
   break;
}
