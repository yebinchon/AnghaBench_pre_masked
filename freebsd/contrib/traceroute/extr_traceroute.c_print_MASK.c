
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in {int sin_addr; } ;
struct ip {int ip_hl; int ip_dst; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ VAR_5 ;

void
FUNC_5(register u_char *VAR_6, register int VAR_7, register struct sockaddr_in *VAR_8)
{
 register struct ip *VAR_9;
 register int VAR_10;
 char VAR_11[VAR_1];

 VAR_9 = (struct ip *) VAR_6;
 VAR_10 = VAR_9->ip_hl << 2;
 VAR_7 -= VAR_10;

 FUNC_4(VAR_11, FUNC_2(VAR_8->sin_addr), sizeof(VAR_11));

 if (VAR_2)
  FUNC_0(" [AS%u]", FUNC_1(VAR_3, VAR_11, VAR_0));

 if (VAR_4)
  FUNC_0(" %s", VAR_11);
 else
  FUNC_0(" %s (%s)", FUNC_3(VAR_8->sin_addr), VAR_11);

 if (VAR_5)
  FUNC_0(" %d bytes to %s", VAR_7, FUNC_2 (VAR_9->ip_dst));
}
