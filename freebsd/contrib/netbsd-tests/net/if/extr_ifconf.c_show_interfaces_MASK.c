
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_len; int sa_family; } ;
struct ifreq {char* ifr_name; TYPE_1__ ifr_addr; } ;
struct ifconf {int ifc_len; struct ifreq* ifc_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ifreq*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ,struct ifconf*) ;
 struct ifreq* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct ifconf VAR_8;
 struct ifreq *VAR_9;

 if (VAR_4 == 0)
  VAR_4 = FUNC_4();

 if (VAR_4 <= 0)
  FUNC_2(VAR_1, "nifreqs=%d", VAR_4);

 VAR_9 = FUNC_6(sizeof(struct ifreq) * VAR_4);
 if (VAR_9 == ((void*)0))
  FUNC_1(VAR_1, "malloc(sizeof(ifreq) * %d)", VAR_4);

 VAR_6 = FUNC_8(VAR_0, VAR_3, 0);
 if (VAR_6 == -1)
  FUNC_1(VAR_1, "socket");

 VAR_8.ifc_len = sizeof(struct ifreq) * VAR_4;
 VAR_8.ifc_req = VAR_9;

 VAR_7 = FUNC_5(VAR_6, VAR_2, &VAR_8);
 if (VAR_7 == -1)
  FUNC_1(VAR_1, "ioctl");
 FUNC_0(VAR_6);

 for (VAR_5=0; VAR_5 < (int)(VAR_8.ifc_len / sizeof(struct ifreq)); VAR_5++) {
  FUNC_7("%s: af=%hhu socklen=%hhu\n", VAR_9[VAR_5].ifr_name,
      VAR_9[VAR_5].ifr_addr.sa_family, VAR_9[VAR_5].ifr_addr.sa_len);
 }

 FUNC_3(VAR_9);
}
