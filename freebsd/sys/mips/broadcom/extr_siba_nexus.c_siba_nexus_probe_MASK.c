
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {scalar_t__ chip_type; } ;
struct TYPE_4__ {TYPE_1__ cid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 int VAR_4;

 if (FUNC_0()->cid.chip_type != VAR_0)
  return (VAR_2);

 if ((VAR_4 = FUNC_2(VAR_3)) > 0)
  return (VAR_4);


 FUNC_1(VAR_3, &FUNC_0()->cid);

 return (VAR_1);
}
