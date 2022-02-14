
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_8,
           struct ecore_ptt *VAR_9)
{
 u8 VAR_10 = VAR_4;
 u32 VAR_11 = 1;
 while (VAR_10-- && VAR_11) {
  VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_3);
  FUNC_1(VAR_5);
 }


 if (VAR_11) {
  FUNC_0(VAR_8->p_dev, 0,
     "DB recovery: doorbell usage failed to zero after %d usec. usage was %x\n",
     VAR_5 * VAR_4, VAR_11);
  return VAR_7;
 }


 FUNC_4(VAR_8, VAR_9, VAR_1, 0x1);


 FUNC_4(VAR_8, VAR_9, VAR_2, 0x0);


 FUNC_2(VAR_8, VAR_0);

 return VAR_6;
}
