
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int libzfs_topo_hdl; TYPE_2__** libzfs_fru_hash; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_6__ {char const* zf_device; int zf_fru; struct TYPE_6__* zf_next; } ;
typedef TYPE_2__ libzfs_fru_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

const char *
FUNC_2(libzfs_handle_t *VAR_1, const char *VAR_2)
{
 libzfs_fru_t *VAR_3;
 size_t VAR_4;

 if (VAR_1->libzfs_fru_hash == ((void*)0))
  FUNC_1(VAR_1);

 if (VAR_1->libzfs_fru_hash == ((void*)0))
  return (((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (VAR_3 = VAR_1->libzfs_fru_hash[VAR_4]; VAR_3 != ((void*)0);
      VAR_3 = VAR_3->zf_next) {
   if (FUNC_0(VAR_1->libzfs_topo_hdl,
       VAR_2, VAR_3->zf_fru))
    return (VAR_3->zf_device);
  }
 }

 return (((void*)0));
}
