
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walkarg {int w_tmemsize; scalar_t__ w_tmem; int w_op; TYPE_1__* w_req; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sa_family; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rt_msghdr {int rtm_type; int rtm_msglen; int rtm_version; } ;
struct rt_addrinfo {int rti_addrs; struct sockaddr_in6** rti_info; } ;
struct ifma_msghdr {int dummy; } ;
struct ifa_msghdrl32 {int dummy; } ;
struct ifa_msghdrl {int dummy; } ;
struct ifa_msghdr {int dummy; } ;
struct if_msghdrl32 {int dummy; } ;
struct if_msghdrl {int dummy; } ;
struct if_msghdr32 {int dummy; } ;
struct if_msghdr {int dummy; } ;
typedef struct sockaddr_in6* caddr_t ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_1 (struct sockaddr_in6*) ;
 int FUNC_2 (struct sockaddr_in6*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct sockaddr_in6*,struct sockaddr_in6*,unsigned int) ;
 int FUNC_4 (struct sockaddr_in6*,int) ;
 scalar_t__ FUNC_5 (struct sockaddr_in6*) ;

__attribute__((used)) static int
FUNC_6(int VAR_7, struct rt_addrinfo *VAR_8, struct walkarg *VAR_9, int *VAR_10)
{
 int VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14;
 caddr_t VAR_15 = ((void*)0);
 struct rt_msghdr *VAR_16 = ((void*)0);
 switch (VAR_7) {

 case 131:
 case 129:
  if (VAR_9 != ((void*)0) && VAR_9->w_op == VAR_2) {






    VAR_12 = sizeof(struct ifa_msghdrl);
  } else
   VAR_12 = sizeof(struct ifa_msghdr);
  break;

 case 130:
  if (VAR_9 != ((void*)0) && VAR_9->w_op == VAR_2)
   VAR_12 = sizeof(struct if_msghdrl);
  else
   VAR_12 = sizeof(struct if_msghdr);
  break;

 case 128:
  VAR_12 = sizeof(struct ifma_msghdr);
  break;

 default:
  VAR_12 = sizeof(struct rt_msghdr);
 }

 if (VAR_9 != ((void*)0)) {
  VAR_16 = (struct rt_msghdr *)VAR_9->w_tmem;
  VAR_13 = VAR_9->w_tmemsize - VAR_12;
  VAR_15 = (caddr_t)VAR_9->w_tmem + VAR_12;
 }

 VAR_8->rti_addrs = 0;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  struct sockaddr *VAR_17;

  if ((VAR_17 = VAR_8->rti_info[VAR_11]) == ((void*)0))
   continue;
  VAR_8->rti_addrs |= (1 << VAR_11);





   VAR_14 = FUNC_1(VAR_17);
  if (VAR_15 != ((void*)0) && VAR_13 >= VAR_14) {
   FUNC_3((caddr_t)VAR_17, VAR_15, (unsigned)VAR_14);
   VAR_15 += VAR_14;
   VAR_13 -= VAR_14;
  } else if (VAR_15 != ((void*)0)) {




   VAR_15 = ((void*)0);
  }

  VAR_12 += VAR_14;
 }

 if (VAR_15 != ((void*)0)) {
  VAR_14 = FUNC_0(VAR_12) - VAR_12;
  if (VAR_13 < VAR_14)
   VAR_15 = ((void*)0);
  else {
   FUNC_4(VAR_15, VAR_14);
   VAR_15 += VAR_14;
   VAR_13 -= VAR_14;
  }
 }
 VAR_12 = FUNC_0(VAR_12);

 if (VAR_15 != ((void*)0)) {

  VAR_16->rtm_version = VAR_4;
  VAR_16->rtm_type = VAR_7;
  VAR_16->rtm_msglen = VAR_12;
 }

 *VAR_10 = VAR_12;

 if (VAR_9 != ((void*)0) && VAR_15 == ((void*)0))
  return (VAR_1);

 return (0);
}
