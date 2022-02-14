
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tnl_ptk_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct gre_cisco_protocol {scalar_t__ (* err_handler ) (struct sk_buff*,int ,struct tnl_ptk_info*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct tnl_ptk_info*,int*) ;
 struct gre_cisco_protocol* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,struct tnl_ptk_info*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_3, u32 VAR_4)
{
 struct tnl_ptk_info VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 if (FUNC_0(VAR_3, &VAR_5, &VAR_6)) {
  if (!VAR_6)
   return;
 }

 FUNC_2();
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct gre_cisco_protocol *VAR_8;

  VAR_8 = FUNC_1(VAR_2[VAR_7]);
  if (!VAR_8)
   continue;

  if (VAR_8->err_handler(VAR_3, VAR_4, &VAR_5) == VAR_1)
   goto out;

 }
out:
 FUNC_3();
}
