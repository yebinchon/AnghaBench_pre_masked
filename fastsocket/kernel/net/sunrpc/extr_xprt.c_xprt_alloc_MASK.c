
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {unsigned int max_reqs; unsigned int min_reqs; int num_reqs; int free; } ;
struct rpc_rqst {int rq_list; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct rpc_xprt*) ;
 int FUNC_4 (struct rpc_xprt*,struct net*) ;

struct rpc_xprt *FUNC_5(struct net *VAR_1, size_t VAR_2,
  unsigned int VAR_3,
  unsigned int VAR_4)
{
 struct rpc_xprt *VAR_5;
 struct rpc_rqst *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5 == ((void*)0))
  goto out;

 FUNC_4(VAR_5, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_1(sizeof(struct rpc_rqst), VAR_0);
  if (!VAR_6)
   break;
  FUNC_2(&VAR_6->rq_list, &VAR_5->free);
 }
 if (VAR_7 < VAR_3)
  goto out_free;
 if (VAR_4 > VAR_3)
  VAR_5->max_reqs = VAR_4;
 else
  VAR_5->max_reqs = VAR_3;
 VAR_5->min_reqs = VAR_3;
 FUNC_0(&VAR_5->num_reqs, VAR_3);

 return VAR_5;

out_free:
 FUNC_3(VAR_5);
out:
 return ((void*)0);
}
