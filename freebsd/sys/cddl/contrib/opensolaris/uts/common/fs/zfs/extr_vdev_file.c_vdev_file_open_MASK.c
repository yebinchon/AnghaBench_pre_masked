
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ v_type; } ;
typedef TYPE_2__ vnode_t ;
struct TYPE_15__ {void* vs_aux; } ;
struct TYPE_17__ {char* vdev_path; int vdev_reopening; void* vdev_notrim; TYPE_4__* vdev_tsd; TYPE_1__ vdev_stat; int vdev_spa; void* vdev_nonrot; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_18__ {TYPE_2__* vf_vnode; } ;
typedef TYPE_4__ vdev_file_t ;
struct TYPE_19__ {int va_size; int va_mask; } ;
typedef TYPE_5__ vattr_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (TYPE_2__*,int,int,int ,int ,int *) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_6 (int,int ) ;
 int VAR_14 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*,int ,int,int ,TYPE_2__**,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_10(vdev_t *VAR_15, uint64_t *VAR_16, uint64_t *VAR_17,
    uint64_t *VAR_18, uint64_t *VAR_19)
{
 vdev_file_t *VAR_20;
 vnode_t *VAR_21;
 vattr_t VAR_22;
 int VAR_23;


 VAR_15->vdev_nonrot = VAR_1;




 if (VAR_15->vdev_path == ((void*)0) || VAR_15->vdev_path[0] != '/') {
  VAR_15->vdev_stat.vs_aux = VAR_10;
  return (FUNC_1(VAR_2));
 }





 if (VAR_15->vdev_tsd != ((void*)0)) {
  FUNC_0(VAR_15->vdev_reopening);
  VAR_20 = VAR_15->vdev_tsd;
  VAR_21 = VAR_20->vf_vnode;
  goto skip_open;
 }

 VAR_20 = VAR_15->vdev_tsd = FUNC_6(sizeof (vdev_file_t), VAR_5);







 FUNC_0(VAR_15->vdev_path != ((void*)0) && VAR_15->vdev_path[0] == '/');
 VAR_23 = FUNC_9(VAR_15->vdev_path + 1, VAR_9,
     FUNC_7(VAR_15->vdev_spa) | VAR_4, 0, &VAR_21, 0, 0, VAR_14, -1);

 if (VAR_23) {
  VAR_15->vdev_stat.vs_aux = VAR_11;
  FUNC_5(VAR_15->vdev_tsd, sizeof (vdev_file_t));
  VAR_15->vdev_tsd = ((void*)0);
  return (VAR_23);
 }

 VAR_20->vf_vnode = VAR_21;
skip_open:



 VAR_22.va_mask = VAR_0;
 FUNC_8(VAR_21, VAR_7 | VAR_6);
 VAR_23 = FUNC_3(VAR_21, &VAR_22, VAR_13);
 FUNC_4(VAR_21, 0);
 if (VAR_23) {
  (void) FUNC_2(VAR_21, FUNC_7(VAR_15->vdev_spa), 1, 0, VAR_13, ((void*)0));
  VAR_15->vdev_stat.vs_aux = VAR_11;
  FUNC_5(VAR_15->vdev_tsd, sizeof (vdev_file_t));
  VAR_15->vdev_tsd = ((void*)0);
  return (VAR_23);
 }

 VAR_15->vdev_notrim = VAR_1;

 *VAR_17 = *VAR_16 = VAR_22.va_size;
 *VAR_18 = VAR_8;
 *VAR_19 = VAR_8;

 return (0);
}
