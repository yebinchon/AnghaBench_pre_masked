
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static vm_offset_t
FUNC_6(vm_offset_t VAR_10)
{
 u_long VAR_11, VAR_12;
 u_int VAR_13, VAR_14;

 VAR_11 = FUNC_4(VAR_11);
 FUNC_5(VAR_11, VAR_11 & ~VAR_3, 0);
 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  VAR_12 = FUNC_3(FUNC_0(VAR_9, VAR_13),
      VAR_0);
  if (FUNC_1(VAR_12) != VAR_10)
   continue;
  VAR_12 = FUNC_2(VAR_9, VAR_13);
  FUNC_5(VAR_11, VAR_11, 0);
  VAR_12 >>= VAR_6;
  if (VAR_7 == VAR_1 ||
      VAR_7 >= VAR_2)
   return (VAR_12 & VAR_4);
  return (VAR_12 & VAR_5);
 }
 FUNC_5(VAR_11, VAR_11, 0);
 return (-1);
}
