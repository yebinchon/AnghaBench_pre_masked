
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int use_min_mtu ;
struct msghdr {unsigned int msg_iovlen; scalar_t__ msg_controllen; scalar_t__ msg_accrightslen; int * msg_accrights; int * msg_control; scalar_t__ msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct in6_pktinfo {int dummy; } ;
struct cmsghdr {void* cmsg_len; int cmsg_type; void* cmsg_level; } ;
struct TYPE_13__ {size_t length; scalar_t__ base; } ;
struct TYPE_11__ {int sa; } ;
struct TYPE_12__ {scalar_t__ length; TYPE_1__ type; } ;
struct TYPE_14__ {size_t n; int attributes; int pktinfo; TYPE_3__ region; int bufferlist; TYPE_2__ address; } ;
typedef TYPE_4__ isc_socketevent_t ;
struct TYPE_15__ {size_t length; scalar_t__ base; } ;
typedef TYPE_5__ isc_region_t ;
typedef int isc_buffer_t ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ sendcmsgbuflen; scalar_t__ sendcmsgbuf; int connected; } ;
typedef TYPE_6__ isc__socket_t ;


 struct in6_pktinfo* FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct in6_pktinfo*,int*,int) ;
 int FUNC_11 (struct msghdr*,int ,int) ;
 int FUNC_12 (TYPE_6__*,int *,int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_13(isc__socket_t *VAR_11, isc_socketevent_t *VAR_12,
    struct msghdr *VAR_13, struct iovec *VAR_14, size_t *VAR_15)
{
 unsigned int VAR_16;
 isc_buffer_t *VAR_17;
 isc_region_t VAR_18;
 size_t VAR_19;
 size_t VAR_20;

 FUNC_11(VAR_13, 0, sizeof(*VAR_13));

 if (!VAR_11->connected) {
  VAR_13->msg_name = (void *)&VAR_12->address.type.sa;
  VAR_13->msg_namelen = VAR_12->address.length;
 } else {
  VAR_13->msg_name = ((void*)0);
  VAR_13->msg_namelen = 0;
 }

 VAR_17 = FUNC_3(VAR_12->bufferlist);
 VAR_19 = 0;
 VAR_16 = 0;




 if (VAR_17 == ((void*)0)) {
  VAR_19 = VAR_12->region.length - VAR_12->n;
  VAR_14[0].iov_base = (void *)(VAR_12->region.base + VAR_12->n);
  VAR_14[0].iov_len = VAR_19;
  VAR_16 = 1;

  goto config;
 }





 VAR_20 = VAR_12->n;
 while (VAR_17 != ((void*)0)) {
  FUNC_5(FUNC_2(VAR_17));
  if (VAR_20 < FUNC_8(VAR_17))
   break;
  VAR_20 -= FUNC_8(VAR_17);
  VAR_17 = FUNC_4(VAR_17, VAR_10);
 }

 while (VAR_17 != ((void*)0)) {
  FUNC_1(VAR_16 < VAR_6);

  FUNC_9(VAR_17, &VAR_18);

  if (VAR_18.length > 0) {
   VAR_14[VAR_16].iov_base = (void *)(VAR_18.base
         + VAR_20);
   VAR_14[VAR_16].iov_len = VAR_18.length - VAR_20;
   VAR_19 += (VAR_18.length - VAR_20);
   VAR_20 = 0;
   VAR_16++;
  }
  VAR_17 = FUNC_4(VAR_17, VAR_10);
 }

 FUNC_1(VAR_20 == 0U);

 config:
 VAR_13->msg_iov = VAR_14;
 VAR_13->msg_iovlen = VAR_16;
 VAR_13->msg_accrights = ((void*)0);
 VAR_13->msg_accrightslen = 0;


 if (VAR_15 != ((void*)0))
  *VAR_15 = VAR_19;
}
