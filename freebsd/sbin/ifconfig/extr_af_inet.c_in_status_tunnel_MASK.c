
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct ifreq {int ifr_name; int ifr_addr; } ;
typedef int src ;
typedef int ifr ;
typedef int dst ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sockaddr const*,int ,char*,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_7)
{
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];
 struct ifreq VAR_10;
 const struct sockaddr *VAR_11 = (const struct sockaddr *) &VAR_10.ifr_addr;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 FUNC_4(VAR_10.ifr_name, VAR_6, VAR_1);

 if (FUNC_1(VAR_7, VAR_5, (caddr_t)&VAR_10) < 0)
  return;
 if (VAR_11->sa_family != VAR_0)
  return;
 if (FUNC_0(VAR_11, VAR_11->sa_len, VAR_8, sizeof(VAR_8), 0, 0, VAR_3) != 0)
  VAR_8[0] = '\0';

 if (FUNC_1(VAR_7, VAR_4, (caddr_t)&VAR_10) < 0)
  return;
 if (VAR_11->sa_family != VAR_0)
  return;
 if (FUNC_0(VAR_11, VAR_11->sa_len, VAR_9, sizeof(VAR_9), 0, 0, VAR_3) != 0)
  VAR_9[0] = '\0';

 FUNC_3("\ttunnel inet %s --> %s\n", VAR_8, VAR_9);
}
