
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irlap_cb {scalar_t__ state; int media_busy_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct irlap_cb*,int ,int *,int *) ;

void FUNC_2(struct irlap_cb *VAR_2)
{

 FUNC_0(&VAR_2->media_busy_timer);






 if (VAR_2->state == VAR_0)
  FUNC_1(VAR_2, VAR_1, ((void*)0), ((void*)0));
}
