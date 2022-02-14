
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;
struct __rpc_sockinfo {int si_alen; scalar_t__ si_af; int si_proto; int si_socktype; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int*) ;

int
FUNC_2(int VAR_7, struct __rpc_sockinfo *VAR_8)
{
 socklen_t VAR_9;
 int VAR_10, VAR_11;
 struct sockaddr_storage VAR_12;

 VAR_9 = sizeof VAR_12;
 if (FUNC_0(VAR_7, (struct sockaddr *)(void *)&VAR_12, &VAR_9) < 0)
  return 0;
 VAR_8->si_alen = VAR_9;

 VAR_9 = sizeof VAR_10;
 if (FUNC_1(VAR_7, VAR_5, VAR_6, &VAR_10, &VAR_9) < 0)
  return 0;


 if (VAR_12.ss_family != VAR_0) {
  if (VAR_10 == VAR_4)
   VAR_11 = VAR_1;
  else if (VAR_10 == VAR_3)
   VAR_11 = VAR_2;
  else
   return 0;
 } else
  VAR_11 = 0;

 VAR_8->si_af = VAR_12.ss_family;
 VAR_8->si_proto = VAR_11;
 VAR_8->si_socktype = VAR_10;

 return 1;
}
