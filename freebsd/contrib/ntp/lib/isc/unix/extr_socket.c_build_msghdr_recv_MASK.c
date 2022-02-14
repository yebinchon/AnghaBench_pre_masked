
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int sa; int sunix; int sin6; int sin; } ;
struct msghdr {int msg_namelen; unsigned int msg_iovlen; scalar_t__ msg_accrightslen; int * msg_accrights; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_flags; struct iovec* msg_iov; int * msg_name; TYPE_1__ type; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct TYPE_10__ {size_t length; size_t base; } ;
struct TYPE_11__ {size_t n; TYPE_2__ region; int bufferlist; struct msghdr address; } ;
typedef TYPE_3__ isc_socketevent_t ;
struct TYPE_12__ {size_t length; scalar_t__ base; } ;
typedef TYPE_4__ isc_region_t ;
typedef int isc_buffer_t ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ pf; scalar_t__ recvcmsgbuflen; int * recvcmsgbuf; int overflow; struct msghdr peer_address; } ;
typedef TYPE_5__ isc__socket_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 unsigned int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct msghdr*,int ,int) ;

__attribute__((used)) static void
FUNC_8(isc__socket_t *VAR_7, isc_socketevent_t *VAR_8,
    struct msghdr *VAR_9, struct iovec *VAR_10, size_t *VAR_11)
{
 unsigned int VAR_12;
 isc_buffer_t *VAR_13;
 isc_region_t VAR_14;
 size_t VAR_15;

 FUNC_7(VAR_9, 0, sizeof(struct msghdr));

 if (VAR_7->type == VAR_4) {
  FUNC_7(&VAR_8->address, 0, sizeof(VAR_8->address));
  VAR_9->msg_name = (void *)&VAR_8->address.type.sa;
  VAR_9->msg_namelen = sizeof(VAR_8->address.type);





 } else {
  VAR_9->msg_name = ((void*)0);
  VAR_9->msg_namelen = 0;
  VAR_8->address = VAR_7->peer_address;
 }

 VAR_13 = FUNC_2(VAR_8->bufferlist);
 VAR_15 = 0;




 if (VAR_13 == ((void*)0)) {
  VAR_15 = VAR_8->region.length - VAR_8->n;
  VAR_10[0].iov_base = (void *)(VAR_8->region.base + VAR_8->n);
  VAR_10[0].iov_len = VAR_15;
  VAR_12 = 1;

  goto config;
 }





 while (VAR_13 != ((void*)0)) {
  FUNC_4(FUNC_1(VAR_13));
  if (FUNC_5(VAR_13) != 0)
   break;
  VAR_13 = FUNC_3(VAR_13, VAR_5);
 }

 VAR_12 = 0;
 while (VAR_13 != ((void*)0)) {
  FUNC_0(VAR_12 < VAR_3);

  FUNC_6(VAR_13, &VAR_14);

  if (VAR_14.length > 0) {
   VAR_10[VAR_12].iov_base = (void *)(VAR_14.base);
   VAR_10[VAR_12].iov_len = VAR_14.length;
   VAR_15 += VAR_14.length;
   VAR_12++;
  }
  VAR_13 = FUNC_3(VAR_13, VAR_5);
 }

 config:
 VAR_9->msg_iov = VAR_10;
 VAR_9->msg_iovlen = VAR_12;
 VAR_9->msg_accrights = ((void*)0);
 VAR_9->msg_accrightslen = 0;


 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_15;
}
