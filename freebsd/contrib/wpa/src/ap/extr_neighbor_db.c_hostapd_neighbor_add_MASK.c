
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_neighbor_entry {int list; } ;
struct hostapd_data {int nr_db; } ;


 int FUNC_0 (int *,int *) ;
 struct hostapd_neighbor_entry* FUNC_1 (int) ;

__attribute__((used)) static struct hostapd_neighbor_entry *
FUNC_2(struct hostapd_data *VAR_0)
{
 struct hostapd_neighbor_entry *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct hostapd_neighbor_entry));
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_0->nr_db, &VAR_1->list);

 return VAR_1;
}
