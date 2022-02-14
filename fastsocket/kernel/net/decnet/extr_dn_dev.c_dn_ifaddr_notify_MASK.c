
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dn_ifaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,struct dn_ifaddr*,int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *,int ,int ,int *,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(int VAR_5, struct dn_ifaddr *VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_1(FUNC_2(), VAR_2);
 if (VAR_7 == ((void*)0))
  goto errout;

 VAR_8 = FUNC_3(VAR_7, VAR_6, 0, 0, VAR_5, 0);
 if (VAR_8 < 0) {

  FUNC_0(VAR_8 == -VAR_0);
  FUNC_4(VAR_7);
  goto errout;
 }
 FUNC_5(VAR_7, &VAR_4, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 if (VAR_8 < 0)
  FUNC_6(&VAR_4, VAR_3, VAR_8);
}
