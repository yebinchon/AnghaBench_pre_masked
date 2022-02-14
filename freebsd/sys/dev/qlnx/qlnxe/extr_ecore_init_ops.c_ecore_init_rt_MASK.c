
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int* b_valid; scalar_t__* init_val; } ;
struct ecore_hwfn {TYPE_1__ rt_data; } ;
typedef int osal_uintptr_t ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,scalar_t__,size_t,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3,
       u32 VAR_4,
       u16 VAR_5,
       u16 VAR_6,
       bool VAR_7)
{
 u32 *VAR_8 = &VAR_2->rt_data.init_val[VAR_5];
 bool *VAR_9 = &VAR_2->rt_data.b_valid[VAR_5];
 u16 VAR_10, VAR_11;
 enum _ecore_status_t VAR_12 = VAR_0;




 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (!VAR_9[VAR_10])
   continue;




  if (!VAR_7) {
   FUNC_1(VAR_2, VAR_3, VAR_4 + (VAR_10 << 2),
     VAR_8[VAR_10]);
   continue;
  }


  for (VAR_11 = 1; VAR_10 + VAR_11 < VAR_6; VAR_11++)
   if (!VAR_9[VAR_10 + VAR_11])
    break;

  VAR_12 = FUNC_0(VAR_2, VAR_3,
      (osal_uintptr_t)(VAR_8 + VAR_10),
      VAR_4 + (VAR_10 << 2), VAR_11,
      VAR_1 );
  if (VAR_12 != VAR_0)
   return VAR_12;


  VAR_10 += VAR_11;
 }

 return VAR_12;
}
