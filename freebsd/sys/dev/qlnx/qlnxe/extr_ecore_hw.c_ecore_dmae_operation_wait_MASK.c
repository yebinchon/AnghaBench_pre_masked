
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__* p_completion_word; } ;
struct ecore_hwfn {TYPE_1__ dmae_info; int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_7)
{
 u32 VAR_8 = 10000, VAR_9 = 0;
 enum _ecore_status_t VAR_10 = VAR_5;


 u32 VAR_11 = (FUNC_0(VAR_7->p_dev) ?
        VAR_2 :
        (FUNC_1(VAR_7->p_dev) ?
         VAR_3 : 1));

 VAR_8 *= VAR_11;






 FUNC_3(VAR_7->p_dev);
 while (*VAR_7->dmae_info.p_completion_word != VAR_0) {
  FUNC_4(VAR_1);
  if (++VAR_9 > VAR_8) {
   FUNC_2(VAR_7->p_dev, VAR_4,
      "Timed-out waiting for operation to complete. Completion word is 0x%08x expected 0x%08x.\n",
      *(VAR_7->dmae_info.p_completion_word),
      VAR_0);
   VAR_10 = VAR_6;
   break;
  }




  FUNC_3(VAR_7->p_dev);
 }

 if (VAR_10 == VAR_5)
  *VAR_7->dmae_info.p_completion_word = 0;

 return VAR_10;
}
