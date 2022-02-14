
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pkt {int dummy; } ;
struct TYPE_5__ {int sa; } ;
typedef TYPE_1__ sockaddr_u ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct pkt*,int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,void*,int,int ,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;

int
FUNC_7 (
 SOCKET VAR_6,
 sockaddr_u *VAR_7,
 struct pkt *VAR_8,
 int VAR_9
 )
{
 int VAR_10;







 FUNC_1(1, ("sntp sendpkt: Sending packet to %s ...\n",
    FUNC_6(VAR_7)));

 VAR_10 = FUNC_5(VAR_6, (void *)VAR_8, VAR_9, 0, &VAR_7->sa,
      FUNC_0(VAR_7));
 if (VAR_10 == VAR_2) {
  FUNC_2(VAR_1, "Send to %s failed, %m",
   FUNC_6(VAR_7));
  return VAR_0;
 }
 FUNC_1(1, ("Packet sent.\n"));

 return VAR_3;
}
