
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_2__* sc_p ;
typedef int csa_res ;
struct TYPE_3__ {int hisr; } ;
struct TYPE_4__ {int midiintr_arg; int (* midiintr ) (int ) ;int pcmintr_arg; int (* pcmintr ) (int ) ;TYPE_1__ binfo; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{
 sc_p VAR_8 = VAR_7;
 csa_res *VAR_9;
 u_int32_t VAR_10;

 VAR_9 = &VAR_8->res;


 VAR_10 = FUNC_0(VAR_9, VAR_1);
 if ((VAR_10 & 0x7fffffff) == 0) {

  FUNC_1(VAR_9, VAR_0, VAR_3 | VAR_2);
  return;
 }





 VAR_8->binfo.hisr = VAR_10;


 if ((VAR_10 & (VAR_5 | VAR_6)) != 0 && VAR_8->pcmintr != ((void*)0)) {
  VAR_8->pcmintr(VAR_8->pcmintr_arg);
  VAR_10 &= ~(VAR_5 | VAR_6);
 }
 if ((VAR_10 & VAR_4) != 0 && VAR_8->midiintr != ((void*)0)) {
  VAR_8->midiintr(VAR_8->midiintr_arg);
  VAR_10 &= ~VAR_4;
 }


 FUNC_1(VAR_9, VAR_0, VAR_3 | VAR_2);
}
