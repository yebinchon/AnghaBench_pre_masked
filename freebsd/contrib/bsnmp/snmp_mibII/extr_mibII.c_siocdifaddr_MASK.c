
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; int sin_family; } ;
struct ifreq {int ifr_addr; int ifr_name; } ;
typedef int delreq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, struct in_addr VAR_4)
{
 struct ifreq VAR_5;
 struct sockaddr_in *VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 VAR_6 = (struct sockaddr_in *)(void *)&VAR_5.ifr_addr;
 VAR_6->sin_family = VAR_0;
 VAR_6->sin_len = sizeof(*VAR_6);
 VAR_6->sin_addr = VAR_4;

 return (FUNC_0(VAR_2, VAR_1, &VAR_5));
}
