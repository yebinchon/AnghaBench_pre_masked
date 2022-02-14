
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct card_type {scalar_t__ devid; } ;
typedef int device_t ;


 struct card_type* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct card_type *
FUNC_1(device_t VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 while (VAR_0[VAR_2].devid != 0) {
  if (FUNC_0(VAR_1) == VAR_0[VAR_2].devid)
   return &VAR_0[VAR_2];
  VAR_2++;
 }
 return ((void*)0);
}
