
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_8__ {int cb_alloc; int cb_used; TYPE_1__** cb_handles; } ;
typedef TYPE_2__ get_all_cb_t ;


 TYPE_1__** FUNC_0 (int ,TYPE_1__**,int,size_t) ;

void
FUNC_1(get_all_cb_t *VAR_0, zfs_handle_t *VAR_1)
{
 if (VAR_0->cb_alloc == VAR_0->cb_used) {
  size_t VAR_2;
  zfs_handle_t **VAR_3;

  VAR_2 = VAR_0->cb_alloc != 0 ? VAR_0->cb_alloc * 2 : 64;
  VAR_3 = FUNC_0(VAR_1->zfs_hdl,
      VAR_0->cb_handles, VAR_0->cb_alloc * sizeof (zfs_handle_t *),
      VAR_2 * sizeof (zfs_handle_t *));
  VAR_0->cb_handles = VAR_3;
  VAR_0->cb_alloc = VAR_2;
 }
 VAR_0->cb_handles[VAR_0->cb_used++] = VAR_1;
}
