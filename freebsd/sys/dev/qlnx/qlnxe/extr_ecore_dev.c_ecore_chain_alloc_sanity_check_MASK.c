
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ecore_dev {int dummy; } ;
typedef int osal_size_t ;
typedef enum ecore_chain_cnt_type { ____Placeholder_ecore_chain_cnt_type } ecore_chain_cnt_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_dev *VAR_6,
          enum ecore_chain_cnt_type VAR_7,
          osal_size_t VAR_8, u32 VAR_9)
{
 u64 VAR_10 = FUNC_1(VAR_8) * VAR_9;







 if ((VAR_7 == VAR_0 &&
      VAR_10 > ((u32)VAR_4 + 1)) ||
     (VAR_7 == VAR_1 &&
      VAR_10 > VAR_5)) {
  FUNC_0(VAR_6, 1,
     "The actual chain size (0x%llx) is larger than the maximal possible value\n",
     (unsigned long long)VAR_10);
  return VAR_2;
 }

 return VAR_3;
}
