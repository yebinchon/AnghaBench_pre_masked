
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2ps_advertisement {struct p2ps_advertisement* next; int svc_name; int hash; } ;
struct p2p_data {struct p2ps_advertisement* p2ps_adv_list; int wild_card_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct p2p_data*,char*,struct p2ps_advertisement*) ;

__attribute__((used)) static int FUNC_4(struct p2p_data *VAR_2, const u8 *VAR_3)
{
 struct p2ps_advertisement *VAR_4;
 int VAR_5;

 FUNC_3(VAR_2, "ASP find - ASP list: %p", VAR_2->p2ps_adv_list);


 VAR_5 = FUNC_0(VAR_3, VAR_2->wild_card_hash, VAR_0) == 0;

 VAR_4 = VAR_2->p2ps_adv_list;
 while (VAR_4) {
  if (FUNC_0(VAR_3, VAR_4->hash, VAR_0) == 0)
   return 1;
  if (VAR_5 &&
      FUNC_2(VAR_4->svc_name, VAR_1,
          FUNC_1(VAR_1)) == 0)
   return 1;
  VAR_4 = VAR_4->next;
 }

 return 0;
}
