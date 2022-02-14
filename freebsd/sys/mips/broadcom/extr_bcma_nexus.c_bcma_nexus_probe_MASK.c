
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {int chip_type; } ;
struct TYPE_4__ {TYPE_1__ cid; } ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 int VAR_3;

 switch (FUNC_0()->cid.chip_type) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return (VAR_1);
 }

 if ((VAR_3 = FUNC_1(VAR_2)) > 0)
  return (VAR_3);


 FUNC_2(VAR_2, &FUNC_0()->cid);

 return (VAR_0);
}
