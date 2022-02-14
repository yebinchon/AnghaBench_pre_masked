
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {scalar_t__ num_notification; scalar_t__ num_id_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;

__attribute__((used)) static void * FUNC_1(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_aka_data *VAR_3 = VAR_2;
 VAR_3->num_id_req = 0;
 VAR_3->num_notification = 0;
 FUNC_0(VAR_3, VAR_0);
 return VAR_2;
}
