
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ecore_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_11,
          bool VAR_12)
{
 FUNC_1(VAR_11, VAR_5, VAR_12 ? 1 : 0);
 if (VAR_12) {
  u8 VAR_13 = FUNC_0(VAR_11->p_dev) ? VAR_2 : VAR_0;
  u64 VAR_14 = ((u64)1 << VAR_13) - 1;


  FUNC_1(VAR_11, VAR_9, (u32)VAR_14);






  FUNC_1(VAR_11, VAR_7, VAR_10);
  FUNC_1(VAR_11, VAR_6, VAR_10);


  if (VAR_1)
   FUNC_1(VAR_11, VAR_4, VAR_3);
 }
}
