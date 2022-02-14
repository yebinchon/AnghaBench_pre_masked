
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct svc_req {int rq_proc; } ;
typedef int SVCXPRT ;





 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct svc_req*,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct svc_req *VAR_2, SVCXPRT *VAR_3)
{

 switch (VAR_2->rq_proc) {
 case 130:
  (void)FUNC_2(VAR_3, (xdrproc_t)VAR_1, (char *)((void*)0));
  break;
 case 128:
 case 129:
  FUNC_1(VAR_2, VAR_3);
  break;
 default:
  FUNC_3(VAR_3);
  break;
 }
 if (VAR_0)
  FUNC_0(0);
}
