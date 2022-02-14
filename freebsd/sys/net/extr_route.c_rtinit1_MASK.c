
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {int sdl_len; int sdl_index; int sdl_type; int sdl_family; } ;
struct sockaddr {scalar_t__ sa_len; int sa_family; } ;
struct rtentry {struct ifaddr* rt_ifa; TYPE_1__* rt_ifp; } ;
struct rt_addrinfo {int rti_flags; struct sockaddr** rti_info; struct ifaddr* rti_ifa; } ;
struct rib_head {int head; struct radix_node* (* rnh_lookup ) (struct sockaddr*,struct sockaddr*,int *) ;} ;
struct radix_node {int rn_flags; } ;
struct ifaddr {int ifa_flags; TYPE_1__* ifa_ifp; struct sockaddr* ifa_addr; struct sockaddr* ifa_netmask; struct sockaddr* ifa_dstaddr; } ;
typedef int info ;
typedef struct sockaddr_dl* caddr_t ;
struct TYPE_2__ {int if_fib; int if_index; int if_type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rib_head*) ;
 int VAR_6 ;
 int FUNC_2 (struct rib_head*) ;
 int VAR_7 ;
 struct rtentry* FUNC_3 (struct radix_node*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_4 (struct rtentry*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct rtentry*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (struct rtentry*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct sockaddr_dl*,int) ;
 int FUNC_10 (struct ifaddr*) ;
 int FUNC_11 (struct ifaddr*) ;
 scalar_t__ FUNC_12 (struct sockaddr*,struct sockaddr*,scalar_t__) ;
 int FUNC_13 (struct sockaddr*,struct sockaddr*,struct sockaddr*) ;
 scalar_t__ FUNC_14 (struct rib_head*) ;
 struct rtentry* FUNC_15 (struct rtentry*,struct sockaddr*) ;
 int FUNC_16 (int,struct ifaddr*,int,struct rtentry*,int) ;
 int VAR_19 ;
 struct rib_head* FUNC_17 (int,int) ;
 int FUNC_18 (int,struct rt_addrinfo*,struct rtentry**,int) ;
 struct radix_node* FUNC_19 (struct sockaddr*,struct sockaddr*,int *) ;

__attribute__((used)) static inline int
FUNC_20(struct ifaddr *VAR_20, int VAR_21, int VAR_22, int VAR_23)
{
 VAR_6;
 struct sockaddr *VAR_24;
 struct sockaddr *VAR_25;
 struct rtentry *VAR_26 = ((void*)0);
 struct rt_addrinfo VAR_27;
 int VAR_28 = 0;
 int VAR_29, VAR_30;
 char VAR_31[VAR_18];
 int VAR_32 = 0;
 int VAR_33 = 0;
 struct sockaddr_dl *VAR_34 = ((void*)0);
 struct rib_head *VAR_35;

 if (VAR_22 & VAR_11) {
  VAR_24 = VAR_20->ifa_dstaddr;
  VAR_25 = ((void*)0);
 } else {
  VAR_24 = VAR_20->ifa_addr;
  VAR_25 = VAR_20->ifa_netmask;
 }
 if (VAR_24->sa_len == 0)
  return(VAR_2);
 switch (VAR_24->sa_family) {
 case 128:
 case 129:

  break;
 default:
  VAR_23 = VAR_16;
  break;
 }
 if (VAR_23 == VAR_15) {
  if (VAR_17 == 0 && VAR_21 == (int)VAR_13)
   VAR_29 = VAR_30 = VAR_20->ifa_ifp->if_fib;
  else {
   VAR_29 = 0;
   VAR_30 = VAR_19 - 1;
  }
 } else {
  FUNC_0((VAR_23 < VAR_19), ("rtinit1: bad fibnum"));
  VAR_29 = VAR_23;
  VAR_30 = VAR_23;
 }







 if (VAR_21 == VAR_14) {






  if (VAR_25 != ((void*)0)) {
   FUNC_13(VAR_24, (struct sockaddr *)VAR_31, VAR_25);
   VAR_24 = (struct sockaddr *)VAR_31;
  }
 } else if (VAR_21 == VAR_13) {
  VAR_34 = (struct sockaddr_dl *)VAR_31;
  FUNC_9(VAR_34, sizeof(struct sockaddr_dl));
  VAR_34->sdl_family = VAR_0;
  VAR_34->sdl_len = sizeof(struct sockaddr_dl);
  VAR_34->sdl_type = VAR_20->ifa_ifp->if_type;
  VAR_34->sdl_index = VAR_20->ifa_ifp->if_index;
        }






 for ( VAR_23 = VAR_29; VAR_23 <= VAR_30; VAR_23++) {
  if (VAR_21 == VAR_14) {
   struct radix_node *VAR_36;




   VAR_35 = FUNC_17(VAR_23, VAR_24->sa_family);
   if (VAR_35 == ((void*)0))

    continue;
   FUNC_1(VAR_35);
   VAR_36 = VAR_35->rnh_lookup(VAR_24, VAR_25, &VAR_35->head);
   VAR_28 = (VAR_36 == ((void*)0) ||
       (VAR_36->rn_flags & VAR_7) ||
       FUNC_3(VAR_36)->rt_ifa != VAR_20);
   FUNC_2(VAR_35);
   if (VAR_28) {

    continue;
   }
  }



  FUNC_9((caddr_t)&VAR_27, sizeof(VAR_27));
  FUNC_11(VAR_20);
  VAR_27.rti_ifa = VAR_20;
  VAR_27.rti_flags = VAR_22 |
      (VAR_20->ifa_flags & ~VAR_5) | VAR_12;
  VAR_27.rti_info[VAR_8] = VAR_24;



  if (VAR_21 == VAR_13)
   VAR_27.rti_info[VAR_9] = (struct sockaddr *)VAR_34;
  else
   VAR_27.rti_info[VAR_9] = VAR_20->ifa_addr;
  VAR_27.rti_info[VAR_10] = VAR_25;
  VAR_28 = FUNC_18(VAR_21, &VAR_27, &VAR_26, VAR_23);

  if (VAR_28 == 0 && VAR_26 != ((void*)0)) {



   FUNC_6(VAR_26);
   FUNC_5(VAR_26);
   FUNC_8(VAR_26);
   FUNC_16(VAR_21, VAR_20, VAR_28, VAR_26, VAR_23);
   FUNC_6(VAR_26);
   FUNC_7(VAR_26);
   if (VAR_21 == VAR_14) {





    FUNC_4(VAR_26);
   } else {
    if (VAR_21 == VAR_13) {




     FUNC_7(VAR_26);
    }
    FUNC_8(VAR_26);
   }
   VAR_32 = 1;
  }
  if (VAR_28)
   VAR_33 = VAR_28;
 }
 if (VAR_21 == VAR_14) {
  if (VAR_32) {
   VAR_28 = 0;
  } else {

   VAR_28 = ((VAR_22 & VAR_11) ?
       VAR_1 : VAR_3);
  }
 } else {
  if (VAR_33) {

   VAR_28 = VAR_33;
  }
 }
 return (VAR_28);
}
