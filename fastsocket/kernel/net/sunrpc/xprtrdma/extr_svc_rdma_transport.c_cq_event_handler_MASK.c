
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_flags; } ;
struct ib_event {int event; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,void*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ib_event *VAR_1, void *VAR_2)
{
 struct svc_xprt *VAR_3 = VAR_2;
 FUNC_0("svcrdma: received CQ event id=%d, context=%p\n",
  VAR_1->event, VAR_2);
 FUNC_1(VAR_0, &VAR_3->xpt_flags);
}
