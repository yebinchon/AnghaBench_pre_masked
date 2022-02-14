
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_devconf {int accept_dad; int disable_ipv6; int mc_forwarding; int optimistic_dad; int accept_source_route; int proxy_ndp; int accept_ra_rt_info_max_plen; int rtr_probe_interval; int accept_ra_rtr_pref; int accept_ra_pinfo; int accept_ra_defrtr; int max_addresses; int max_desync_factor; int regen_max_retry; int temp_prefered_lft; int temp_valid_lft; int use_tempaddr; int force_mld_version; int rtr_solicit_delay; int rtr_solicit_interval; int rtr_solicits; int dad_transmits; int autoconf; int accept_redirects; int accept_ra; int mtu6; int hop_limit; int forwarding; } ;
typedef int __s32 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct ipv6_devconf *VAR_29,
    __s32 *VAR_30, int VAR_31)
{
 FUNC_0(VAR_31 < (VAR_14 * 4));

 FUNC_1(VAR_30, 0, VAR_31);
 VAR_30[VAR_12] = VAR_29->forwarding;
 VAR_30[VAR_13] = VAR_29->hop_limit;
 VAR_30[VAR_18] = VAR_29->mtu6;
 VAR_30[VAR_1] = VAR_29->accept_ra;
 VAR_30[VAR_6] = VAR_29->accept_redirects;
 VAR_30[VAR_8] = VAR_29->autoconf;
 VAR_30[VAR_9] = VAR_29->dad_transmits;
 VAR_30[VAR_23] = VAR_29->rtr_solicits;
 VAR_30[VAR_25] = VAR_29->rtr_solicit_interval;
 VAR_30[VAR_24] = VAR_29->rtr_solicit_delay;
 VAR_30[VAR_11] = VAR_29->force_mld_version;







 VAR_30[VAR_15] = VAR_29->max_addresses;
 VAR_30[VAR_2] = VAR_29->accept_ra_defrtr;
 VAR_30[VAR_3] = VAR_29->accept_ra_pinfo;







 VAR_30[VAR_20] = VAR_29->proxy_ndp;
 VAR_30[VAR_7] = VAR_29->accept_source_route;






 VAR_30[VAR_10] = VAR_29->disable_ipv6;
 VAR_30[VAR_0] = VAR_29->accept_dad;
}
