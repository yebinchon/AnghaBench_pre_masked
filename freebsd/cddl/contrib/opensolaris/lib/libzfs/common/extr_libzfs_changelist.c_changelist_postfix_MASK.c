
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int shareopts ;
struct TYPE_24__ {size_t zhandle_len; TYPE_1__** zhandle_arr; } ;
typedef TYPE_2__ sa_init_selective_arg_t ;
struct TYPE_25__ {TYPE_1__* cn_handle; scalar_t__ cn_shared; scalar_t__ cn_mounted; scalar_t__ cn_needpost; scalar_t__ cn_zoned; } ;
typedef TYPE_3__ prop_changenode_t ;
struct TYPE_26__ {scalar_t__ cl_prop; int cl_gflags; scalar_t__ cl_waslegacy; int cl_list; } ;
typedef TYPE_4__ prop_changelist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 TYPE_3__* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int ,TYPE_3__*) ;
 TYPE_1__** FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ,char*,int,int *,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_19 (TYPE_1__*,int *) ;

int
FUNC_20(prop_changelist_t *VAR_11)
{
 prop_changenode_t *VAR_12;
 char VAR_13[VAR_6];
 int VAR_14 = 0;
 libzfs_handle_t *VAR_15;
 if ((VAR_12 = FUNC_6(VAR_11->cl_list)) == ((void*)0))
  return (0);

 if (VAR_11->cl_prop == VAR_8 &&
     !(VAR_11->cl_gflags & VAR_1)) {
  FUNC_4(VAR_12->cn_handle);
 }







 if (VAR_12->cn_handle != ((void*)0)) {
  VAR_15 = VAR_12->cn_handle->zfs_hdl;
  FUNC_1(VAR_15 != ((void*)0));
  FUNC_17(VAR_15);
 }





 for (VAR_12 = FUNC_6(VAR_11->cl_list); VAR_12 != ((void*)0);
     VAR_12 = FUNC_7(VAR_11->cl_list, VAR_12)) {

  boolean_t VAR_16;
  boolean_t VAR_17;
  boolean_t VAR_18;





  if (FUNC_3() == VAR_2 && VAR_12->cn_zoned)
   continue;


  if (!VAR_12->cn_needpost)
   continue;
  VAR_12->cn_needpost = VAR_0;


  FUNC_14(VAR_12->cn_handle);


  if (FUNC_0(VAR_12->cn_handle))
   continue;





  VAR_16 = ((FUNC_12(VAR_12->cn_handle, VAR_9,
      VAR_13, sizeof (VAR_13), ((void*)0), ((void*)0), 0,
      VAR_0) == 0) && (FUNC_5(VAR_13, "off") != 0));

  VAR_17 = ((FUNC_12(VAR_12->cn_handle, VAR_10,
      VAR_13, sizeof (VAR_13), ((void*)0), ((void*)0), 0,
      VAR_0) == 0) && (FUNC_5(VAR_13, "off") != 0));

  VAR_18 = (VAR_11->cl_gflags & VAR_1) ||
      FUNC_10(VAR_12->cn_handle, ((void*)0));

  if (!VAR_18 && (VAR_12->cn_mounted ||
      ((VAR_16 || VAR_17 || VAR_11->cl_waslegacy) &&
      (FUNC_13(VAR_12->cn_handle,
      VAR_7) == VAR_5)))) {

   if (FUNC_11(VAR_12->cn_handle, ((void*)0), 0) != 0)
    VAR_14++;
   else
    VAR_18 = VAR_4;
  }






  if (VAR_16 && VAR_18)
   VAR_14 += FUNC_15(VAR_12->cn_handle);
  else if (VAR_12->cn_shared || VAR_11->cl_waslegacy)
   VAR_14 += FUNC_18(VAR_12->cn_handle, ((void*)0));
  if (VAR_17 && VAR_18)
   VAR_14 += FUNC_16(VAR_12->cn_handle);
  else if (VAR_12->cn_shared || VAR_11->cl_waslegacy)
   VAR_14 += FUNC_19(VAR_12->cn_handle, ((void*)0));
 }

 return (VAR_14 ? -1 : 0);
}
