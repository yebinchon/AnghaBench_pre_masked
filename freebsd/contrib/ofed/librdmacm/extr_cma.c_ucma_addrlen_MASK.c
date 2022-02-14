
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr_ib {int dummy; } ;
struct sockaddr {int sa_family; } ;





 int VAR_0 ;

int FUNC_0(struct sockaddr *VAR_1)
{
 if (!VAR_1)
  return 0;

 switch (VAR_1->sa_family) {
 case 129:
  return sizeof(struct sockaddr_in);
 case 128:
  return sizeof(struct sockaddr_in6);
 case 130:
  return VAR_0 ? sizeof(struct sockaddr_ib) : 0;
 default:
  return 0;
 }
}
