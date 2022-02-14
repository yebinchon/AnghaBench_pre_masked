
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct __msfilterreq {struct sockaddr_storage* msfr_srcs; int msfr_group; scalar_t__ msfr_nsrcs; scalar_t__ msfr_fmode; scalar_t__ msfr_ifindex; } ;
struct TYPE_10__ {int ss_family; int ss_len; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_9__ {TYPE_5__ ss; TYPE_3__ sin6; TYPE_2__ sin; } ;
typedef TYPE_4__ sockunion_t ;
typedef int socklen_t ;
typedef int msfr ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,int,int,struct __msfilterreq*,int) ;
 int VAR_8 ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;
 int FUNC_4 (struct __msfilterreq*,int ,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(int VAR_9, uint32_t VAR_10, struct sockaddr *VAR_11,
    socklen_t VAR_12, uint32_t VAR_13, uint32_t VAR_14,
    struct sockaddr_storage *VAR_15)
{
 struct __msfilterreq VAR_16;
 sockunion_t *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_13 != VAR_7 && VAR_13 != VAR_6) {
  VAR_8 = VAR_1;
  return (-1);
 }

 VAR_17 = (sockunion_t *)VAR_11;
 switch (VAR_17->ss.ss_family) {
 default:
  VAR_8 = VAR_0;
  return (-1);
 }

 FUNC_4(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.msfr_ifindex = VAR_10;
 VAR_16.msfr_fmode = VAR_13;
 VAR_16.msfr_nsrcs = VAR_14;
 FUNC_3(&VAR_16.msfr_group, &VAR_17->ss, VAR_17->ss.ss_len);
 VAR_16.msfr_srcs = VAR_15;

 return (FUNC_2(VAR_9, VAR_18, VAR_19, &VAR_16, sizeof(VAR_16)));
}
