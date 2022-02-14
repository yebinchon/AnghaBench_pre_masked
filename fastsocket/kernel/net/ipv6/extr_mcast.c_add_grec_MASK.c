
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int mtu; } ;
struct mld2_report {scalar_t__ mld2r_ngrec; } ;
struct mld2_grec {void* grec_nsrcs; } ;
struct in6_addr {int dummy; } ;
struct ip6_sf_list {scalar_t__ sf_crcount; struct ip6_sf_list* sf_next; struct in6_addr sf_addr; scalar_t__ sf_gsresp; } ;
struct ifmcaddr6 {int mca_flags; scalar_t__ mca_crcount; struct ip6_sf_list* mca_sources; struct ip6_sf_list* mca_tomb; TYPE_1__* idev; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,struct ifmcaddr6*,int,struct mld2_grec**) ;
 int FUNC_2 (struct ifmcaddr6*,int,int,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ifmcaddr6*,struct ip6_sf_list*,int,int,int) ;
 int FUNC_5 (struct ip6_sf_list*) ;
 struct sk_buff* FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct sk_buff *VAR_7, struct ifmcaddr6 *VAR_8,
 int VAR_9, int VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = VAR_8->idev->dev;
 struct mld2_report *VAR_13;
 struct mld2_grec *VAR_14 = ((void*)0);
 struct ip6_sf_list *VAR_15, *VAR_16, *VAR_17, **VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 if (VAR_8->mca_flags & VAR_1)
  return VAR_7;

 VAR_22 = VAR_9 == VAR_6 ||
    VAR_9 == VAR_5;
 VAR_23 = VAR_9 == VAR_5 ||
      VAR_9 == VAR_4;

 VAR_20 = VAR_19 = 0;

 VAR_18 = VAR_11 ? &VAR_8->mca_tomb : &VAR_8->mca_sources;

 if (!*VAR_18)
  goto empty_source;

 VAR_13 = VAR_7 ? (struct mld2_report *)FUNC_9(VAR_7) : ((void*)0);


 if (VAR_23) {
  if (VAR_13 && VAR_13->mld2r_ngrec &&
      FUNC_0(VAR_7) < FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11)) {
   if (VAR_7)
    FUNC_7(VAR_7);
   VAR_7 = FUNC_6(VAR_12, VAR_12->mtu);
  }
 }
 VAR_21 = 1;
 VAR_17 = ((void*)0);
 for (VAR_15=*VAR_18; VAR_15; VAR_15=VAR_16) {
  struct in6_addr *VAR_24;

  VAR_16 = VAR_15->sf_next;

  if (!FUNC_4(VAR_8, VAR_15, VAR_9, VAR_10, VAR_11)) {
   VAR_17 = VAR_15;
   continue;
  }


  if (VAR_22)
   VAR_15->sf_gsresp = 0;

  if (FUNC_0(VAR_7) < sizeof(*VAR_24) +
      VAR_21*sizeof(struct mld2_grec)) {
   if (VAR_23 && !VAR_21)
    break;
   if (VAR_14)
    VAR_14->grec_nsrcs = FUNC_3(VAR_19);
   if (VAR_7)
    FUNC_7(VAR_7);
   VAR_7 = FUNC_6(VAR_12, VAR_12->mtu);
   VAR_21 = 1;
   VAR_19 = 0;
  }
  if (VAR_21) {
   VAR_7 = FUNC_1(VAR_7, VAR_8, VAR_9, &VAR_14);
   VAR_21 = 0;
  }
  if (!VAR_7)
   return ((void*)0);
  VAR_24 = (struct in6_addr *)FUNC_8(VAR_7, sizeof(*VAR_24));
  *VAR_24 = VAR_15->sf_addr;
  VAR_19++; VAR_20++;
  if ((VAR_9 == VAR_2 ||
       VAR_9 == VAR_3) && VAR_15->sf_crcount) {
   VAR_15->sf_crcount--;
   if ((VAR_11 || VAR_10) && VAR_15->sf_crcount == 0) {
    if (VAR_17)
     VAR_17->sf_next = VAR_15->sf_next;
    else
     *VAR_18 = VAR_15->sf_next;
    FUNC_5(VAR_15);
    continue;
   }
  }
  VAR_17 = VAR_15;
 }

empty_source:
 if (!VAR_20) {
  if (VAR_9 == VAR_2 ||
      VAR_9 == VAR_3)
   return VAR_7;
  if (VAR_8->mca_crcount || VAR_22) {

   if (VAR_7 && FUNC_0(VAR_7) < sizeof(struct mld2_grec)) {
    FUNC_7(VAR_7);
    VAR_7 = ((void*)0);
   }
   VAR_7 = FUNC_1(VAR_7, VAR_8, VAR_9, &VAR_14);
  }
 }
 if (VAR_14)
  VAR_14->grec_nsrcs = FUNC_3(VAR_19);

 if (VAR_22)
  VAR_8->mca_flags &= ~VAR_0;
 return VAR_7;
}
