
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ll {int sll_addr; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_data; } ;
typedef int sa_family_t ;






__attribute__((used)) static size_t
FUNC_0(sa_family_t VAR_0, int VAR_1)
{
  size_t VAR_2;
  switch(VAR_0){
  case 130:
    VAR_2 = sizeof(struct sockaddr_in);
    break;
  case 129:
    VAR_2 = sizeof(struct sockaddr_in6);
    break;
  case 128:
    VAR_2 = (size_t)(((struct sockaddr_ll *)((void*)0))->sll_addr) + VAR_1;
    if (VAR_2 < sizeof(struct sockaddr_ll))
      VAR_2 = sizeof(struct sockaddr_ll);
    break;
  default:
    VAR_2 = (size_t)(((struct sockaddr *)((void*)0))->sa_data) + VAR_1;
    if (VAR_2 < sizeof(struct sockaddr))
      VAR_2 = sizeof(struct sockaddr);
    break;
  }
  return VAR_2;
}
