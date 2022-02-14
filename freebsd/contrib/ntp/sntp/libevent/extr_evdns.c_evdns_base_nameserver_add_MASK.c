
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long s_addr; } ;
struct sockaddr_in {int sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct evdns_base {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 int FUNC_2 (struct evdns_base*,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;

int
FUNC_5(struct evdns_base *VAR_1, unsigned long int VAR_2)
{
 struct sockaddr_in VAR_3;
 int VAR_4;
 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.sin_addr.s_addr = VAR_2;
 VAR_3.sin_port = FUNC_3(53);
 VAR_3.sin_family = VAR_0;
 FUNC_0(VAR_1);
 VAR_4 = FUNC_2(VAR_1, (struct sockaddr*)&VAR_3, sizeof(VAR_3));
 FUNC_1(VAR_1);
 return VAR_4;
}
