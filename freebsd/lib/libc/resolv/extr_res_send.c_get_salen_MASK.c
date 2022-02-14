
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct sockaddr *VAR_2)
{







 if (VAR_2->sa_family == VAR_0)
  return (sizeof(struct sockaddr_in));
 else if (VAR_2->sa_family == VAR_1)
  return (sizeof(struct sockaddr_in6));
 else
  return (0);
}
