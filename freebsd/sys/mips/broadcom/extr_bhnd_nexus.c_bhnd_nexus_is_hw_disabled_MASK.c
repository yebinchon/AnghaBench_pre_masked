
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_chipid {scalar_t__ chip_id; scalar_t__ chip_pkg; } ;
struct bcm_platform {struct bhnd_chipid cid; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bcm_platform* FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_3, device_t VAR_4)
{
 struct bcm_platform *VAR_5;
 struct bhnd_chipid *VAR_6;

 VAR_5 = FUNC_0();
 VAR_6 = &VAR_5->cid;



 if (VAR_6->chip_id == VAR_0 &&
     VAR_6->chip_pkg == VAR_2 &&
     FUNC_2(VAR_4) == VAR_1 &&
     FUNC_1(VAR_4) != 0)
 {
  return (1);
 }

 return (0);
}
