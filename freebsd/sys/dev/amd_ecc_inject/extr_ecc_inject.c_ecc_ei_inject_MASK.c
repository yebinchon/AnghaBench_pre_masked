
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*,int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(int VAR_11)
{
 vm_offset_t VAR_12;
 int VAR_13;

 FUNC_0((VAR_9 & ~VAR_4) == 0,
     ("quadrant value is outside of range: %u", VAR_9));
 FUNC_0(VAR_10 != 0 && (VAR_10 & ~VAR_1) == 0,
     ("word mask value is outside of range: 0x%x", VAR_10));
 FUNC_0(VAR_7 != 0 && (VAR_7 & ~VAR_0) == 0,
     ("bit mask value is outside of range: 0x%x", VAR_7));

 VAR_12 = FUNC_2(VAR_3, VAR_2, 0, ~0,
     VAR_6);

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  FUNC_1((void*)VAR_12, VAR_3);
  if (VAR_8 != 0 && VAR_13 != VAR_11 - 1)
   FUNC_4("ecc_ei_inject", VAR_8 * VAR_5, 0, 0);
 }

 FUNC_3(VAR_12, VAR_3);
}
