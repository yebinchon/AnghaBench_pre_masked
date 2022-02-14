
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct rtentry {int rt_flags; int rt_mtu; int rt_nodes; int * rt_ifp; TYPE_6__* rt_ifa; } ;
struct rt_addrinfo {int rti_flags; TYPE_6__* rti_ifa; TYPE_1__** rti_info; int * rti_ifp; } ;
struct rib_head {int rnh_gen; int head; scalar_t__ (* rnh_lookup ) (TYPE_1__*,TYPE_1__*,int *) ;} ;
struct if_mtuinfo {int mtu; int * ifp; } ;
struct TYPE_9__ {int (* ifa_rtrequest ) (int ,struct rtentry*,struct rt_addrinfo*) ;int ifa_addr; } ;
struct TYPE_8__ {int sa_family; } ;


 int VAR_0 ;
 int FUNC_0 (struct rib_head*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,struct if_mtuinfo*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (struct rt_addrinfo*,int ) ;
 int FUNC_9 (struct rtentry*) ;
 scalar_t__ FUNC_10 (struct rib_head*) ;
 struct rtentry* FUNC_11 (struct rtentry*,TYPE_1__*) ;
 int FUNC_12 (struct rtentry*,int ,TYPE_1__*) ;
 int FUNC_13 (struct rt_addrinfo*,struct rtentry*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_16 (int ,struct rtentry*,struct rt_addrinfo*) ;
 int FUNC_17 (int ,struct rtentry*,struct rt_addrinfo*) ;

__attribute__((used)) static int
FUNC_18(struct rib_head *VAR_11, struct rt_addrinfo *VAR_12,
    struct rtentry **VAR_13, u_int VAR_14)
{
 struct rtentry *VAR_15 = ((void*)0);
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18, VAR_19;
 struct if_mtuinfo VAR_20;

 FUNC_0(VAR_11);

 VAR_15 = (struct rtentry *)VAR_11->rnh_lookup(VAR_12->rti_info[VAR_1],
     VAR_12->rti_info[VAR_5], &VAR_11->head);

 if (VAR_15 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_15);

 FUNC_13(VAR_12, VAR_15);






 if (((VAR_15->rt_flags & VAR_7) &&
     VAR_12->rti_info[VAR_2] != ((void*)0)) ||
     VAR_12->rti_info[VAR_4] != ((void*)0) ||
     (VAR_12->rti_info[VAR_3] != ((void*)0) &&
      !FUNC_14(VAR_12->rti_info[VAR_3], VAR_15->rt_ifa->ifa_addr))) {




  VAR_12->rti_flags |= VAR_8;
  VAR_16 = FUNC_8(VAR_12, VAR_14);
  VAR_12->rti_flags &= ~VAR_8;
  if (VAR_12->rti_ifa != ((void*)0))
   VAR_17 = 1;

  if (VAR_16 != 0)
   goto bad;
 }


 if (VAR_12->rti_ifa != ((void*)0) && VAR_12->rti_ifa != VAR_15->rt_ifa &&
     VAR_15->rt_ifa != ((void*)0)) {
  if (VAR_15->rt_ifa->ifa_rtrequest != ((void*)0))
   VAR_15->rt_ifa->ifa_rtrequest(VAR_10, VAR_15, VAR_12);
  FUNC_6(VAR_15->rt_ifa);
  VAR_15->rt_ifa = ((void*)0);
 }

 if (VAR_12->rti_info[VAR_2] != ((void*)0)) {
  VAR_16 = FUNC_12(VAR_15, FUNC_9(VAR_15), VAR_12->rti_info[VAR_2]);
  if (VAR_16 != 0)
   goto bad;

  VAR_15->rt_flags &= ~VAR_7;
  VAR_15->rt_flags |= (VAR_7 & VAR_12->rti_flags);
 }

 if (VAR_12->rti_ifa != ((void*)0) && VAR_12->rti_ifa != VAR_15->rt_ifa) {
  FUNC_7(VAR_12->rti_ifa);
  VAR_15->rt_ifa = VAR_12->rti_ifa;
  VAR_15->rt_ifp = VAR_12->rti_ifp;
 }

 VAR_15->rt_flags &= ~VAR_6;
 VAR_15->rt_flags |= VAR_12->rti_flags & VAR_6;

 if (VAR_15->rt_ifa && VAR_15->rt_ifa->ifa_rtrequest != ((void*)0))
        VAR_15->rt_ifa->ifa_rtrequest(VAR_9, VAR_15, VAR_12);


 if (VAR_15->rt_ifp != ((void*)0)) {
  VAR_18 = VAR_12->rti_info[VAR_1]->sa_family;
  VAR_19 = FUNC_4(VAR_15->rt_ifp, VAR_18);

  if (VAR_15->rt_mtu == 0)
   VAR_15->rt_mtu = VAR_19;
  if (VAR_15->rt_mtu != VAR_19) {

   VAR_20.ifp = VAR_15->rt_ifp;
   VAR_20.mtu = VAR_19;
   FUNC_5(VAR_15->rt_nodes, &VAR_20);
  }
 }






 VAR_11->rnh_gen++;

 if (VAR_13) {
  *VAR_13 = VAR_15;
  FUNC_1(VAR_15);
 }
bad:
 FUNC_3(VAR_15);
 if (VAR_17 != 0) {
  FUNC_6(VAR_12->rti_ifa);
  VAR_12->rti_ifa = ((void*)0);
 }
 return (VAR_16);
}
