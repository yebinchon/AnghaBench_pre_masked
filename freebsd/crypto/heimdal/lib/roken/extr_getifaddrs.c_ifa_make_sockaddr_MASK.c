
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr_ll {size_t sll_halen; int sll_addr; } ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; int sa_len; int sa_data; } ;
typedef int sa_family_t ;





 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,void*,size_t) ;

__attribute__((used)) static void
FUNC_4(sa_family_t VAR_0,
    struct sockaddr *VAR_1,
    void *VAR_2, size_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5)
{
  if (VAR_1 == ((void*)0)) return;
  switch(VAR_0){
  case 130:
    FUNC_3(((struct sockaddr_in*)VAR_1)->sin_addr, (char *)VAR_2, VAR_3);
    break;
  case 129:
    FUNC_3(((struct sockaddr_in6*)VAR_1)->sin6_addr, (char *)VAR_2, VAR_3);
    if (FUNC_0(VAR_2) ||
 FUNC_1(VAR_2)){
      ((struct sockaddr_in6*)VAR_1)->sin6_scope_id = VAR_5;
    }
    break;
  case 128:
    FUNC_3(((struct sockaddr_ll*)VAR_1)->sll_addr, (char *)VAR_2, VAR_3);
    ((struct sockaddr_ll*)VAR_1)->sll_halen = VAR_3;
    break;
  default:
    FUNC_3(VAR_1->sa_data, VAR_2, VAR_3);
    break;
  }
  VAR_1->sa_family = VAR_0;



}
