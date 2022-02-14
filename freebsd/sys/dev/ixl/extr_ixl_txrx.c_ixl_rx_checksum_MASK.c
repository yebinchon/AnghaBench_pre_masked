
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i40e_rx_ptype_decoded {scalar_t__ outer_ip; scalar_t__ outer_ip_ver; } ;
typedef TYPE_1__* if_rxd_info_t ;
struct TYPE_3__ {int iri_csum_data; int iri_csum_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct i40e_rx_ptype_decoded FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(if_rxd_info_t VAR_10, u32 VAR_11, u32 VAR_12, u8 VAR_13)
{
 struct i40e_rx_ptype_decoded VAR_14;

 VAR_10->iri_csum_flags = 0;


 if (!(VAR_11 & (1 << VAR_7)))
  return;

 VAR_14 = FUNC_0(VAR_13);


 if (VAR_14.outer_ip == VAR_8 &&
     VAR_14.outer_ip_ver == VAR_9) {
  if (VAR_11 &
      (1 << VAR_6)) {
   VAR_10->iri_csum_flags = 0;
   return;
  }
 }

 VAR_10->iri_csum_flags |= VAR_0;


 if (VAR_12 & (1 << VAR_4))
  return;

 VAR_10->iri_csum_flags |= VAR_1;
 VAR_10->iri_csum_flags |= VAR_2;


 if (VAR_12 & (1 << VAR_5))
  return;

 VAR_10->iri_csum_flags |= VAR_3;
 VAR_10->iri_csum_data |= FUNC_1(0xffff);
}
