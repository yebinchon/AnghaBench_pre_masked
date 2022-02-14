
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
struct __msfilterreq {scalar_t__ msfr_fmode; int msfr_nsrcs; struct sockaddr_storage* msfr_srcs; int msfr_group; scalar_t__ msfr_ifindex; } ;
struct TYPE_10__ {int ss_family; int ss_len; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; } ;
struct TYPE_9__ {TYPE_5__ ss; TYPE_3__ sin6; TYPE_2__ sin; } ;
typedef TYPE_4__ sockunion_t ;
typedef int socklen_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int,int,struct __msfilterreq*,int*) ;
 int VAR_6 ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;
 int FUNC_4 (struct __msfilterreq*,int ,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(int VAR_7, uint32_t VAR_8, struct sockaddr *VAR_9,
    socklen_t VAR_10, uint32_t *VAR_11, uint32_t *VAR_12,
    struct sockaddr_storage *VAR_13)
{
 struct __msfilterreq VAR_14;
 sockunion_t *VAR_15;
 socklen_t VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if (VAR_8 == 0 || VAR_9 == ((void*)0) || VAR_12 == ((void*)0) ||
     VAR_11 == ((void*)0)) {
  VAR_6 = VAR_1;
  return (-1);
 }

 VAR_19 = *VAR_12;
 *VAR_12 = 0;
 *VAR_11 = 0;

 VAR_15 = (sockunion_t *)VAR_9;
 switch (VAR_15->ss.ss_family) {
 default:
  VAR_6 = VAR_0;
  return (-1);
  break;
 }

 VAR_16 = sizeof(struct __msfilterreq);
 FUNC_4(&VAR_14, 0, VAR_16);
 VAR_14.msfr_ifindex = VAR_8;
 VAR_14.msfr_fmode = 0;
 VAR_14.msfr_nsrcs = VAR_19;
 FUNC_3(&VAR_14.msfr_group, &VAR_15->ss, VAR_15->ss.ss_len);






 VAR_14.msfr_srcs = VAR_13;
 VAR_17 = FUNC_2(VAR_7, VAR_18, VAR_20, &VAR_14, &VAR_16);
 if (VAR_17 == 0) {
  *VAR_12 = VAR_14.msfr_nsrcs;
  *VAR_11 = VAR_14.msfr_fmode;
 }

 return (VAR_17);
}
