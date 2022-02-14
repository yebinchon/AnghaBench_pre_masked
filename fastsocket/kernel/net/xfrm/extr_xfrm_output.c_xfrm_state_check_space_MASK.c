
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dst_entry {int header_len; TYPE_1__* dev; } ;
struct TYPE_2__ {int needed_tailroom; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sk_buff*,int,int,int ) ;
 struct dst_entry* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_1, struct sk_buff *VAR_2)
{
 struct dst_entry *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = VAR_3->header_len + FUNC_0(VAR_3->dev)
  - FUNC_3(VAR_2);
 int VAR_5 = VAR_3->dev->needed_tailroom - FUNC_4(VAR_2);

 if (VAR_4 <= 0) {
  if (VAR_5 <= 0)
   return 0;
  VAR_4 = 0;
 } else if (VAR_5 < 0)
  VAR_5 = 0;

 return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_0);
}
