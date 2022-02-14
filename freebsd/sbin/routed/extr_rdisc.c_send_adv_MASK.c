
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int icmp_ad_num; int icmp_ad_asize; int icmp_cksum; TYPE_1__* icmp_ad_info; int icmp_ad_life; int icmp_type; } ;
union ad_u {TYPE_2__ ad; } ;
typedef int u_short ;
struct interface {int int_rdisc_int; int int_addr; int int_rdisc_pref; } ;
typedef int naddr ;
typedef int n_long ;
struct TYPE_3__ {int icmp_ad_addr; int icmp_ad_pref; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct interface*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (union ad_u*,int ,int) ;
 int FUNC_7 (union ad_u*,int,struct interface*,int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(struct interface *VAR_2,
  naddr VAR_3,
  int VAR_4)
{
 union ad_u VAR_5;
 n_long VAR_6;


 FUNC_6(&VAR_5, 0, sizeof(VAR_5.ad));

 VAR_5.ad.icmp_type = VAR_0;
 VAR_5.ad.icmp_ad_num = 1;
 VAR_5.ad.icmp_ad_asize = sizeof(VAR_5.ad.icmp_ad_info[0])/4;

 VAR_5.ad.icmp_ad_life = VAR_1 ? 0 : FUNC_4(VAR_2->int_rdisc_int*3);





 VAR_6 = FUNC_2(VAR_2->int_rdisc_pref);
 VAR_5.ad.icmp_ad_info[0].icmp_ad_pref = FUNC_3(FUNC_1(FUNC_0(VAR_6, VAR_2)));

 VAR_5.ad.icmp_ad_info[0].icmp_ad_addr = VAR_2->int_addr;

 VAR_5.ad.icmp_cksum = FUNC_5((u_short*)&VAR_5.ad, sizeof(VAR_5.ad));

 FUNC_7(&VAR_5, sizeof(VAR_5.ad), VAR_2, VAR_3, VAR_4);
}
