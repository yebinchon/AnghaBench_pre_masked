
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_raw {int sr_ifname; int sr_port; int sr_family; } ;
typedef int sr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct sockaddr_raw*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_raw*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(char *VAR_5, int VAR_6)
{
 int VAR_7;
 struct sockaddr_raw VAR_8;

 if ((VAR_7 = FUNC_4(VAR_2, VAR_4, VAR_3)) < 0)
     {
  FUNC_3("socket(PF_RAW, SOCK_RAW, RAWPROTO_DRAIN)");
  return -1;
     }

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.sr_family = VAR_0;
 VAR_8.sr_port = VAR_1;
 FUNC_5(VAR_8.sr_ifname, VAR_5, sizeof(VAR_8.sr_ifname));
 if (FUNC_0(VAR_7, &VAR_8, sizeof(VAR_8)) < 0)
     {
  FUNC_3("bind AF_RAW");
  FUNC_1(VAR_7);
  return -1;
     }
 return VAR_7;
}
