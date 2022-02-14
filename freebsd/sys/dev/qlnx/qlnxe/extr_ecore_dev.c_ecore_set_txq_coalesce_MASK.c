
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct xstorm_eth_queue_zone {int dummy; } ;
struct TYPE_2__ {int queue_id; } ;
struct ecore_queue_cid {TYPE_1__ abs; int sb_igu_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int,int ,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,struct xstorm_eth_queue_zone*,int,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_3,
         struct ecore_ptt *VAR_4,
         u16 VAR_5,
         struct ecore_queue_cid *VAR_6)
{
 struct xstorm_eth_queue_zone VAR_7;
 u8 VAR_8, VAR_9;
 u32 VAR_10;
 enum _ecore_status_t VAR_11;


 if (VAR_5 <= 0x7F)
  VAR_9 = 0;
 else if (VAR_5 <= 0xFF)
  VAR_9 = 1;
 else if (VAR_5 <= 0x1FF)
  VAR_9 = 2;
 else {
  FUNC_0(VAR_3, "Invalid coalesce value - %d\n", VAR_5);
  return VAR_1;
 }
 VAR_8 = (u8)(VAR_5 >> VAR_9);

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_9,
         VAR_6->sb_igu_id, 1);
 if (VAR_11 != VAR_2)
  goto out;

 VAR_10 = VAR_0 +
    FUNC_1(VAR_6->abs.queue_id);

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_10, &VAR_7,
    sizeof(struct xstorm_eth_queue_zone), VAR_8);
out:
 return VAR_11;
}
