
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
struct coalescing_timeset {int value; } ;
typedef int osal_size_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ int_coalescing_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,void*,int ) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_5,
            struct ecore_ptt *VAR_6,
            u32 VAR_7, void *VAR_8,
            osal_size_t VAR_9,
            u8 VAR_10)
{
 struct coalescing_timeset *VAR_11;

 if (VAR_5->p_dev->int_coalescing_mode != VAR_2) {
  FUNC_0(VAR_5, 1,
     "Coalescing configuration not enabled\n");
  return VAR_3;
 }

 VAR_11 = VAR_8;
 FUNC_1(VAR_8, 0, VAR_9);
 FUNC_2(VAR_11->value, VAR_0, VAR_10);
 FUNC_2(VAR_11->value, VAR_1, 1);
 FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 return VAR_4;
}
