
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ntb_hw_info {scalar_t__ device_id; } ;


 size_t FUNC_0 (struct ntb_hw_info*) ;
 struct ntb_hw_info* VAR_0 ;

__attribute__((used)) static struct ntb_hw_info *
FUNC_1(uint32_t VAR_1)
{
 struct ntb_hw_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 < &VAR_0[FUNC_0(VAR_0)]; VAR_2++) {
  if (VAR_2->device_id == VAR_1)
   return (VAR_2);
 }
 return (((void*)0));
}
