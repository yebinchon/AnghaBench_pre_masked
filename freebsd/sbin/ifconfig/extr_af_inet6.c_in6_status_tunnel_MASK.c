
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct in6_ifreq {int ifr_name; int ifr_addr; } ;
typedef int src ;
typedef int in6_ifr ;
typedef int dst ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sockaddr const*,int ,char*,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct in6_ifreq*,int ,int) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_5(int VAR_6)
{
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 struct in6_ifreq VAR_9;
 const struct sockaddr *VAR_10 = (const struct sockaddr *) &VAR_9.ifr_addr;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_4(VAR_9.ifr_name, VAR_5, sizeof(VAR_9.ifr_name));

 if (FUNC_1(VAR_6, VAR_4, (caddr_t)&VAR_9) < 0)
  return;
 if (VAR_10->sa_family != VAR_0)
  return;
 if (FUNC_0(VAR_10, VAR_10->sa_len, VAR_7, sizeof(VAR_7), 0, 0,
     VAR_2) != 0)
  VAR_7[0] = '\0';

 if (FUNC_1(VAR_6, VAR_3, (caddr_t)&VAR_9) < 0)
  return;
 if (VAR_10->sa_family != VAR_0)
  return;
 if (FUNC_0(VAR_10, VAR_10->sa_len, VAR_8, sizeof(VAR_8), 0, 0,
     VAR_2) != 0)
  VAR_8[0] = '\0';

 FUNC_3("\ttunnel inet6 %s --> %s\n", VAR_7, VAR_8);
}
