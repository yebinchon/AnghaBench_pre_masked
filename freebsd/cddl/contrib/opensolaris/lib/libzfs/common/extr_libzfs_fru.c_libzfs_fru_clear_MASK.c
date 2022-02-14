
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* libzfs_fru_hash; int * libzfs_topo_hdl; TYPE_2__* libzfs_fru_list; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_7__ {struct TYPE_7__* zf_fru; struct TYPE_7__* zf_device; struct TYPE_7__* zf_next; } ;
typedef TYPE_2__ libzfs_fru_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(libzfs_handle_t *VAR_1, boolean_t VAR_2)
{
 libzfs_fru_t *VAR_3;

 while ((VAR_3 = VAR_1->libzfs_fru_list) != ((void*)0)) {
  VAR_1->libzfs_fru_list = VAR_3->zf_next;
  FUNC_3(VAR_3->zf_device);
  FUNC_3(VAR_3->zf_fru);
  FUNC_3(VAR_3);
 }

 VAR_1->libzfs_fru_list = ((void*)0);

 if (VAR_1->libzfs_topo_hdl != ((void*)0)) {
  FUNC_1(VAR_1->libzfs_topo_hdl);
  FUNC_0(VAR_1->libzfs_topo_hdl);
  VAR_1->libzfs_topo_hdl = ((void*)0);
 }

 if (VAR_2) {
  FUNC_3(VAR_1->libzfs_fru_hash);
 } else if (VAR_1->libzfs_fru_hash != ((void*)0)) {
  FUNC_2(VAR_1->libzfs_fru_hash,
      VAR_0 * sizeof (void *));
 }
}
