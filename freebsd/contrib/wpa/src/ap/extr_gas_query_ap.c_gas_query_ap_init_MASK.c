
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {int dummy; } ;
struct gas_query_ap {int pending; void* msg_ctx; struct hostapd_data* hapd; } ;


 int FUNC_0 (int *) ;
 struct gas_query_ap* FUNC_1 (int) ;

struct gas_query_ap * FUNC_2(struct hostapd_data *VAR_0,
     void *VAR_1)
{
 struct gas_query_ap *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 VAR_2->hapd = VAR_0;
 VAR_2->msg_ctx = VAR_1;
 FUNC_0(&VAR_2->pending);

 return VAR_2;
}
