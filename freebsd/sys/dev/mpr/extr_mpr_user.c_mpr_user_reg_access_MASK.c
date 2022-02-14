
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_softc {int dummy; } ;
struct TYPE_3__ {int Command; int RegData; int RegOffset; } ;
typedef TYPE_1__ mpr_reg_access_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct mpr_softc*,int ,char*) ;
 int FUNC_1 (struct mpr_softc*,int ) ;
 int FUNC_2 (struct mpr_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpr_softc *VAR_2, mpr_reg_access_t *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->Command) {



  case 131:
  case 130:
   FUNC_0(VAR_2, VAR_1, "IO access is not supported. "
       "Use memory access.");
   VAR_4 = VAR_0;
   break;

  case 129:
   VAR_3->RegData = FUNC_1(VAR_2, VAR_3->RegOffset);
   break;

  case 128:
   FUNC_2(VAR_2, VAR_3->RegOffset, VAR_3->RegData);
   break;

  default:
   VAR_4 = VAR_0;
   break;
 }

 return (VAR_4);
}
