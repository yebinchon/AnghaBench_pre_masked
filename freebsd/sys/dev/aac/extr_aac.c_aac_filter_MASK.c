
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct aac_softc {int aifthread; TYPE_1__* aac_common; int aac_task_complete; } ;
struct TYPE_2__ {int* ac_printf; } ;


 int FUNC_0 (struct aac_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aac_softc*) ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

int
FUNC_5(void *VAR_6)
{
 struct aac_softc *VAR_7;
 u_int16_t VAR_8;

 VAR_7 = (struct aac_softc *)VAR_6;

 FUNC_2(VAR_7, VAR_4, "");






 VAR_8 = FUNC_1(VAR_7);
 FUNC_0(VAR_7, VAR_8);


 if (VAR_8 & VAR_2)
  FUNC_3(VAR_5, &VAR_7->aac_task_complete);


 if (VAR_8 & (VAR_1 | VAR_0)) {




  if ((VAR_8 & VAR_1) &&
   (VAR_7->aac_common->ac_printf[0] == 0))
   VAR_7->aac_common->ac_printf[0] = 32;
  FUNC_4(VAR_7->aifthread);
 }
 return (VAR_3);
}
