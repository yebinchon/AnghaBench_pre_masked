
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2ps_advertisement {int svc_name; struct p2ps_advertisement* next; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct p2p_data *VAR_1)
{
 struct p2ps_advertisement *VAR_2;

 for (VAR_2 = VAR_1->p2ps_adv_list; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_1(VAR_2->svc_name, VAR_0,
          FUNC_0(VAR_0)) == 0)
   return 1;
 }

 return 0;
}
