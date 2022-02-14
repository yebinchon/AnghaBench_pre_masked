
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_usec; int tv_sec; } ;
struct svc_req {int rq_proc; } ;
struct TYPE_4__ {int usec; int sec; } ;
struct TYPE_5__ {TYPE_1__ clock; int counter; } ;
typedef TYPE_2__ spraycumul ;
typedef int SVCXPRT ;


 int VAR_0 ;




 int FUNC_0 (struct timeval*,int ) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct timeval*,struct timeval*,struct timeval*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct svc_req *VAR_3, SVCXPRT *VAR_4)
{
 static spraycumul VAR_5;
 static struct timeval VAR_6, VAR_7;

 switch (VAR_3->rq_proc) {
 case 130:
  VAR_5.counter = 0;
  (void)FUNC_0(&VAR_6, 0);


 case 131:
  (void)FUNC_1(VAR_4, (xdrproc_t)VAR_2, ((void*)0));
  return;

 case 128:
  VAR_5.counter++;
  return;

 case 129:
  (void)FUNC_0(&VAR_7, 0);
  FUNC_5(&VAR_7, &VAR_6, &VAR_7);
  VAR_5.clock.sec = VAR_7.tv_sec;
  VAR_5.clock.usec = VAR_7.tv_usec;
  break;

 default:
  FUNC_2(VAR_4);
  return;
 }

 if (!FUNC_1(VAR_4, (xdrproc_t)VAR_1, &VAR_5)) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_0, "bad svc_sendreply");
 }
}
