
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_hwfn {int p_dpc_ptt; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_8)
{

 if (FUNC_0(VAR_8->p_dev)) {
  u32 VAR_9 = FUNC_2(VAR_8, VAR_8->p_dpc_ptt,
       VAR_5);

  if (VAR_9 & ~(VAR_7 |
       VAR_6))
   return VAR_0;

  if (VAR_9 & (VAR_7 |
      VAR_6))
   FUNC_1(VAR_8, "TM attention on emulation - most likely results of clock-ratios\n");
  VAR_9 = FUNC_2(VAR_8, VAR_8->p_dpc_ptt, VAR_2);
  VAR_9 |= VAR_3 |
         VAR_4;
  FUNC_3(VAR_8, VAR_8->p_dpc_ptt, VAR_2, VAR_9);

  return VAR_1;
 }


 return VAR_0;
}
