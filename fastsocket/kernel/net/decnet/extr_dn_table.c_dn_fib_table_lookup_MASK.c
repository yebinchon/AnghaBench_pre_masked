
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {scalar_t__ fld_scope; int fld_dst; } ;
struct dn_zone {int dz_order; struct dn_zone* dz_next; } ;
struct dn_hash {struct dn_zone* dh_zone_list; } ;
struct dn_fib_table {scalar_t__ data; } ;
struct dn_fib_res {scalar_t__ scope; int prefixlen; int type; } ;
struct dn_fib_node {int fn_state; scalar_t__ fn_scope; int fn_type; int fn_key; struct dn_fib_node* fn_next; } ;
typedef int dn_fib_key_t ;


 int FUNC_0 (struct dn_fib_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct flowi const*,struct dn_fib_res*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct dn_fib_node* FUNC_4 (int ,struct dn_zone*) ;
 int FUNC_5 (int ,struct dn_zone*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dn_fib_table *VAR_3, const struct flowi *VAR_4, struct dn_fib_res *VAR_5)
{
 int VAR_6;
 struct dn_zone *VAR_7;
 struct dn_hash *VAR_8 = (struct dn_hash *)VAR_3->data;

 FUNC_6(&VAR_2);
 for(VAR_7 = VAR_8->dh_zone_list; VAR_7; VAR_7 = VAR_7->dz_next) {
  struct dn_fib_node *VAR_9;
  dn_fib_key_t VAR_10 = FUNC_5(VAR_4->fld_dst, VAR_7);

  for(VAR_9 = FUNC_4(VAR_10, VAR_7); VAR_9; VAR_9 = VAR_9->fn_next) {
   if (!FUNC_2(VAR_10, VAR_9->fn_key)) {
    if (FUNC_3(VAR_10, VAR_9->fn_key))
     break;
    else
     continue;
   }

   VAR_9->fn_state |= VAR_0;

   if (VAR_9->fn_state&VAR_1)
    continue;

   if (VAR_9->fn_scope < VAR_4->fld_scope)
    continue;

   VAR_6 = FUNC_1(VAR_9->fn_type, FUNC_0(VAR_9), VAR_4, VAR_5);

   if (VAR_6 == 0) {
    VAR_5->type = VAR_9->fn_type;
    VAR_5->scope = VAR_9->fn_scope;
    VAR_5->prefixlen = VAR_7->dz_order;
    goto out;
   }
   if (VAR_6 < 0)
    goto out;
  }
 }
 VAR_6 = 1;
out:
 FUNC_7(&VAR_2);
 return VAR_6;
}
