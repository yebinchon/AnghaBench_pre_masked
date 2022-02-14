
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_dev {int dp_ctx; } ;
struct ecore_chain_ext_pbl {int dummy; } ;
struct ecore_chain {int dummy; } ;
typedef scalar_t__ osal_size_t ;
typedef enum ecore_chain_use_mode { ____Placeholder_ecore_chain_use_mode } ecore_chain_use_mode ;
typedef enum ecore_chain_mode { ____Placeholder_ecore_chain_mode } ecore_chain_mode ;
typedef enum ecore_chain_cnt_type { ____Placeholder_ecore_chain_cnt_type } ecore_chain_cnt_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int,int,int,int,scalar_t__) ;



 int FUNC_1 (int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ecore_dev*,struct ecore_chain*) ;
 int FUNC_3 (struct ecore_dev*,struct ecore_chain*,struct ecore_chain_ext_pbl*) ;
 int FUNC_4 (struct ecore_dev*,int,scalar_t__,int) ;
 int FUNC_5 (struct ecore_dev*,struct ecore_chain*) ;
 int FUNC_6 (struct ecore_dev*,struct ecore_chain*) ;
 int FUNC_7 (struct ecore_chain*,int,int ,int,int,int,int ) ;

enum _ecore_status_t FUNC_8(struct ecore_dev *VAR_1,
           enum ecore_chain_use_mode VAR_2,
           enum ecore_chain_mode VAR_3,
           enum ecore_chain_cnt_type VAR_4,
           u32 VAR_5, osal_size_t VAR_6,
           struct ecore_chain *VAR_7,
           struct ecore_chain_ext_pbl *VAR_8)
{
 u32 VAR_9;
 enum _ecore_status_t VAR_10 = VAR_0;

 if (VAR_3 == 128)
  VAR_9 = 1;
 else
  VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_3);

 VAR_10 = FUNC_4(VAR_1, VAR_4, VAR_6,
         VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_1, 0,
     "Cannot allocate a chain with the given arguments:\n"
     "[use_mode %d, mode %d, cnt_type %d, num_elems %d, elem_size %zu]\n",
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  return VAR_10;
 }

 FUNC_7(VAR_7, VAR_9, (u8)VAR_6, VAR_2,
    VAR_3, VAR_4, VAR_1->dp_ctx);

 switch (VAR_3) {
 case 130:
  VAR_10 = FUNC_2(VAR_1, VAR_7);
  break;
 case 128:
  VAR_10 = FUNC_5(VAR_1, VAR_7);
  break;
 case 129:
  VAR_10 = FUNC_3(VAR_1, VAR_7, VAR_8);
  break;
 }
 if (VAR_10)
  goto nomem;

 return VAR_0;

nomem:
 FUNC_6(VAR_1, VAR_7);
 return VAR_10;
}
