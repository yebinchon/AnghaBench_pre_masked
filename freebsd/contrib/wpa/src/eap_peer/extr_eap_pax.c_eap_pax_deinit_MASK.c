
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_pax_data {int cid; } ;


 int FUNC_0 (struct eap_pax_data*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_pax_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2->cid);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}
