
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int num_reqs; int max_reqs; } ;
struct rpc_rqst {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rpc_rqst* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 struct rpc_rqst* FUNC_3 (int,int ) ;

__attribute__((used)) static struct rpc_rqst *FUNC_4(struct rpc_xprt *VAR_2, gfp_t VAR_3)
{
 struct rpc_rqst *VAR_4 = FUNC_0(-VAR_0);

 if (!FUNC_1(&VAR_2->num_reqs, 1, VAR_2->max_reqs))
  goto out;
 VAR_4 = FUNC_3(sizeof(struct rpc_rqst), VAR_3);
 if (VAR_4 != ((void*)0))
  goto out;
 FUNC_2(&VAR_2->num_reqs);
 VAR_4 = FUNC_0(-VAR_1);
out:
 return VAR_4;
}
