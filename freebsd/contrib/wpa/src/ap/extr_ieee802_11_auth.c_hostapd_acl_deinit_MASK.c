
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {struct hostapd_acl_query_data* acl_queries; int * acl_cache; } ;
struct hostapd_acl_query_data {struct hostapd_acl_query_data* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hostapd_acl_query_data*) ;

void FUNC_2(struct hostapd_data *VAR_0)
{
 struct hostapd_acl_query_data *VAR_1, *VAR_2;


 FUNC_0(VAR_0->acl_cache);
 VAR_0->acl_cache = ((void*)0);


 VAR_1 = VAR_0->acl_queries;
 VAR_0->acl_queries = ((void*)0);
 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_1(VAR_2);
 }
}
