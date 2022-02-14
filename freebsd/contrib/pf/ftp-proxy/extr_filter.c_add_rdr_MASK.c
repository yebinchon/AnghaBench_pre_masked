
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_28__ {scalar_t__* proxy_port; } ;
struct TYPE_23__ {int addr8; } ;
struct TYPE_21__ {int v6; int v4; } ;
struct TYPE_24__ {TYPE_4__ mask; TYPE_2__ addr; } ;
struct TYPE_25__ {TYPE_5__ a; } ;
struct TYPE_26__ {TYPE_6__ v; } ;
struct TYPE_27__ {TYPE_7__ addr; } ;
struct TYPE_22__ {int s6_addr; } ;
struct TYPE_20__ {int s_addr; } ;
struct TYPE_16__ {TYPE_9__ rpool; } ;
struct TYPE_19__ {TYPE_10__ rule; TYPE_8__ addr; } ;
struct TYPE_18__ {TYPE_1__ sin_addr; } ;
struct TYPE_17__ {TYPE_3__ sin6_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,TYPE_13__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_13__ VAR_7 ;
 TYPE_13__ VAR_8 ;
 int FUNC_3 (int ,int ,struct sockaddr*,struct sockaddr*,scalar_t__) ;
 TYPE_12__* FUNC_4 (struct sockaddr*) ;
 TYPE_11__* FUNC_5 (struct sockaddr*) ;

int
FUNC_6(u_int32_t VAR_9, struct sockaddr *VAR_10, struct sockaddr *VAR_11,
    u_int16_t VAR_12, struct sockaddr *VAR_13, u_int16_t VAR_14)
{
 if (!VAR_10 || !VAR_11 || !VAR_12 || !VAR_13 || !VAR_14 ||
     (VAR_10->sa_family != VAR_13->sa_family)) {
  VAR_6 = VAR_3;
  return (-1);
 }

 if (FUNC_3(VAR_9, VAR_4, VAR_10, VAR_11, VAR_12) == -1)
  return (-1);

 if (VAR_13->sa_family == VAR_0) {
  FUNC_1(&VAR_7.addr.addr.v.a.addr.v4,
      &FUNC_4(VAR_13)->sin_addr.s_addr, 4);
  FUNC_2(&VAR_7.addr.addr.v.a.mask.addr8, 255, 4);
 } else {
  FUNC_1(&VAR_7.addr.addr.v.a.addr.v6,
      &FUNC_5(VAR_13)->sin6_addr.s6_addr, 16);
  FUNC_2(&VAR_7.addr.addr.v.a.mask.addr8, 255, 16);
 }
 if (FUNC_0(VAR_5, VAR_1, &VAR_7) == -1)
  return (-1);

 VAR_8.rule.rpool.proxy_port[0] = VAR_14;
 if (FUNC_0(VAR_5, VAR_2, &VAR_8) == -1)
  return (-1);

 return (0);
}
