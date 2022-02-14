
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_object_t ;
struct TYPE_4__ {TYPE_2__* tn_aobj; } ;
struct tmpfs_node {scalar_t__ tn_refcount; int tn_attached; int tn_vpstate; int tn_type; TYPE_1__ tn_reg; int tn_link; int * tn_vnode; } ;
struct tmpfs_mount {scalar_t__ tm_nodes_inuse; int tm_node_pool; int tm_pages_used; } ;
struct TYPE_5__ {int flags; int size; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tmpfs_node*,int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct tmpfs_mount*) ;
 int FUNC_4 (struct tmpfs_mount*) ;
 int FUNC_5 (struct tmpfs_node*) ;
 int FUNC_6 (struct tmpfs_node*) ;
 int FUNC_7 (struct tmpfs_mount*) ;
 int VAR_2 ;







 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,struct tmpfs_node*,int) ;
 int FUNC_11 (struct tmpfs_mount*) ;
 int VAR_3 ;
 int FUNC_12 (int ,struct tmpfs_node*) ;
 int FUNC_13 (TYPE_2__*) ;

bool
FUNC_14(struct tmpfs_mount *VAR_4, struct tmpfs_node *VAR_5,
    bool VAR_6)
{
 vm_object_t VAR_7;

 FUNC_4(VAR_4);
 FUNC_5(VAR_5);
 FUNC_0(VAR_5->tn_refcount > 0, ("node %p refcount zero", VAR_5));

 VAR_5->tn_refcount--;
 if (VAR_5->tn_attached && (VAR_6 || VAR_5->tn_refcount == 0)) {
  FUNC_2(VAR_4->tm_nodes_inuse > 0);
  VAR_4->tm_nodes_inuse--;
  FUNC_1(VAR_5, VAR_3);
  VAR_5->tn_attached = 0;
 }
 if (VAR_5->tn_refcount > 0)
  return (0);





 FUNC_6(VAR_5);
 FUNC_7(VAR_4);

 switch (VAR_5->tn_type) {
 case 134:

 case 133:

 case 132:

 case 131:

 case 128:
  break;

 case 130:
  FUNC_9(VAR_5->tn_link, VAR_0);
  break;

 case 129:
  VAR_7 = VAR_5->tn_reg.tn_aobj;
  if (VAR_7 != ((void*)0)) {
   if (VAR_7->size != 0)
    FUNC_8(&VAR_4->tm_pages_used, VAR_7->size);
   FUNC_0((VAR_7->flags & VAR_1) == 0,
       ("leaked OBJ_TMPFS node %p vm_obj %p", VAR_5, VAR_7));
   FUNC_13(VAR_7);
  }
  break;

 default:
  FUNC_10("tmpfs_free_node: type %p %d", VAR_5, (int)VAR_5->tn_type);
 }

 FUNC_12(VAR_4->tm_node_pool, VAR_5);
 FUNC_3(VAR_4);
 FUNC_11(VAR_4);
 return (1);
}
