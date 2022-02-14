
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mvs_channel {int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mvs_channel* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5)
{
 struct mvs_channel *VAR_6 = FUNC_3(VAR_5);
 uint32_t VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(VAR_6->r_mem, VAR_3);
 if (VAR_7 & VAR_4)
  return;

 VAR_7 = FUNC_0(VAR_6->r_mem, VAR_0);
 VAR_7 &= ~VAR_2;
 VAR_7 |= VAR_1;
 FUNC_1(VAR_6->r_mem, VAR_0, VAR_7);

 while ((FUNC_0(VAR_6->r_mem, VAR_3) & VAR_4) == 0 &&
     VAR_8++ < 100) {
  FUNC_2(100);
 }
}
