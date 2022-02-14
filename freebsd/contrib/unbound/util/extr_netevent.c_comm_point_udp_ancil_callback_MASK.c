
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; void* msg_namelen; scalar_t__ msg_flags; struct iovec* msg_iov; int * msg_name; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
struct in_pktinfo {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_pktinfo {int dummy; } ;
struct TYPE_4__ {int v4addr; int v4info; int v6info; } ;
struct comm_reply {int srctype; struct comm_point* c; void* addrlen; int addr; TYPE_2__ pktinfo; } ;
struct comm_point {scalar_t__ type; int fd; scalar_t__ buffer; int cb_arg; scalar_t__ (* callback ) (struct comm_point*,int ,int ,struct comm_reply*) ;TYPE_1__* ev; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
typedef int ssize_t ;
typedef void* socklen_t ;
typedef int ancil ;
struct TYPE_3__ {int base; } ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 short VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct comm_point*,scalar_t__,struct sockaddr*,void*,struct comm_reply*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__ (*) (struct comm_point*,int ,int ,struct comm_reply*)) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (char*,struct comm_reply*) ;
 int FUNC_11 (int,struct msghdr*,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (struct comm_point*,int ,int ,struct comm_reply*) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_13 ;

void
FUNC_20(int VAR_14, short VAR_15, void* VAR_16)
{
 (void)VAR_14;
 (void)VAR_15;
 (void)VAR_16;
 FUNC_4("recvmsg: No support for IPV6_PKTINFO; IP_PKTINFO or IP_RECVDSTADDR. "
  "Please disable interface-automatic");

}
