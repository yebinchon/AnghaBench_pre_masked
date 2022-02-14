
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mvs_channel {scalar_t__ fake_busy; int r_mem; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mvs_channel* FUNC_1 (int ) ;

__attribute__((used)) static uint8_t
FUNC_2(device_t VAR_5, int VAR_6)
{
 struct mvs_channel *VAR_7 = FUNC_1(VAR_5);
 uint8_t VAR_8 = FUNC_0(VAR_7->r_mem, VAR_6 ? VAR_1 : VAR_0);

 if (VAR_7->fake_busy) {
  if (VAR_8 & (VAR_2 | VAR_3 | VAR_4))
   VAR_7->fake_busy = 0;
  else
   VAR_8 |= VAR_2;
 }
 return (VAR_8);
}
