
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnl_ptk_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct gre_cisco_protocol {int (* handler ) (struct sk_buff*,struct tnl_ptk_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct tnl_ptk_info*,int*) ;
 struct gre_cisco_protocol* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,struct tnl_ptk_info*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5)
{
 struct tnl_ptk_info VAR_6;
 int VAR_7;
 bool VAR_8 = 0;

 if (FUNC_2(VAR_5, &VAR_6, &VAR_8) < 0)
  goto drop;

 FUNC_4();
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct gre_cisco_protocol *VAR_9;
  int VAR_10;

  VAR_9 = FUNC_3(VAR_4[VAR_7]);
  if (!VAR_9)
   continue;
  VAR_10 = VAR_9->handler(VAR_5, &VAR_6);
  if (VAR_10 == VAR_3) {
   FUNC_5();
   return 0;
  }
 }
 FUNC_5();

 FUNC_0(VAR_5, VAR_1, VAR_2, 0);
drop:
 FUNC_1(VAR_5);
 return 0;
}
