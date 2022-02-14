
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vdev_state; char* vdev_path; size_t vdev_children; struct TYPE_4__** vdev_child; scalar_t__ vdev_guid; scalar_t__ vdev_islog; TYPE_2__* vdev_ops; scalar_t__ vdev_id; scalar_t__ vdev_ishole; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint_t ;
typedef size_t uint64_t ;
typedef int u_longlong_t ;
typedef int state ;
struct TYPE_5__ {int vdev_op_type; } ;
 int FUNC_0 (char*,int,char*,...) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,int,char*,int,int ,...) ;

void
FUNC_2(vdev_t *VAR_1, int VAR_2)
{
 char VAR_3[20];

 if (VAR_1->vdev_ishole || VAR_1->vdev_ops == &VAR_0) {
  FUNC_1("%*svdev %u: %s", VAR_2, "", VAR_1->vdev_id,
      VAR_1->vdev_ops->vdev_op_type);
  return;
 }

 switch (VAR_1->vdev_state) {
 case 128:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "unknown");
  break;
 case 134:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "closed");
  break;
 case 130:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "offline");
  break;
 case 129:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "removed");
  break;
 case 135:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "can't open");
  break;
 case 132:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "faulted");
  break;
 case 133:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "degraded");
  break;
 case 131:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "healthy");
  break;
 default:
  (void) FUNC_0(VAR_3, sizeof (VAR_3), "<state %u>",
      (uint_t)VAR_1->vdev_state);
 }

 FUNC_1("%*svdev %u: %s%s, guid: %llu, path: %s, %s", VAR_2,
     "", (int)VAR_1->vdev_id, VAR_1->vdev_ops->vdev_op_type,
     VAR_1->vdev_islog ? " (log)" : "",
     (u_longlong_t)VAR_1->vdev_guid,
     VAR_1->vdev_path ? VAR_1->vdev_path : "N/A", VAR_3);

 for (uint64_t VAR_4 = 0; VAR_4 < VAR_1->vdev_children; VAR_4++)
  FUNC_2(VAR_1->vdev_child[VAR_4], VAR_2 + 2);
}
