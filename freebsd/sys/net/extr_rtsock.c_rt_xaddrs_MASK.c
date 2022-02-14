
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {scalar_t__ sa_len; scalar_t__ sa_family; } ;
struct rt_addrinfo {int rti_addrs; struct sockaddr** rti_info; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int VAR_3 ;
 int FUNC_1 (struct sockaddr_in6*,int ) ;
 struct sockaddr VAR_4 ;

__attribute__((used)) static int
FUNC_2(caddr_t VAR_5, caddr_t VAR_6, struct rt_addrinfo *VAR_7)
{
 struct sockaddr *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2 && VAR_5 < VAR_6; VAR_9++) {
  if ((VAR_7->rti_addrs & (1 << VAR_9)) == 0)
   continue;
  VAR_8 = (struct sockaddr *)VAR_5;



  if (VAR_5 + VAR_8->sa_len > VAR_6)
   return (VAR_1);







  if (VAR_8->sa_len == 0) {
   VAR_7->rti_info[VAR_9] = &VAR_4;
   return (0);
  }






  VAR_7->rti_info[VAR_9] = VAR_8;
  VAR_5 += FUNC_0(VAR_8);
 }
 return (0);
}
