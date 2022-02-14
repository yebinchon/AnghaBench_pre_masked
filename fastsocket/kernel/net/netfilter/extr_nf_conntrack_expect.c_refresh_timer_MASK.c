
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nf_conntrack_expect_policy {int timeout; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct nf_conntrack_expect {size_t class; TYPE_2__ timeout; int master; } ;
struct nf_conn_help {TYPE_1__* helper; } ;
struct TYPE_4__ {struct nf_conntrack_expect_policy* expect_policy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 struct nf_conn_help* FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct nf_conntrack_expect *VAR_2)
{
 struct nf_conn_help *VAR_3 = FUNC_2(VAR_2->master);
 const struct nf_conntrack_expect_policy *VAR_4;

 if (!FUNC_1(&VAR_2->timeout))
  return 0;

 VAR_4 = &VAR_3->helper->expect_policy[VAR_2->class];
 VAR_2->timeout.expires = VAR_1 + VAR_4->timeout * VAR_0;
 FUNC_0(&VAR_2->timeout);
 return 1;
}
