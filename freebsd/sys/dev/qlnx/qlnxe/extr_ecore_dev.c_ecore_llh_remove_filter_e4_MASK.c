
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_llh_filter_e4_details {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int filter_details ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_llh_filter_e4_details*,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,struct ecore_llh_filter_e4_details*,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_0,
      struct ecore_ptt *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ecore_llh_filter_e4_details VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
       &VAR_4,
       1 );
}
