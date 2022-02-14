
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vf_info {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_filter_ucast {scalar_t__ type; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_filter_ucast*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_vf_info*,struct ecore_filter_ucast*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_3,
       struct ecore_vf_info *VAR_4,
       struct ecore_filter_ucast *VAR_5)
{
 enum _ecore_status_t VAR_6 = VAR_2;

 if (VAR_5->type == VAR_0) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (VAR_6 != VAR_2)
   return VAR_6;
 }

 if (VAR_5->type == VAR_1)
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
