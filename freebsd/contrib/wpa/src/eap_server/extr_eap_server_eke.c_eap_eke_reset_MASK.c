
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_eke_data {int msgs; int peerid; int sess; } ;


 int FUNC_0 (struct eap_eke_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_eke_data *VAR_2 = VAR_1;
 FUNC_1(&VAR_2->sess);
 FUNC_2(VAR_2->peerid);
 FUNC_3(VAR_2->msgs);
 FUNC_0(VAR_2, sizeof(*VAR_2));
}
