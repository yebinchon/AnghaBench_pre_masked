
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int timer; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rfcomm_dlc*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rfcomm_dlc *VAR_0)
{
 FUNC_0("dlc %p state %ld", VAR_0, VAR_0->state);

 if (FUNC_3(&VAR_0->timer) && FUNC_1(&VAR_0->timer))
  FUNC_2(VAR_0);
}
