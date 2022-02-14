
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ow_timing {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,struct ow_timing*) ;
 int FUNC_1 (int ,struct ow_timing*) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct ow_timing *VAR_1, uint8_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  if (VAR_2 & (1 << VAR_3))
   FUNC_0(VAR_0, VAR_1);
  else
   FUNC_1(VAR_0, VAR_1);
}
