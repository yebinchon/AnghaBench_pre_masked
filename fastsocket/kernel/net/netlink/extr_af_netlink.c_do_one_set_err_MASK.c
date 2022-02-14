
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct netlink_sock {scalar_t__ pid; int ngroups; int groups; } ;
struct netlink_set_err_data {scalar_t__ pid; int group; int code; struct sock* exclude_sk; } ;


 struct netlink_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_0,
     struct netlink_set_err_data *VAR_1)
{
 struct netlink_sock *VAR_2 = FUNC_0(VAR_0);

 if (VAR_0 == VAR_1->exclude_sk)
  goto out;

 if (FUNC_1(VAR_0) != FUNC_1(VAR_1->exclude_sk))
  goto out;

 if (VAR_2->pid == VAR_1->pid || VAR_1->group - 1 >= VAR_2->ngroups ||
     !FUNC_3(VAR_1->group - 1, VAR_2->groups))
  goto out;

 VAR_0->sk_err = VAR_1->code;
 VAR_0->sk_error_report(VAR_0);
out:
 return 0;
}
