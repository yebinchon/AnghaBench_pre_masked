
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_6,
           struct ecore_ptt *VAR_7,
           u32 *VAR_8)
{
 u32 VAR_9;


 if (FUNC_0(VAR_6->p_dev)) {
  FUNC_1(VAR_6, 0, "Emulation - can't get flash size\n");
  return VAR_0;
 }


 if (FUNC_2(VAR_6->p_dev))
  return VAR_0;

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_3);
 VAR_9 = (VAR_9 & VAR_4) >>
       VAR_5;
 VAR_9 = (1 << (VAR_9 + VAR_2));

 *VAR_8 = VAR_9;

 return VAR_1;
}
