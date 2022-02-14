
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32 ;
typedef int time_t ;
struct TYPE_4__ {int flag; int type; int * fp; scalar_t__ id_hi; scalar_t__ id_lo; } ;
typedef TYPE_1__ FILEGEN ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;







 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void
FUNC_5(
 FILEGEN * VAR_3,
 u_int32 VAR_4
 )
{
 int VAR_5;
 time_t VAR_6;

 if (!(VAR_3->flag & VAR_0)) {
  if (((void*)0) != VAR_3->fp) {
   FUNC_1(VAR_3->fp);
   VAR_3->fp = ((void*)0);
  }
  return;
 }

 switch (VAR_3->type) {

 default:
 case 131:
  VAR_5 = VAR_1;
  break;

 case 130:
  VAR_5 = ((int)VAR_3->id_lo == FUNC_3());
  break;

 case 134:
  VAR_5 = (VAR_3->id_lo <= VAR_2) &&
     (VAR_3->id_hi > VAR_2);
  break;

 case 133:
 case 129:
 case 132:
 case 128:
  VAR_5 = (VAR_3->id_lo <= VAR_4) &&
     (VAR_3->id_hi > VAR_4);
  break;
 }




 if (((void*)0) == VAR_3->fp || !VAR_5) {
  FUNC_0(1, ("filegen  %0x %u\n", VAR_3->type, VAR_4));
  VAR_6 = FUNC_4(((void*)0));
  FUNC_2(VAR_3, VAR_4, &VAR_6);
 }
}
