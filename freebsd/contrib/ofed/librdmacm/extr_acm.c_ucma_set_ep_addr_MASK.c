
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_2__ {int addr; } ;
struct acm_ep_addr_data {TYPE_1__ info; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct acm_ep_addr_data *VAR_3, struct sockaddr *VAR_4)
{
 if (VAR_4->sa_family == VAR_2) {
  VAR_3->type = VAR_0;
  FUNC_0(VAR_3->info.addr, &((struct sockaddr_in *) VAR_4)->sin_addr, 4);
 } else {
  VAR_3->type = VAR_1;
  FUNC_0(VAR_3->info.addr, &((struct sockaddr_in6 *) VAR_4)->sin6_addr, 16);
 }
}
