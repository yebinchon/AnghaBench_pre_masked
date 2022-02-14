
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * head; } ;
struct svc_rqst {struct auth_ops* rq_authop; TYPE_1__ rq_arg; } ;
struct auth_ops {int (* accept ) (struct svc_rqst*,int *) ;int owner; } ;
typedef size_t rpc_authflavor_t ;
typedef int __be32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct auth_ops** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct svc_rqst*,int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct svc_rqst *VAR_6, __be32 *VAR_7)
{
 rpc_authflavor_t VAR_8;
 struct auth_ops *VAR_9;

 *VAR_7 = VAR_4;

 VAR_8 = FUNC_4(&VAR_6->rq_arg.head[0]);

 FUNC_0("svc: svc_authenticate (%d)\n", VAR_8);

 FUNC_1(&VAR_3);
 if (VAR_8 >= VAR_0 || !(VAR_9 = VAR_2[VAR_8])
   || !FUNC_5(VAR_9->owner)) {
  FUNC_2(&VAR_3);
  *VAR_7 = VAR_5;
  return VAR_1;
 }
 FUNC_2(&VAR_3);

 VAR_6->rq_authop = VAR_9;
 return VAR_9->accept(VAR_6, VAR_7);
}
