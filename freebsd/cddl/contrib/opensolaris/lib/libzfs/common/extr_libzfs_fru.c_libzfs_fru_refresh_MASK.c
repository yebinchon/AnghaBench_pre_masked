
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int topo_walk_t ;
typedef int topo_hdl_t ;
struct TYPE_5__ {int * libzfs_fru_hash; int * libzfs_topo_hdl; } ;
typedef TYPE_1__ libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int *,int*) ;
 char* FUNC_2 (int *,int *,int*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int ,TYPE_1__*,int*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_6 ;

void
FUNC_8(libzfs_handle_t *VAR_7)
{
 int VAR_8;
 char *VAR_9;
 topo_hdl_t *VAR_10;
 topo_walk_t *VAR_11;

 if (VAR_5 == ((void*)0))
  return;




 FUNC_7(VAR_7, VAR_0);

 if ((VAR_7->libzfs_topo_hdl = FUNC_1(VAR_2,
     ((void*)0), &VAR_8)) == ((void*)0))
  return;

 VAR_10 = VAR_7->libzfs_topo_hdl;

 if ((VAR_9 = FUNC_2(VAR_10, ((void*)0), &VAR_8)) == ((void*)0))
  return;

 FUNC_0(VAR_10, VAR_9);

 if (VAR_7->libzfs_fru_hash == ((void*)0) &&
     (VAR_7->libzfs_fru_hash =
     FUNC_6(VAR_4, sizeof (void *))) == ((void*)0))
  return;





 VAR_11 = FUNC_4(VAR_10, VAR_1,
     VAR_6, VAR_7, &VAR_8);
 if (VAR_11 != ((void*)0)) {
  (void) FUNC_5(VAR_11, VAR_3);
  FUNC_3(VAR_11);
 }
}
