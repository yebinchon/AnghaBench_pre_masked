
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct sockaddr *VAR_1)
{
 if (VAR_1->sa_family == VAR_0)
 {
  struct sockaddr_in *VAR_2 = (struct sockaddr_in *) VAR_1;
  if (FUNC_1(FUNC_2(VAR_2->sin_addr.s_addr))) return 0;
  else return -1;
 }
 else
 {
  struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *) VAR_1;
  if (FUNC_0(&VAR_3->sin6_addr)) return 0;
  else return -1;
 }
}
