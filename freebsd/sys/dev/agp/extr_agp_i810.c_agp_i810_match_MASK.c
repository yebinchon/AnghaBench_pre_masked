
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_match {int devid; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct agp_i810_match const* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static const struct agp_i810_match*
FUNC_3(device_t VAR_4)
{
 int VAR_5, VAR_6;

 if (FUNC_0(VAR_4) != VAR_0
     || (FUNC_2(VAR_4) != VAR_2 &&
     FUNC_2(VAR_4) != VAR_1))
  return (((void*)0));

 VAR_6 = FUNC_1(VAR_4);
 for (VAR_5 = 0; VAR_3[VAR_5].devid != 0; VAR_5++) {
  if (VAR_3[VAR_5].devid == VAR_6)
   break;
 }
 if (VAR_3[VAR_5].devid == 0)
  return (((void*)0));
 else
  return (&VAR_3[VAR_5]);
}
