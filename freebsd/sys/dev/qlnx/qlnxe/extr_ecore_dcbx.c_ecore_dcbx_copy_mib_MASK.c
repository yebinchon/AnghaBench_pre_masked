
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dcbx_mib_meta_data {TYPE_1__* mib; int size; int addr; TYPE_1__* lldp_tlvs; TYPE_1__* lldp_remote; } ;
typedef enum ecore_mib_read_type { ____Placeholder_ecore_mib_read_type } ecore_mib_read_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ prefix_seq_num; scalar_t__ suffix_seq_num; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_6,
      struct ecore_ptt *VAR_7,
      struct ecore_dcbx_mib_meta_data *VAR_8,
      enum ecore_mib_read_type VAR_9)
{
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;
 enum _ecore_status_t VAR_13 = VAR_5;




 do {
  if (VAR_9 == VAR_2) {
   FUNC_2(VAR_6, VAR_7, VAR_8->lldp_remote,
       VAR_8->addr, VAR_8->size);
   VAR_10 = VAR_8->lldp_remote->prefix_seq_num;
   VAR_11 = VAR_8->lldp_remote->suffix_seq_num;
  } else if (VAR_9 == VAR_0) {
   FUNC_2(VAR_6, VAR_7, VAR_8->lldp_tlvs,
       VAR_8->addr, VAR_8->size);
   VAR_10 = VAR_8->lldp_tlvs->prefix_seq_num;
   VAR_11 = VAR_8->lldp_tlvs->suffix_seq_num;

  } else {
   FUNC_2(VAR_6, VAR_7, VAR_8->mib,
       VAR_8->addr, VAR_8->size);
   VAR_10 = VAR_8->mib->prefix_seq_num;
   VAR_11 = VAR_8->mib->suffix_seq_num;
  }
  VAR_12++;

  FUNC_1(VAR_6, VAR_4,
      "mib type = %d, try count = %d prefix seq num  = %d suffix seq num = %d\n",
      VAR_9, VAR_12, VAR_10, VAR_11);
 } while ((VAR_10 != VAR_11) &&
   (VAR_12 < VAR_1));

 if (VAR_12 >= VAR_1) {
  FUNC_0(VAR_6,
         "MIB read err, mib type = %d, try count = %d prefix seq num = %d suffix seq num = %d\n",
         VAR_9, VAR_12, VAR_10, VAR_11);
  VAR_13 = VAR_3;
 }

 return VAR_13;
}
