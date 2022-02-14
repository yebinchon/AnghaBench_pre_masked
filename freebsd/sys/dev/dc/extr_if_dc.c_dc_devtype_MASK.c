
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct dc_type {scalar_t__ dc_devid; scalar_t__ dc_minrev; int * dc_name; } ;
typedef int device_t ;


 struct dc_type* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const struct dc_type *
FUNC_2(device_t VAR_1)
{
 const struct dc_type *VAR_2;
 uint32_t VAR_3;
 uint8_t VAR_4;

 VAR_2 = VAR_0;
 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1);

 while (VAR_2->dc_name != ((void*)0)) {
  if (VAR_3 == VAR_2->dc_devid && VAR_4 >= VAR_2->dc_minrev)
   return (VAR_2);
  VAR_2++;
 }

 return (((void*)0));
}
