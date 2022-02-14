
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigevent32 {int dummy; } ;
struct sigevent {int sigev_notify; } ;
struct TYPE_2__ {int sival_ptr; } ;


 int FUNC_0 (struct sigevent32,struct sigevent,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sigevent32,struct sigevent,int ) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

int
FUNC_2(struct sigevent32 *VAR_7, struct sigevent *VAR_8)
{

 FUNC_0(*VAR_7, *VAR_8, VAR_1);
 switch (VAR_8->sigev_notify) {
 case 130:
  break;
 case 128:
  FUNC_0(*VAR_7, *VAR_8, VAR_4);

 case 129:
  FUNC_0(*VAR_7, *VAR_8, VAR_5);
  FUNC_1(*VAR_7, *VAR_8, VAR_6.sival_ptr);
  break;
 case 131:
  FUNC_0(*VAR_7, *VAR_8, VAR_3);
  FUNC_0(*VAR_7, *VAR_8, VAR_2);
  FUNC_1(*VAR_7, *VAR_8, VAR_6.sival_ptr);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
