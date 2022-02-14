
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnep_session {TYPE_2__* sock; int killed; } ;
struct bnep_conndel_req {int dst; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_sleep; int sk_err; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bnep_session* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct bnep_conndel_req *VAR_3)
{
 struct bnep_session *VAR_4;
 int VAR_5 = 0;

 FUNC_0("");

 FUNC_3(&VAR_2);

 VAR_4 = FUNC_1(VAR_3->dst);
 if (VAR_4) {


  VAR_4->sock->sk->sk_err = VAR_1;


  FUNC_2(&VAR_4->killed);
  FUNC_5(VAR_4->sock->sk->sk_sleep);
 } else
  VAR_5 = -VAR_0;

 FUNC_4(&VAR_2);
 return VAR_5;
}
