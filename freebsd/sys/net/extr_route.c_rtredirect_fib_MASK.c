
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr {int sa_family; } ;
struct rtentry {int rt_flags; struct ifaddr* rt_ifa; int rt_gateway; } ;
struct rt_addrinfo {int rti_flags; struct sockaddr** rti_info; struct ifaddr* rti_ifa; } ;
struct rib_head {int dummy; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_6__ {short rts_dynamic; short rts_newgateway; int rts_badredirect; } ;
struct TYPE_5__ {int sa_len; } ;
struct TYPE_4__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct rib_head*) ;
 int FUNC_2 (struct rib_head*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (struct rtentry*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 TYPE_3__ VAR_16 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct sockaddr*) ;
 struct ifaddr* FUNC_8 (struct sockaddr*,int ,int ) ;
 int FUNC_9 (struct ifaddr*) ;
 int FUNC_10 (struct rtentry*) ;
 TYPE_2__* FUNC_11 (struct rtentry*) ;
 int FUNC_12 (int ,struct rt_addrinfo*,int,int,int ) ;
 int FUNC_13 (struct rtentry*,int ,struct sockaddr*) ;
 struct rib_head* FUNC_14 (int ,int ) ;
 struct rtentry* FUNC_15 (struct sockaddr*,int ,unsigned long,int ) ;
 int FUNC_16 (int ,struct rt_addrinfo*,struct rtentry**,int ) ;
 int FUNC_17 (struct sockaddr*,int ) ;

void
FUNC_18(struct sockaddr *VAR_17,
 struct sockaddr *VAR_18,
 struct sockaddr *VAR_19,
 int VAR_20,
 struct sockaddr *VAR_21,
 u_int VAR_22)
{
 struct rtentry *VAR_23;
 int VAR_24 = 0;
 short *VAR_25 = ((void*)0);
 struct rt_addrinfo VAR_26;
 struct ifaddr *VAR_27;
 struct rib_head *VAR_28;

 FUNC_0();

 VAR_27 = ((void*)0);
 VAR_28 = FUNC_14(VAR_22, VAR_17->sa_family);
 if (VAR_28 == ((void*)0)) {
  VAR_24 = VAR_1;
  goto out;
 }

 if ((VAR_27 = FUNC_8(VAR_18, 0, VAR_22)) == ((void*)0)) {
  VAR_24 = VAR_4;
  goto out;
 }
 VAR_23 = FUNC_15(VAR_17, 0, 0UL, VAR_22);






 if (!(VAR_20 & VAR_9) && VAR_23) {
  if (!FUNC_17(VAR_21, VAR_23->rt_gateway)) {
   VAR_24 = VAR_3;
   goto done;
  }
  if (VAR_23->rt_ifa != VAR_27 && VAR_27->ifa_addr->sa_family != VAR_0) {
   VAR_24 = VAR_3;
   goto done;
  }
 }
 if ((VAR_20 & VAR_11) && FUNC_7(VAR_18)) {
  VAR_24 = VAR_2;
  goto done;
 }






 if (VAR_23 == ((void*)0) || (FUNC_11(VAR_23) && FUNC_11(VAR_23)->sa_len < 2))
  goto create;




 if (VAR_23->rt_flags & VAR_11) {
  if (((VAR_23->rt_flags & VAR_12) == 0) && (VAR_20 & VAR_12)) {




  create:
   if (VAR_23 != ((void*)0))
    FUNC_3(VAR_23);

   VAR_20 |= VAR_10;
   FUNC_6((caddr_t)&VAR_26, sizeof(VAR_26));
   VAR_26.rti_info[VAR_6] = VAR_17;
   VAR_26.rti_info[VAR_7] = VAR_18;
   VAR_26.rti_info[VAR_8] = VAR_19;
   FUNC_9(VAR_27);
   VAR_26.rti_ifa = VAR_27;
   VAR_26.rti_flags = VAR_20;
   VAR_24 = FUNC_16(VAR_14, &VAR_26, &VAR_23, VAR_22);
   if (VAR_23 != ((void*)0)) {
    FUNC_4(VAR_23);
    VAR_20 = VAR_23->rt_flags;
   }

   VAR_25 = &VAR_16.rts_dynamic;
  } else {





   if ((VAR_20 & VAR_11) == 0)
    VAR_23->rt_flags &= ~VAR_11;
   VAR_23->rt_flags |= VAR_13;
   VAR_20 |= VAR_13;
   VAR_25 = &VAR_16.rts_newgateway;



   FUNC_5(VAR_23);
   FUNC_1(VAR_28);
   FUNC_4(VAR_23);
   FUNC_13(VAR_23, FUNC_10(VAR_23), VAR_18);
   FUNC_2(VAR_28);
  }
 } else
  VAR_24 = VAR_2;
done:
 if (VAR_23)
  FUNC_3(VAR_23);
 out:
 if (VAR_24)
  VAR_16.rts_badredirect++;
 else if (VAR_25 != ((void*)0))
  (*VAR_25)++;
 FUNC_6((caddr_t)&VAR_26, sizeof(VAR_26));
 VAR_26.rti_info[VAR_6] = VAR_17;
 VAR_26.rti_info[VAR_7] = VAR_18;
 VAR_26.rti_info[VAR_8] = VAR_19;
 VAR_26.rti_info[VAR_5] = VAR_21;
 FUNC_12(VAR_15, &VAR_26, VAR_20, VAR_24, VAR_22);
}
