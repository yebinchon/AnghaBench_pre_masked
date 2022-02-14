
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int flags; int v24_sig; int cfc; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct rfcomm_dlc *VAR_3)
{
 FUNC_0("dlc %p state %ld", VAR_3, VAR_3->state);

 if (!VAR_3->cfc) {
  VAR_3->v24_sig |= VAR_2;
  FUNC_2(VAR_0, &VAR_3->flags);
 }
 FUNC_1(VAR_1);
}
