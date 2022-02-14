
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vport_parms {scalar_t__ type; } ;
struct vport {int hash_node; TYPE_1__* ops; int dp; } ;
struct hlist_head {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; struct vport* (* create ) (struct vport_parms const*) ;} ;
struct TYPE_4__ {int (* get_name ) (struct vport*) ;} ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 struct vport* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct vport*) ;
 int FUNC_3 (struct vport*) ;
 struct hlist_head* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct hlist_head*) ;
 int FUNC_6 (int ) ;
 struct vport* FUNC_7 (struct vport_parms const*) ;
 int FUNC_8 (struct vport*) ;
 TYPE_2__** VAR_1 ;

struct vport *FUNC_9(const struct vport_parms *VAR_2)
{
 struct vport *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_1[VAR_5]->type == VAR_2->type) {
   struct hlist_head *VAR_6;

   VAR_3 = VAR_1[VAR_5]->create(VAR_2);
   if (FUNC_2(VAR_3)) {
    VAR_4 = FUNC_3(VAR_3);
    goto out;
   }

   VAR_6 = FUNC_4(FUNC_6(VAR_3->dp),
          VAR_3->ops->get_name(VAR_3));
   FUNC_5(&VAR_3->hash_node, VAR_6);
   return VAR_3;
  }
 }

 VAR_4 = -VAR_0;

out:
 return FUNC_1(VAR_4);
}
