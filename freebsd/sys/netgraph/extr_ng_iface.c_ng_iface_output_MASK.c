
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct route {int dummy; } ;
struct mbuf {scalar_t__ m_data; } ;
struct ifnet {int if_flags; int if_drv_flags; int (* if_transmit ) (struct ifnet*,struct mbuf*) ;int if_snd; } ;
typedef scalar_t__ sa_family_t ;
typedef int af ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mbuf*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct ifnet*,struct mbuf*,int ,int ) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (struct ifnet*,struct mbuf*,scalar_t__) ;
 int FUNC_7 (struct ifnet*,struct mbuf*,scalar_t__) ;
 int FUNC_8 (struct ifnet*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_9, struct mbuf *VAR_10,
 const struct sockaddr *VAR_11, struct route *VAR_12)
{
 uint32_t VAR_13;
 int VAR_14;


 if (!((VAR_9->if_flags & VAR_5) &&
     (VAR_9->if_drv_flags & VAR_4))) {
  FUNC_5(VAR_10);
  return (VAR_1);
 }


 VAR_14 = FUNC_4(VAR_9, VAR_10, VAR_7,
     VAR_8);
 if (VAR_14) {
  FUNC_5(VAR_10);
  return (VAR_14);
 }


 if (VAR_11->sa_family == VAR_0)
  FUNC_2(VAR_11->sa_data, &VAR_13, sizeof(VAR_13));
 else
  VAR_13 = VAR_11->sa_family;


 FUNC_6(VAR_9, VAR_10, VAR_13);

 if (FUNC_0(&VAR_9->if_snd)) {
  FUNC_1(VAR_10, sizeof(sa_family_t), VAR_6);
  if (VAR_10 == ((void*)0)) {
   FUNC_3(VAR_9, VAR_3, 1);
   return (VAR_2);
  }
  *(sa_family_t *)VAR_10->m_data = VAR_13;
  VAR_14 = (VAR_9->if_transmit)(VAR_9, VAR_10);
 } else
  VAR_14 = FUNC_7(VAR_9, VAR_10, VAR_13);

 return (VAR_14);
}
