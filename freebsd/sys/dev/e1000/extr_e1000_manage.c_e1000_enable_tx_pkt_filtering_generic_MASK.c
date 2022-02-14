
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int (* check_mng_mode ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {int tx_pkt_filtering; TYPE_1__ ops; } ;
struct e1000_host_mng_dhcp_cookie {scalar_t__ checksum; scalar_t__ signature; int status; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_host_mng_dhcp_cookie mng_cookie; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

bool FUNC_5(struct e1000_hw *VAR_8)
{
 struct e1000_host_mng_dhcp_cookie *VAR_9 = &VAR_8->mng_cookie;
 u32 *VAR_10 = (u32 *)&VAR_8->mng_cookie;
 u32 VAR_11;
 s32 VAR_12, VAR_13, VAR_14;
 u8 VAR_15, VAR_16;

 FUNC_0("e1000_enable_tx_pkt_filtering_generic");

 VAR_8->mac.tx_pkt_filtering = VAR_7;


 if (!VAR_8->mac.ops.check_mng_mode(VAR_8)) {
  VAR_8->mac.tx_pkt_filtering = VAR_6;
  return VAR_8->mac.tx_pkt_filtering;
 }




 VAR_12 = FUNC_3(VAR_8);
 if (VAR_12 != VAR_5) {
  VAR_8->mac.tx_pkt_filtering = VAR_6;
  return VAR_8->mac.tx_pkt_filtering;
 }


 VAR_16 = VAR_2 >> 2;
 VAR_11 = VAR_3 >> 2;
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
  *(VAR_10 + VAR_15) = FUNC_1(VAR_8, VAR_0,
          VAR_11 + VAR_15);
 VAR_13 = VAR_9->checksum;
 VAR_9->checksum = 0;
 VAR_14 = FUNC_2((u8 *)VAR_9,
     VAR_2);




 if ((VAR_13 != VAR_14) || (VAR_9->signature != VAR_1)) {
  VAR_8->mac.tx_pkt_filtering = VAR_7;
  return VAR_8->mac.tx_pkt_filtering;
 }


 if (!(VAR_9->status & VAR_4))
  VAR_8->mac.tx_pkt_filtering = VAR_6;

 return VAR_8->mac.tx_pkt_filtering;
}
