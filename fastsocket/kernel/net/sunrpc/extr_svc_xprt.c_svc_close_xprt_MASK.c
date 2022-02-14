
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_xprt {int xpt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct svc_xprt*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct svc_xprt *VAR_2)
{
 FUNC_0(VAR_1, &VAR_2->xpt_flags);
 if (FUNC_2(VAR_0, &VAR_2->xpt_flags))

  return;

 FUNC_1(VAR_2);
}
