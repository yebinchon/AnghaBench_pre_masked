
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hosts_entry {int dummy; } ;
struct evdns_base {int hostsdb; } ;


 int FUNC_0 (struct evdns_base*) ;
 int FUNC_1 (struct evdns_base*) ;
 struct hosts_entry* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct hosts_entry*,int ) ;
 int FUNC_4 (struct hosts_entry*) ;
 int VAR_0 ;

void
FUNC_5(struct evdns_base *VAR_1)
{
 struct hosts_entry *VAR_2;
 FUNC_0(VAR_1);
 while ((VAR_2 = FUNC_2(&VAR_1->hostsdb))) {
  FUNC_3(&VAR_1->hostsdb, VAR_2, VAR_0);
  FUNC_4(VAR_2);
 }
 FUNC_1(VAR_1);
}
