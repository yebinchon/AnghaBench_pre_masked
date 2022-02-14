
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int intmax_t ;
typedef scalar_t__ ino_t ;
struct TYPE_2__ {int ino_state; } ;





 int VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char const*,int ) ;
 int FUNC_3 (char*) ;

void
FUNC_4(ino_t VAR_1, const char *VAR_2, ufs2_daddr_t VAR_3)
{

 FUNC_2("%jd %s I=%ju", (intmax_t)VAR_3, VAR_2, (uintmax_t)VAR_1);
 FUNC_3("\n");
 switch (FUNC_1(VAR_1)->ino_state) {

 case 129:
 case 128:
  FUNC_1(VAR_1)->ino_state = 130;
  return;

 case 132:
 case 131:
  FUNC_1(VAR_1)->ino_state = 133;
  return;

 case 130:
 case 133:
  return;

 default:
  FUNC_0(VAR_0, "BAD STATE %d TO BLKERR", FUNC_1(VAR_1)->ino_state);

 }
}
