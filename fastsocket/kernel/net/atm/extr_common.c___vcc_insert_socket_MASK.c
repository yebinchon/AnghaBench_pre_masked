
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_hash; } ;
struct hlist_head {int dummy; } ;
struct atm_vcc {int vci; } ;


 int VAR_0 ;
 struct atm_vcc* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct hlist_head*) ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2)
{
 struct atm_vcc *VAR_3 = FUNC_0(VAR_2);
 struct hlist_head *VAR_4 = &VAR_1[VAR_3->vci &
     (VAR_0 - 1)];
 VAR_2->sk_hash = VAR_3->vci & (VAR_0 - 1);
 FUNC_1(VAR_2, VAR_4);
}
