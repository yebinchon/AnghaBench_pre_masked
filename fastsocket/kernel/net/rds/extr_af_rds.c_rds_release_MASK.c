
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct rds_sock {int rs_transport; int rs_item; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rds_sock*) ;
 int FUNC_2 (struct rds_sock*) ;
 int FUNC_3 (struct rds_sock*,int *) ;
 int FUNC_4 (struct rds_sock*) ;
 int FUNC_5 (struct rds_sock*) ;
 int FUNC_6 (struct rds_sock*,int *) ;
 struct rds_sock* FUNC_7 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct socket *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sk;
 struct rds_sock *VAR_4;

 if (!VAR_3)
  goto out;

 VAR_4 = FUNC_7(VAR_3);

 FUNC_9(VAR_3);



 FUNC_1(VAR_4);
 FUNC_2(VAR_4);






 FUNC_5(VAR_4);
 FUNC_13();

 FUNC_6(VAR_4, ((void*)0));
 FUNC_4(VAR_4);
 FUNC_3(VAR_4, ((void*)0));

 FUNC_11(&VAR_1);
 FUNC_0(&VAR_4->rs_item);
 VAR_0--;
 FUNC_12(&VAR_1);

 FUNC_8(VAR_4->rs_transport);

 VAR_2->sk = ((void*)0);
 FUNC_10(VAR_3);
out:
 return 0;
}
