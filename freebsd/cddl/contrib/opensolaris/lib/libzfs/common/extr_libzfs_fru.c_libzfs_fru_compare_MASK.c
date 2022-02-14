
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int libzfs_topo_hdl; int * libzfs_fru_hash; } ;
typedef TYPE_1__ libzfs_handle_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,char const*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

boolean_t
FUNC_3(libzfs_handle_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_0->libzfs_fru_hash == ((void*)0))
  FUNC_1(VAR_0);

 if (VAR_0->libzfs_fru_hash == ((void*)0))
  return (FUNC_2(VAR_1, VAR_2) == 0);

 return (FUNC_0(VAR_0->libzfs_topo_hdl, VAR_1, VAR_2));
}
