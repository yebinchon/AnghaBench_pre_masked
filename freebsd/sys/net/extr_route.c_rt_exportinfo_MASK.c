
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct rtentry {int rt_flags; int rt_ifa; int rt_ifp; int rt_mtu; struct sockaddr* rt_gateway; } ;
struct rt_metrics {int rmx_mtu; } ;
struct rt_addrinfo {int rti_flags; int rti_ifp; int rti_ifa; int rti_mflags; struct rt_metrics* rti_rmx; int rti_addrs; struct sockaddr** rti_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr*,int) ;
 void* FUNC_3 (struct rtentry*) ;
 struct sockaddr* FUNC_4 (struct rtentry*) ;

int
FUNC_5(struct rtentry *VAR_11, struct rt_addrinfo *VAR_12, int VAR_13)
{
 struct rt_metrics *VAR_14;
 struct sockaddr *VAR_15, *VAR_16;
 int VAR_17;

 if (VAR_13 & VAR_1) {

  VAR_15 = FUNC_3(VAR_11);
  VAR_16 = VAR_12->rti_info[VAR_3];
  VAR_17 = VAR_15->sa_len;
  if (VAR_16 != ((void*)0)) {
   if (VAR_15->sa_len > VAR_16->sa_len)
    return (VAR_0);
   FUNC_2(VAR_16, VAR_15, VAR_15->sa_len);
   VAR_12->rti_addrs |= VAR_6;
  }


  VAR_15 = FUNC_4(VAR_11);
  VAR_16 = VAR_12->rti_info[VAR_5];
  if (VAR_15 != ((void*)0) && VAR_16 != ((void*)0)) {






   if (VAR_17 > VAR_16->sa_len)
    return (VAR_0);
   FUNC_2(VAR_16, VAR_15, VAR_15->sa_len);
   VAR_12->rti_addrs |= VAR_8;
  }


  VAR_15 = VAR_11->rt_gateway;
  VAR_16 = VAR_12->rti_info[VAR_4];
  if ((VAR_11->rt_flags & VAR_9) && VAR_15 != ((void*)0) && VAR_16 != ((void*)0)){
   if (VAR_15->sa_len > VAR_16->sa_len)
    return (VAR_0);
   FUNC_2(VAR_16, VAR_15, VAR_15->sa_len);
   VAR_12->rti_addrs |= VAR_7;
  }
 } else {
  VAR_12->rti_info[VAR_3] = FUNC_3(VAR_11);
  VAR_12->rti_addrs |= VAR_6;
  if (FUNC_4(VAR_11) != ((void*)0)) {
   VAR_12->rti_info[VAR_5] = FUNC_4(VAR_11);
   VAR_12->rti_addrs |= VAR_8;
  }
  if (VAR_11->rt_flags & VAR_9) {
   VAR_12->rti_info[VAR_4] = VAR_11->rt_gateway;
   VAR_12->rti_addrs |= VAR_7;
  }
 }

 VAR_14 = VAR_12->rti_rmx;
 if (VAR_14 != ((void*)0)) {
  VAR_12->rti_mflags |= VAR_10;
  VAR_14->rmx_mtu = VAR_11->rt_mtu;
 }

 VAR_12->rti_flags = VAR_11->rt_flags;
 VAR_12->rti_ifp = VAR_11->rt_ifp;
 VAR_12->rti_ifa = VAR_11->rt_ifa;
 FUNC_1(VAR_12->rti_ifa);
 if (VAR_13 & VAR_2) {

  FUNC_0(VAR_12->rti_ifp);
 }

 return (0);
}
