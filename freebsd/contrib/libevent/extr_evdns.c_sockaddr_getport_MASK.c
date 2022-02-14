
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int ev_uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static ev_uint16_t
FUNC_1(struct sockaddr *VAR_2)
{
 if (VAR_2->sa_family == VAR_0) {
  return FUNC_0(((struct sockaddr_in *)VAR_2)->sin_port);
 } else if (VAR_2->sa_family == VAR_1) {
  return FUNC_0(((struct sockaddr_in6 *)VAR_2)->sin6_port);
 } else {
  return 0;
 }
}
