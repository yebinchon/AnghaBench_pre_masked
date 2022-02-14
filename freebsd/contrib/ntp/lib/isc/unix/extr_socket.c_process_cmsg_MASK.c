
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_3__ {int nanoseconds; int seconds; } ;
struct TYPE_4__ {struct cmsghdr* ipi6_ifindex; } ;
struct msghdr {int msg_flags; unsigned int msg_controllen; int attributes; TYPE_1__ timestamp; TYPE_2__ pktinfo; int * msg_control; } ;
struct in6_pktinfo {int ipi6_addr; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef struct msghdr isc_socketevent_t ;
typedef struct msghdr isc__socket_t ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ FUNC_3 (int *) ;
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct msghdr*) ;
 int VAR_15 ;
 int FUNC_5 (TYPE_2__*,struct in6_pktinfo*,int) ;
 int FUNC_6 (struct msghdr*,int *,int ,int ,int ,int ,char*,struct cmsghdr*) ;

__attribute__((used)) static void
FUNC_7(isc__socket_t *VAR_16, struct msghdr *VAR_17, isc_socketevent_t *VAR_18) {
 FUNC_4(VAR_16);
 FUNC_4(VAR_17);
 FUNC_4(VAR_18);
}
