
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_5__ {scalar_t__ tun_open; } ;
struct TYPE_4__ {int datagram; int self; int local_window_max; int local_maxpacket; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_1 (struct ssh*,int,int ,int ,int *,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int,int,char**) ;

char *
FUNC_9(struct ssh *VAR_9, int VAR_10,
    int VAR_11, int VAR_12)
{
 Channel *VAR_13;
 int VAR_14;
 char *VAR_15 = ((void*)0);

 if (VAR_10 == VAR_4)
  return 0;

 FUNC_2("Requesting tun unit %d in mode %d", VAR_11, VAR_10);


 if ((VAR_14 = FUNC_8(VAR_11, VAR_10, &VAR_15)) == -1) {
  FUNC_3("Tunnel device open failed.");
  return ((void*)0);
 }
 FUNC_2("Tunnel forwarding using interface %s", VAR_15);

 VAR_13 = FUNC_0(VAR_9, "tun", VAR_3, VAR_14, VAR_14, -1,
     VAR_1, VAR_0, 0, "tun", 1);
 VAR_13->datagram = 1;







 FUNC_7(VAR_2);
 FUNC_4("tun@openssh.com");
 FUNC_5(VAR_13->self);
 FUNC_5(VAR_13->local_window_max);
 FUNC_5(VAR_13->local_maxpacket);
 FUNC_5(VAR_10);
 FUNC_5(VAR_12);
 FUNC_6();

 return VAR_15;
}
