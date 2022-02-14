
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int v24_sig; int rx_credits; int cfc; int mtu; scalar_t__ mscex; scalar_t__ flags; int state; } ;


 int FUNC_0 (char*,struct rfcomm_dlc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct rfcomm_dlc *VAR_7)
{
 FUNC_0("%p", VAR_7);

 VAR_7->state = VAR_0;
 VAR_7->flags = 0;
 VAR_7->mscex = 0;
 VAR_7->mtu = VAR_3;
 VAR_7->v24_sig = VAR_5 | VAR_6 | VAR_4;

 VAR_7->cfc = VAR_1;
 VAR_7->rx_credits = VAR_2;
}
