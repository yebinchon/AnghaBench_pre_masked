
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_wake_info {int wk_pkt_len; scalar_t__ wk_buffer; void* wk_details; void* wk_info; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,char*,int,...) ;
 scalar_t__ FUNC_1 (struct ecore_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 void* FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int const) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_10,
      struct ecore_ptt *VAR_11,
      struct ecore_wake_info *VAR_12)
{
 struct ecore_dev *VAR_13 = VAR_10->p_dev;
 u32 *VAR_14 = VAR_5;
 u32 VAR_15 = 0;
 const u32 VAR_16 =
  FUNC_1(VAR_13) ? VAR_1 :
   VAR_6;

 VAR_12->wk_info = FUNC_2(VAR_10, VAR_11,
    FUNC_1(VAR_13) ? VAR_3 :
    VAR_8);
 VAR_12->wk_details = FUNC_2(VAR_10, VAR_11,
    FUNC_1(VAR_13) ? VAR_2 :
    VAR_7);
 VAR_12->wk_pkt_len = FUNC_2(VAR_10, VAR_11,
    FUNC_1(VAR_13) ? VAR_4 :
    VAR_9);

 FUNC_0(VAR_13,
  "ecore_get_wake_info: REG_WAKE_INFO=0x%08x "
  "REG_WAKE_DETAILS=0x%08x "
  "REG_WAKE_PKT_LEN=0x%08x\n",
  VAR_12->wk_info,
  VAR_12->wk_details,
  VAR_12->wk_pkt_len);

 VAR_14 = (u32 *)VAR_12->wk_buffer;

 for (VAR_15 = 0; VAR_15 < (VAR_12->wk_pkt_len / sizeof(u32)); VAR_15++)
 {
  if ((VAR_15*sizeof(u32)) >= sizeof(VAR_12->wk_buffer))
  {
   FUNC_0(VAR_13,
    "ecore_get_wake_info: i index to 0 high=%d\n",
     VAR_15);
   break;
  }
  VAR_14[VAR_15] = FUNC_2(VAR_10, VAR_11,
      VAR_16 + (VAR_15 * sizeof(u32)));
  FUNC_0(VAR_13, "ecore_get_wake_info: wk_buffer[%u]: 0x%08x\n",
   VAR_15, VAR_14[VAR_15]);
 }

 FUNC_3(VAR_10, VAR_11);

 return VAR_0;
}
