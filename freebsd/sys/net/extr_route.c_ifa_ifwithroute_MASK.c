
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef struct sockaddr {int sa_family; } const sockaddr ;
struct rtentry {struct ifaddr* rt_ifa; } ;
struct ifaddr {int ifa_ifp; TYPE_2__* ifa_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_8__ {TYPE_1__ sin_addr; } ;
struct TYPE_7__ {int sin6_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 struct ifaddr* FUNC_4 (struct sockaddr const*) ;
 struct ifaddr* FUNC_5 (struct sockaddr const*,int ) ;
 struct ifaddr* FUNC_6 (struct sockaddr const*,int ,int ) ;
 struct ifaddr* FUNC_7 (struct sockaddr const*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (struct rtentry*) ;
 struct rtentry* FUNC_10 (struct sockaddr const*,int ,int,int ) ;
 TYPE_4__* FUNC_11 (int ) ;
 TYPE_3__* FUNC_12 (int ) ;

struct ifaddr *
FUNC_13(int VAR_4, const struct sockaddr *VAR_5, struct sockaddr *VAR_6,
    u_int VAR_7)
{
 struct ifaddr *VAR_8;
 int VAR_9 = 0;

 FUNC_1(FUNC_8(VAR_3));
 if ((VAR_4 & VAR_1) == 0) {







  VAR_8 = ((void*)0);
  if (VAR_4 & VAR_2)
   VAR_8 = FUNC_5(VAR_5, VAR_7);
  if (VAR_8 == ((void*)0))
   VAR_8 = FUNC_4(VAR_6);
 } else {





  VAR_8 = FUNC_5(VAR_6, VAR_7);
 }
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_6(VAR_6, 0, VAR_7);
 if (VAR_8 == ((void*)0)) {
  struct rtentry *VAR_10;

  VAR_10 = FUNC_10(VAR_6, 0, VAR_4, VAR_7);
  if (VAR_10 == ((void*)0))
   goto out;




  switch (VAR_6->sa_family) {
  case 129:
   if (FUNC_11(FUNC_9(VAR_10))->sin_addr.s_addr == VAR_0)
    VAR_9 = 1;
   break;
  case 128:
   if (FUNC_0(&FUNC_12(FUNC_9(VAR_10))->sin6_addr))
    VAR_9 = 1;
   break;
  default:
   break;
  }
  if (!VAR_9 && VAR_10->rt_ifa != ((void*)0)) {
   VAR_8 = VAR_10->rt_ifa;
  }
  FUNC_2(VAR_10);
  FUNC_3(VAR_10);
  if (VAR_9 || VAR_8 == ((void*)0))
   goto out;
 }
 if (VAR_8->ifa_addr->sa_family != VAR_5->sa_family) {
  struct ifaddr *VAR_11 = VAR_8;
  VAR_8 = FUNC_7(VAR_5, VAR_8->ifa_ifp);
  if (VAR_8 == ((void*)0))
   VAR_8 = VAR_11;
 }
 out:
 return (VAR_8);
}
