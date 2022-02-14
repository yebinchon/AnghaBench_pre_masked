
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_vf_info {int abs_vf_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5,
     struct ecore_vf_info *VAR_6,
     struct ecore_ptt *VAR_7)
{
 u32 VAR_8[VAR_2], VAR_9[VAR_2];
 int VAR_10, VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  u32 VAR_12;

  VAR_8[VAR_10] = FUNC_2(VAR_5, VAR_7,
       VAR_3 +
       VAR_10 * 0x40);
  VAR_12 = FUNC_2(VAR_5, VAR_7,
    VAR_4 +
    VAR_10 * 0x40);
  VAR_9[VAR_10] = VAR_12 - VAR_8[VAR_10];
 }


 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < 50; VAR_11++) {
  for (; VAR_10 < VAR_2; VAR_10++) {
   u32 VAR_13;

   VAR_13 = FUNC_2(VAR_5, VAR_7,
           VAR_3 +
           VAR_10 * 0x40);
   if (VAR_9[VAR_10] > VAR_13 - VAR_8[VAR_10])
    break;
  }

  if (VAR_10 == VAR_2)
   break;

  FUNC_1(20);
 }

 if (VAR_11 == 50) {
  FUNC_0(VAR_5, "VF[%d] - pbf polling failed on VOQ %d\n",
         VAR_6->abs_vf_id, VAR_10);
  return VAR_1;
 }

 return VAR_0;
}
