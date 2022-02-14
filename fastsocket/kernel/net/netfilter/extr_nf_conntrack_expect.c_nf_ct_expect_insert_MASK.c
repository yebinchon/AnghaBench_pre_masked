
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nf_conntrack_expect_policy {int timeout; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct nf_conntrack_expect {size_t class; int use; TYPE_3__ timeout; int hnode; int lnode; int tuple; int master; } ;
struct nf_conn_help {TYPE_2__* helper; int * expecting; int expectations; } ;
struct TYPE_5__ {int expect_count; int * expect_hash; } ;
struct net {TYPE_1__ ct; } ;
struct TYPE_6__ {struct nf_conntrack_expect_policy* expect_policy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_2 ;
 struct net* FUNC_5 (struct nf_conntrack_expect*) ;
 unsigned int FUNC_6 (int *) ;
 int VAR_3 ;
 struct nf_conn_help* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct nf_conntrack_expect *VAR_4)
{
 struct nf_conn_help *VAR_5 = FUNC_7(VAR_4->master);
 struct net *VAR_6 = FUNC_5(VAR_4);
 const struct nf_conntrack_expect_policy *VAR_7;
 unsigned int VAR_8 = FUNC_6(&VAR_4->tuple);

 FUNC_2(&VAR_4->use);

 FUNC_3(&VAR_4->lnode, &VAR_5->expectations);
 VAR_5->expecting[VAR_4->class]++;

 FUNC_4(&VAR_4->hnode, &VAR_6->ct.expect_hash[VAR_8]);
 VAR_6->ct.expect_count++;

 FUNC_8(&VAR_4->timeout, VAR_3,
      (unsigned long)VAR_4);
 VAR_7 = &VAR_5->helper->expect_policy[VAR_4->class];
 VAR_4->timeout.expires = VAR_2 + VAR_7->timeout * VAR_0;
 FUNC_1(&VAR_4->timeout);

 FUNC_2(&VAR_4->use);
 FUNC_0(VAR_6, VAR_1);
}
