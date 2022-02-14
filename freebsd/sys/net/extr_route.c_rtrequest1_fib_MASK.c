
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; int sa_len; } ;
struct rtentry {int rt_flags; int rt_weight; struct ifaddr* rt_ifa; int rt_nodes; int rt_ifp; scalar_t__ rt_fibnum; } ;
struct rt_addrinfo {int rti_flags; struct sockaddr** rti_info; struct ifaddr* rti_ifa; } ;
struct rib_head {int rnh_gen; int head; struct radix_node* (* rnh_addaddr ) (struct sockaddr*,int *,int *,int ) ;} ;
struct radix_node {int dummy; } ;
struct ifaddr {int (* ifa_rtrequest ) (int,struct rtentry*,struct rt_addrinfo*) ;int ifa_ifp; } ;
typedef int mdst ;
struct TYPE_3__ {int sa_family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct rib_head*) ;
 int FUNC_2 (struct rib_head*) ;
 size_t VAR_8 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;




 int FUNC_5 (struct rtentry*) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_9 (struct sockaddr*,struct sockaddr*,int) ;
 struct sockaddr* VAR_16 ;
 int VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_10 (struct ifaddr*) ;
 int FUNC_11 (struct ifaddr*) ;
 int * VAR_19 ;
 int FUNC_12 (struct rt_addrinfo*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct rtentry*) ;
 int FUNC_14 (struct sockaddr*,struct sockaddr*,int *) ;
 int FUNC_15 (struct rib_head*) ;
 int FUNC_16 (struct rib_head*,struct rtentry*,int *) ;
 int FUNC_17 (struct rtentry*,struct rt_addrinfo*) ;
 scalar_t__ VAR_20 ;
 int FUNC_18 (struct rtentry*,struct sockaddr*,TYPE_1__*) ;
 int FUNC_19 (struct rt_addrinfo*,struct rtentry*) ;
 struct rib_head* FUNC_20 (scalar_t__,int) ;
 struct rtentry* FUNC_21 (struct rib_head*,struct rt_addrinfo*,int*) ;
 int FUNC_22 (struct rib_head*,struct rt_addrinfo*,struct rtentry**,scalar_t__) ;
 struct radix_node* FUNC_23 (struct sockaddr*,int *,int *,int ) ;
 struct radix_node* FUNC_24 (struct sockaddr*,int *,int *,int ) ;
 int FUNC_25 (int,struct rtentry*,struct rt_addrinfo*) ;
 struct rtentry* FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,struct rtentry*) ;

int
FUNC_28(int VAR_21, struct rt_addrinfo *VAR_22, struct rtentry **VAR_23,
    u_int VAR_24)
{
 int VAR_25 = 0;
 struct rtentry *VAR_26, *VAR_27;
 struct radix_node *VAR_28;
 struct rib_head *VAR_29;
 struct ifaddr *VAR_30;
 struct sockaddr *VAR_31;
 struct sockaddr_storage VAR_32;

 FUNC_0((VAR_24 < VAR_20), ("rtrequest1_fib: bad fibnum"));
 FUNC_0((VAR_17 & VAR_12) == 0, ("rtrequest1_fib: locked"));
 switch (VAR_16->sa_family) {
 case 132:
 case 133:

  break;
 default:
  VAR_24 = VAR_14;
  break;
 }




 VAR_29 = FUNC_20(VAR_24, VAR_16->sa_family);
 if (VAR_29 == ((void*)0))
  return (VAR_2);





 if (VAR_17 & VAR_10)
  VAR_19 = ((void*)0);

 switch (VAR_21) {
 case 129:
  if (VAR_19) {
   if (VAR_16->sa_len > sizeof(VAR_32))
    return (VAR_4);
   FUNC_14(VAR_16, (struct sockaddr *)&VAR_32, VAR_19);
   VAR_16 = (struct sockaddr *)&VAR_32;
  }

  FUNC_1(VAR_29);
  VAR_26 = FUNC_21(VAR_29, VAR_22, &VAR_25);
  FUNC_2(VAR_29);
  if (VAR_25 != 0)
   return (VAR_25);

  FUNC_17(VAR_26, VAR_22);






  if (VAR_23) {
   *VAR_23 = VAR_26;
   FUNC_7(VAR_26);
  } else
   FUNC_4(VAR_26);
  break;
 case 128:




  break;
 case 131:
  if ((VAR_17 & VAR_9) && !VAR_18)
   return (VAR_4);
  if (VAR_16 && VAR_18 && (VAR_16->sa_family != VAR_18->sa_family) &&
      (VAR_18->sa_family != VAR_1) && (VAR_18->sa_family != VAR_0))
   return (VAR_4);

  if (VAR_22->rti_ifa == ((void*)0)) {
   VAR_25 = FUNC_12(VAR_22, VAR_24);
   if (VAR_25)
    return (VAR_25);
  }
  VAR_26 = FUNC_26(VAR_15, VAR_7);
  if (VAR_26 == ((void*)0)) {
   return (VAR_5);
  }
  VAR_26->rt_flags = VAR_13 | VAR_17;
  VAR_26->rt_fibnum = VAR_24;



  if ((VAR_25 = FUNC_18(VAR_26, VAR_16, VAR_18)) != 0) {
   FUNC_27(VAR_15, VAR_26);
   return (VAR_25);
  }




  VAR_31 = (struct sockaddr *)FUNC_13(VAR_26);




  if (VAR_19) {
   FUNC_14(VAR_16, VAR_31, VAR_19);
  } else
   FUNC_9(VAR_16, VAR_31, VAR_16->sa_len);






  VAR_30 = VAR_22->rti_ifa;
  FUNC_11(VAR_30);
  VAR_26->rt_ifa = VAR_30;
  VAR_26->rt_ifp = VAR_30->ifa_ifp;
  VAR_26->rt_weight = 1;

  FUNC_19(VAR_22, VAR_26);

  FUNC_1(VAR_29);
  FUNC_6(VAR_26);
  VAR_28 = VAR_29->rnh_addaddr(VAR_31, VAR_19, &VAR_29->head, VAR_26->rt_nodes);

  VAR_27 = ((void*)0);
  if (VAR_28 == ((void*)0) && (VAR_22->rti_flags & VAR_11) != 0) {





   struct sockaddr *VAR_33 = VAR_22->rti_info[VAR_8];
   VAR_22->rti_info[VAR_8] = VAR_31;

   VAR_22->rti_flags &= ~VAR_11;
   VAR_27 = FUNC_21(VAR_29, VAR_22, &VAR_25);
   VAR_22->rti_flags |= VAR_11;
   VAR_22->rti_info[VAR_8] = VAR_33;
   if (VAR_27 != ((void*)0))
    VAR_28 = VAR_29->rnh_addaddr(VAR_31, VAR_19, &VAR_29->head,
        VAR_26->rt_nodes);
  }
  FUNC_2(VAR_29);

  if (VAR_27 != ((void*)0))
   FUNC_7(VAR_27);





  if (VAR_28 == ((void*)0)) {
   FUNC_10(VAR_26->rt_ifa);
   FUNC_8(FUNC_13(VAR_26));
   FUNC_27(VAR_15, VAR_26);
   return (VAR_3);
  }

  if (VAR_27 != ((void*)0)) {
   FUNC_17(VAR_27, VAR_22);
   FUNC_3(VAR_27);
  }





  if (VAR_30->ifa_rtrequest)
   VAR_30->ifa_rtrequest(VAR_21, VAR_26, VAR_22);





  if (VAR_23) {
   *VAR_23 = VAR_26;
   FUNC_5(VAR_26);
  }
  VAR_29->rnh_gen++;
  FUNC_7(VAR_26);
  break;
 case 130:
  FUNC_1(VAR_29);
  VAR_25 = FUNC_22(VAR_29, VAR_22, VAR_23, VAR_24);
  FUNC_2(VAR_29);
  break;
 default:
  VAR_25 = VAR_6;
 }

 return (VAR_25);
}
