
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvec* head; } ;
struct svc_rqst {TYPE_1__ rq_res; } ;
struct kvec {int dummy; } ;


 int FUNC_0 (struct kvec*,int ) ;

__attribute__((used)) static void FUNC_1(struct svc_rqst *VAR_0)
{
 struct kvec *VAR_1 = &VAR_0->rq_res.head[0];


 FUNC_0(VAR_1, 0);
}
