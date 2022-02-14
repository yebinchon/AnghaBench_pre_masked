
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct hlist_head {int dummy; } ;
struct dn_scp {int addrloc; } ;


 int FUNC_0 (int ) ;
 struct dn_scp* FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hlist_head* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct hlist_head*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_3)
{
 struct dn_scp *VAR_4 = FUNC_1(VAR_3);
 struct hlist_head *VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_0(FUNC_5(VAR_3));

 FUNC_6(&VAR_2);

 if (!VAR_4->addrloc && !FUNC_3(VAR_3))
  goto out;

 VAR_6 = -VAR_0;
 if ((VAR_5 = FUNC_2(VAR_3)) == ((void*)0))
  goto out;

 FUNC_4(VAR_3, VAR_5);
 VAR_6 = 0;
out:
 FUNC_7(&VAR_2);
 return VAR_6;
}
