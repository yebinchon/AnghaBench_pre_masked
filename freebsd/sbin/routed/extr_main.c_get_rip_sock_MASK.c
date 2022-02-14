
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ttl ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int rsin ;
typedef int naddr ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_7 (int,int ,int ,unsigned char*,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(naddr VAR_7,
      int VAR_8)
{
 struct sockaddr_in VAR_9;
 unsigned char VAR_10;
 int VAR_11;


 if ((VAR_11 = FUNC_8(VAR_0, VAR_5, 0)) < 0)
  FUNC_0(1,"rip_sock = socket()");

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));



 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_5(VAR_4);
 VAR_9.sin_addr.s_addr = VAR_7;
 if (FUNC_2(VAR_11, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0) {
  if (VAR_8)
   FUNC_0(VAR_6 != VAR_1, "bind(rip_sock)");
  FUNC_3(VAR_11);
  return -1;
 }
 FUNC_4(VAR_11,"rip_sock");

 VAR_10 = 1;
 if (FUNC_7(VAR_11, VAR_2, VAR_3,
         &VAR_10, sizeof(VAR_10)) < 0)
  FUNC_1(1,"rip_sock setsockopt(IP_MULTICAST_TTL)");

 return VAR_11;
}
