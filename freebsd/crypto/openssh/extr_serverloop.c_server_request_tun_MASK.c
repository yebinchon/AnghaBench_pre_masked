
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_8__ {int force_tun_device; } ;
struct TYPE_7__ {int permit_tun; } ;
struct TYPE_6__ {int datagram; int self; } ;
typedef TYPE_1__ Channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 TYPE_5__* VAR_4 ;
 TYPE_1__* FUNC_0 (struct ssh*,char*,int ,int,int,int,int ,int ,int ,char*,int) ;
 int FUNC_1 (struct ssh*,int ,int ,int ,int *,int *) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_6 (int,int,char**) ;
 int FUNC_7 (char**,char*,char*,char*,char*) ;

__attribute__((used)) static Channel *
FUNC_8(struct ssh *VAR_9)
{
 Channel *VAR_10 = ((void*)0);
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15 = ((void*)0);

 VAR_11 = FUNC_4();
 switch (VAR_11) {
 case 128:
 case 129:
  break;
 default:
  FUNC_5("Unsupported tunnel device mode.");
  return ((void*)0);
 }
 if ((VAR_5.permit_tun & VAR_11) == 0) {
  FUNC_5("Server has rejected tunnel device "
      "forwarding");
  return ((void*)0);
 }

 VAR_12 = FUNC_4();
 if (VAR_4->force_tun_device != -1) {
  if (VAR_12 != VAR_3 && VAR_4->force_tun_device != VAR_12)
   goto done;
  VAR_12 = VAR_4->force_tun_device;
 }
 VAR_13 = FUNC_6(VAR_12, VAR_11, &VAR_15);
 if (VAR_13 < 0)
  goto done;
 FUNC_2("Tunnel forwarding using interface %s", VAR_15);

 VAR_10 = FUNC_0(VAR_9, "tun", VAR_2, VAR_13, VAR_13, -1,
     VAR_1, VAR_0, 0, "tun", 1);
 VAR_10->datagram = 1;
 VAR_14 = VAR_8;
 FUNC_7(&VAR_8, "%s%s%s",
     VAR_8 == ((void*)0) ? "" : VAR_8,
     VAR_8 == ((void*)0) ? "" : ",",
     VAR_15);
 FUNC_3(VAR_14);
 FUNC_3(VAR_15);

 done:
 if (VAR_10 == ((void*)0))
  FUNC_5("Failed to open the tunnel device.");
 return VAR_10;
}
