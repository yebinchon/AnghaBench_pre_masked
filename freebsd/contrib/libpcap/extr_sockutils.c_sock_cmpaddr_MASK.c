
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;

int FUNC_1(struct sockaddr_storage *VAR_1, struct sockaddr_storage *VAR_2)
{
 if (VAR_1->ss_family == VAR_2->ss_family)
 {
  if (VAR_1->ss_family == VAR_0)
  {
   if (FUNC_0(&(((struct sockaddr_in *) VAR_1)->sin_addr),
    &(((struct sockaddr_in *) VAR_2)->sin_addr),
    sizeof(struct in_addr)) == 0)
    return 0;
  }
  else
  {
   if (FUNC_0(&(((struct sockaddr_in6 *) VAR_1)->sin6_addr),
    &(((struct sockaddr_in6 *) VAR_2)->sin6_addr),
    sizeof(struct in6_addr)) == 0)
    return 0;
  }
 }

 return -1;
}
