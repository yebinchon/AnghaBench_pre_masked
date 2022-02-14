
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_dl {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rt_addrinfo {int rti_flags; struct sockaddr** rti_info; int * rti_ifa; int * rti_ifp; } ;
struct ifnet {int if_fib; int if_type; } ;
struct ifaddr {int ifa_flags; int ifa_addr; struct ifnet* ifa_ifp; } ;
struct epoch_tracker {int dummy; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct epoch_tracker) ;
 int FUNC_1 (struct epoch_tracker) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_2 (struct rt_addrinfo*,int) ;
 int FUNC_3 (struct ifnet*,char*,char const*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (struct ifnet*,struct sockaddr*,int ) ;
 int FUNC_7 (int,struct rt_addrinfo*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_10, const char *VAR_11, struct ifaddr *VAR_12,
    struct sockaddr *VAR_13)
{
 struct epoch_tracker VAR_14;
 int VAR_15;
 struct rt_addrinfo VAR_16;
 struct sockaddr_dl VAR_17;
 struct ifnet *VAR_18;

 VAR_18 = VAR_12->ifa_ifp;

 FUNC_2(&VAR_16, sizeof(VAR_16));
 if (VAR_10 != VAR_8)
  VAR_16.rti_ifp = VAR_9;
 if (VAR_10 == VAR_7) {

  if (VAR_16.rti_ifp != ((void*)0)) {
   FUNC_0(VAR_14);
   VAR_16.rti_ifa = FUNC_5(VAR_12->ifa_addr, VAR_16.rti_ifp);
   if (VAR_16.rti_ifa != ((void*)0))
    FUNC_4(VAR_16.rti_ifa);
   FUNC_1(VAR_14);
  }
 }
 VAR_16.rti_flags = VAR_12->ifa_flags | VAR_4 | VAR_6 | VAR_5;
 VAR_16.rti_info[VAR_2] = VAR_13;
 VAR_16.rti_info[VAR_3] = (struct sockaddr *)&VAR_17;
 FUNC_6(VAR_18, (struct sockaddr *)&VAR_17, VAR_18->if_type);

 VAR_15 = FUNC_7(VAR_10, &VAR_16, ((void*)0), VAR_18->if_fib);

 if (VAR_15 != 0 &&
     !(VAR_10 == VAR_7 && VAR_15 == VAR_0) &&
     !(VAR_10 == VAR_8 && VAR_15 == VAR_1))
  FUNC_3(VAR_18, "%s failed: %d\n", VAR_11, VAR_15);

 return (VAR_15);
}
