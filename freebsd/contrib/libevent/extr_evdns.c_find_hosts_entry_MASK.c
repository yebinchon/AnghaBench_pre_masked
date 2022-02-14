
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hosts_entry {int hostname; } ;
struct evdns_base {int hostsdb; } ;


 struct hosts_entry* FUNC_0 (int *) ;
 struct hosts_entry* FUNC_1 (struct hosts_entry*,int ) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_0 ;

__attribute__((used)) static struct hosts_entry *
FUNC_3(struct evdns_base *VAR_1, const char *VAR_2,
    struct hosts_entry *VAR_3)
{
 struct hosts_entry *VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_3, VAR_0);
 else
  VAR_4 = FUNC_0(&VAR_1->hostsdb);

 for (; VAR_4; VAR_4 = FUNC_1(VAR_4, VAR_0)) {
  if (!FUNC_2(VAR_4->hostname, VAR_2))
   return VAR_4;
 }
 return ((void*)0);
}
