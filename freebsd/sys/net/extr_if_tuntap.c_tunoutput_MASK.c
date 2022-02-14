
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_int32_t ;
struct tuntap_softc {int tun_flags; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; struct sockaddr const* sa_data; } ;
struct route {int dummy; } ;
struct mbuf {scalar_t__* m_data; } ;
struct ifnet {int if_flags; int (* if_transmit ) (struct ifnet*,struct mbuf*) ;int if_bpf; struct tuntap_softc* if_softc; } ;
typedef int af ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mbuf*,int,int ) ;
 int FUNC_1 (struct ifnet*,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct tuntap_softc*) ;
 int VAR_12 ;
 int FUNC_3 (struct tuntap_softc*) ;
 int FUNC_4 (struct sockaddr const*,scalar_t__*,int) ;
 int FUNC_5 (int ,scalar_t__*,int,struct mbuf*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (struct ifnet*,struct mbuf*) ;
 int FUNC_11 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_13, struct mbuf *VAR_14, const struct sockaddr *VAR_15,
    struct route *VAR_16)
{
 struct tuntap_softc *VAR_17 = VAR_13->if_softc;
 u_short VAR_18;
 int VAR_19;
 u_int32_t VAR_20;

 FUNC_1 (VAR_13, "tunoutput\n");
 FUNC_2(VAR_17);
 VAR_18 = VAR_17->tun_flags;
 FUNC_3(VAR_17);
 if ((VAR_18 & VAR_12) != VAR_12) {
  FUNC_1 (VAR_13, "not ready 0%o\n", VAR_17->tun_flags);
  FUNC_9 (VAR_14);
  return (VAR_3);
 }

 if ((VAR_13->if_flags & VAR_8) != VAR_8) {
  FUNC_9 (VAR_14);
  return (VAR_3);
 }


 if (VAR_15->sa_family == VAR_1)
  FUNC_4(VAR_15->sa_data, &VAR_20, sizeof(VAR_20));
 else
  VAR_20 = VAR_15->sa_family;

 if (FUNC_6(VAR_13->if_bpf))
  FUNC_5(VAR_13->if_bpf, &VAR_20, sizeof(VAR_20), VAR_14);


 if (VAR_18 & VAR_11) {

  FUNC_0(VAR_14, VAR_15->sa_len, VAR_9);


  if (VAR_14 == ((void*)0)) {
   FUNC_8(VAR_13, VAR_5, 1);
   FUNC_8(VAR_13, VAR_6, 1);
   return (VAR_4);
  } else {
   FUNC_4(VAR_15, VAR_14->m_data, VAR_15->sa_len);
  }
 }

 if (VAR_18 & VAR_10) {

  FUNC_0(VAR_14, 4, VAR_9);


  if (VAR_14 == ((void*)0)) {
   FUNC_8(VAR_13, VAR_5, 1);
   FUNC_8(VAR_13, VAR_6, 1);
   return (VAR_4);
  } else
   *(u_int32_t *)VAR_14->m_data = FUNC_7(VAR_20);
 } else {



  {
   FUNC_9(VAR_14);
   return (VAR_2);
  }
 }

 VAR_19 = (VAR_13->if_transmit)(VAR_13, VAR_14);
 if (VAR_19)
  return (VAR_4);
 FUNC_8(VAR_13, VAR_7, 1);
 return (0);
}
