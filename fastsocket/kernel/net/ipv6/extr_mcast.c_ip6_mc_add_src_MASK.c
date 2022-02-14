
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {scalar_t__ sf_crcount; struct ip6_sf_list* sf_next; } ;
struct inet6_dev {int lock; int mc_ifc_count; int mc_qrv; struct ifmcaddr6* mc_list; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {size_t mca_sfmode; scalar_t__* mca_sfcount; int mca_lock; struct ip6_sf_list* mca_sources; int mca_crcount; int mca_addr; struct ifmcaddr6* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ifmcaddr6*,int,struct in6_addr*,int) ;
 int FUNC_1 (struct ifmcaddr6*,int,struct in6_addr*) ;
 scalar_t__ FUNC_2 (struct in6_addr*,int *) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_7 (struct ifmcaddr6*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inet6_dev *VAR_4, struct in6_addr *VAR_5,
     int VAR_6, int VAR_7, struct in6_addr *VAR_8,
     int VAR_9)
{
 struct ifmcaddr6 *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_4)
  return -VAR_0;
 FUNC_4(&VAR_4->lock);
 for (VAR_10=VAR_4->mc_list; VAR_10; VAR_10=VAR_10->next) {
  if (FUNC_2(VAR_5, &VAR_10->mca_addr))
   break;
 }
 if (!VAR_10) {

  FUNC_5(&VAR_4->lock);
  return -VAR_1;
 }
 FUNC_8(&VAR_10->mca_lock);

 FUNC_6(VAR_10);
 VAR_11 = VAR_10->mca_sfmode == VAR_2;
 if (!VAR_9)
  VAR_10->mca_sfcount[VAR_6]++;
 VAR_13 = 0;
 for (VAR_12=0; VAR_12<VAR_7; VAR_12++) {
  VAR_13 = FUNC_0(VAR_10, VAR_6, &VAR_8[VAR_12], VAR_9);
  if (VAR_13)
   break;
 }
 if (VAR_13) {
  int VAR_14;

  if (!VAR_9)
   VAR_10->mca_sfcount[VAR_6]--;
  for (VAR_14=0; VAR_14<VAR_12; VAR_14++)
   (void) FUNC_1(VAR_10, VAR_6, &VAR_8[VAR_12]);
 } else if (VAR_11 != (VAR_10->mca_sfcount[VAR_2] != 0)) {
  struct ip6_sf_list *VAR_15;


  if (VAR_10->mca_sfcount[VAR_2])
   VAR_10->mca_sfmode = VAR_2;
  else if (VAR_10->mca_sfcount[VAR_3])
   VAR_10->mca_sfmode = VAR_3;


  VAR_10->mca_crcount = VAR_4->mc_qrv;
  VAR_4->mc_ifc_count = VAR_10->mca_crcount;
  for (VAR_15=VAR_10->mca_sources; VAR_15; VAR_15 = VAR_15->sf_next)
   VAR_15->sf_crcount = 0;
  FUNC_3(VAR_4);
 } else if (FUNC_7(VAR_10))
  FUNC_3(VAR_4);
 FUNC_9(&VAR_10->mca_lock);
 FUNC_5(&VAR_4->lock);
 return VAR_13;
}
