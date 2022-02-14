
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_3__ {int optValue; char* pzLastArg; } ;
typedef TYPE_1__ tOptDesc ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int VAR_0 ;

void
FUNC_3(
 tOptions *VAR_1,
 tOptDesc *VAR_2
 )
{
 switch (VAR_2->optValue) {

 default:
  FUNC_2(VAR_0,
   "ntpq_custom_opt_handler unexpected option '%c' (%d)\n",
   VAR_2->optValue, VAR_2->optValue);
  FUNC_1(1);

 case 'c':
  FUNC_0(VAR_2->pzLastArg);
  break;

 case 'p':
  FUNC_0("peers");
  break;
 }
}
