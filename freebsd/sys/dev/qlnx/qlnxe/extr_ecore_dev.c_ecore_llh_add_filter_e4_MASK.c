
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_llh_filter_e4_details {int enable; int value; int mode; scalar_t__ protocol_type; scalar_t__ hdr_sel; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__,struct ecore_llh_filter_e4_details*,int) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_1(struct ecore_hwfn *VAR_0, struct ecore_ptt *VAR_1,
   u8 VAR_2, u8 VAR_3, u8 VAR_4,
   u32 VAR_5, u32 VAR_6)
{
 struct ecore_llh_filter_e4_details VAR_7;

 VAR_7.enable = 1;
 VAR_7.value = ((u64)VAR_5 << 32) | VAR_6;
 VAR_7.hdr_sel = 0;
 VAR_7.protocol_type = VAR_4;
 VAR_7.mode = VAR_4 ?
         1 :
         0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
       &VAR_7,
       1 );
}
