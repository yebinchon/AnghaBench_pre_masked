
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {struct ifaddr* rt_ifa; } ;
struct rt_addrinfo {int dummy; } ;
struct ifaddr {int (* ifa_rtrequest ) (int ,struct rtentry*,struct rt_addrinfo*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct rtentry*,struct rt_addrinfo*) ;

__attribute__((used)) static void
FUNC_1(struct rtentry *VAR_2, struct rt_addrinfo *VAR_3)
{
 struct ifaddr *VAR_4;




 VAR_4 = VAR_2->rt_ifa;
 if (VAR_4 != ((void*)0) && VAR_4->ifa_rtrequest != ((void*)0))
  VAR_4->ifa_rtrequest(VAR_0, VAR_2, VAR_3);






 VAR_1++;
}
