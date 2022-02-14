
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_6,
            u8 VAR_7,
            bool VAR_8,
            u32 VAR_9,
            u32 VAR_10,
            u32 VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 u16 VAR_15, VAR_16, VAR_17, VAR_18;




 VAR_18 = VAR_7;
 VAR_12 = VAR_9 + VAR_10;
 VAR_13 = FUNC_0(VAR_12);
 VAR_14 = VAR_11;


 FUNC_2(VAR_6, VAR_4 + VAR_18, (u32)(VAR_7));


 FUNC_2(VAR_6, VAR_3, FUNC_1(VAR_12));

 for (VAR_15 = 0, VAR_17 = VAR_7 * VAR_1; VAR_15 < VAR_0; VAR_15++, VAR_17++) {

  FUNC_2(VAR_6, VAR_2 + VAR_17, VAR_14);


  if (VAR_8)
   for (VAR_16 = 0; VAR_16 < 2; VAR_16++)
    FUNC_2(VAR_6, VAR_5 + (VAR_17 * 2) + VAR_16, 0);

  VAR_14 += VAR_13;
 }
}
