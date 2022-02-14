
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ttl ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {void* s_addr; } ;
struct TYPE_4__ {void* s_addr; } ;
struct sockaddr_in {TYPE_3__ imr_multiaddr; TYPE_2__ imr_interface; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct ip_mreq {TYPE_3__ imr_multiaddr; TYPE_2__ imr_interface; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int on ;
typedef int mcast_addr ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_7 (int,int ,int ,...) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9(void)
{
 struct sockaddr_in VAR_12;
 struct ip_mreq VAR_13;
 int VAR_14 = 1;

 unsigned char VAR_15 = 4;
 int VAR_16;

 VAR_16 = FUNC_8(VAR_0, VAR_7, 0);
 if (VAR_16 < 0 ||
     FUNC_2(VAR_16, VAR_1, VAR_6) != 0 ||
     FUNC_7(VAR_16, VAR_8, VAR_9, &VAR_14, sizeof(VAR_14)))
  goto fail;
 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sin_family = VAR_0;
 VAR_12.sin_addr.s_addr = FUNC_3(VAR_2);
 VAR_12.sin_port = FUNC_4(VAR_11);
 if (FUNC_0(VAR_16, (struct sockaddr *) &VAR_12, sizeof(VAR_12)))
  goto fail;
 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.imr_interface.s_addr = FUNC_3(VAR_2);
 VAR_13.imr_multiaddr.s_addr = FUNC_5(VAR_10);
 if (FUNC_7(VAR_16, VAR_3, VAR_4,
         (char *) &VAR_13, sizeof(VAR_13)) ||
     FUNC_7(VAR_16, VAR_3, VAR_5,
         &VAR_15, sizeof(VAR_15)))
  goto fail;

 return VAR_16;

fail:
 if (VAR_16 >= 0)
  FUNC_1(VAR_16);
 return -1;
}
