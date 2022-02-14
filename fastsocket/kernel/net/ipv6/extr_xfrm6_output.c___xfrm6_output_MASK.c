
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct sk_buff {scalar_t__ len; } ;
struct dst_entry {struct xfrm_state* xfrm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct sk_buff*,int (*) (struct sk_buff*)) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct dst_entry* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1)
{
 struct dst_entry *VAR_2 = FUNC_3(VAR_1);
 struct xfrm_state *VAR_3 = VAR_2->xfrm;

 if ((VAR_3 && VAR_3->props.mode == VAR_0) &&
     ((VAR_1->len > FUNC_2(VAR_1) && !FUNC_4(VAR_1)) ||
  FUNC_0(FUNC_3(VAR_1)))) {
   return FUNC_1(VAR_1, FUNC_5);
 }
 return FUNC_5(VAR_1);
}
