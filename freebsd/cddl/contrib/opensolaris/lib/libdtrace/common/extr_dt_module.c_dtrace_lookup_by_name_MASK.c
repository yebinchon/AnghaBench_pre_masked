
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_23__ {char const* dts_name; int dts_id; int dts_object; } ;
typedef TYPE_3__ dtrace_syminfo_t ;
struct TYPE_22__ {scalar_t__ cts_data; } ;
struct TYPE_25__ {int dm_flags; int dm_name; int * dm_extern; TYPE_2__ dm_strtab; TYPE_1__* dm_ops; } ;
struct TYPE_24__ {int dt_nmods; TYPE_5__ dt_modlist; } ;
typedef TYPE_4__ dtrace_hdl_t ;
typedef TYPE_5__ dt_module_t ;
struct TYPE_26__ {char const* di_name; int di_id; int di_type; int di_ctfp; } ;
typedef TYPE_6__ dt_ident_t ;
struct TYPE_27__ {uintptr_t st_name; int st_size; scalar_t__ st_value; int st_shndx; scalar_t__ st_other; int st_info; } ;
struct TYPE_21__ {int * (* do_symname ) (TYPE_5__*,char const*,TYPE_7__*,int*) ;} ;
typedef TYPE_7__ GElf_Sym ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__* FUNC_2 (int *,char const*) ;
 TYPE_5__* FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,char const*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int * FUNC_7 (TYPE_5__*,char const*,TYPE_7__*,int*) ;

int
FUNC_8(dtrace_hdl_t *VAR_8, const char *VAR_9, const char *VAR_10,
    GElf_Sym *VAR_11, dtrace_syminfo_t *VAR_12)
{
 dt_module_t *VAR_13;
 dt_ident_t *VAR_14;
 uint_t VAR_15, VAR_16;
 GElf_Sym VAR_17;

 uint_t VAR_18 = 0;
 uint_t VAR_19 = 0;

 if (VAR_9 != VAR_0 &&
     VAR_9 != VAR_1 &&
     VAR_9 != VAR_2) {
  if ((VAR_13 = FUNC_4(VAR_8, VAR_9)) == ((void*)0))
   return (-1);

  if (FUNC_5(VAR_8, VAR_13) == -1)
   return (-1);
  VAR_15 = 1;

 } else {
  if (VAR_9 == VAR_1)
   VAR_18 = VAR_19 = VAR_3;
  else if (VAR_9 == VAR_2)
   VAR_18 = VAR_3;

  VAR_13 = FUNC_3(&VAR_8->dt_modlist);
  VAR_15 = VAR_8->dt_nmods;
 }

 if (VAR_11 == ((void*)0))
  VAR_11 = &VAR_17;

 for (; VAR_15 > 0; VAR_15--, VAR_13 = FUNC_3(VAR_13)) {
  if ((VAR_13->dm_flags & VAR_18) != VAR_19)
   continue;

  if (FUNC_5(VAR_8, VAR_13) == -1)
   continue;

  if (VAR_13->dm_ops->do_symname(VAR_13, VAR_10, VAR_11, &VAR_16) != ((void*)0)) {
   if (VAR_12 != ((void*)0)) {
    VAR_12->dts_object = VAR_13->dm_name;
    VAR_12->dts_name = (const char *)
        VAR_13->dm_strtab.cts_data + VAR_11->st_name;
    VAR_12->dts_id = VAR_16;
   }
   return (0);
  }

  if (VAR_13->dm_extern != ((void*)0) &&
      (VAR_14 = FUNC_2(VAR_13->dm_extern, VAR_10)) != ((void*)0)) {
   if (VAR_11 != &VAR_17) {
    VAR_11->st_name = (uintptr_t)VAR_14->di_name;
    VAR_11->st_info =
        FUNC_0(VAR_6, VAR_7);
    VAR_11->st_other = 0;
    VAR_11->st_shndx = VAR_5;
    VAR_11->st_value = 0;
    VAR_11->st_size =
        FUNC_1(VAR_14->di_ctfp, VAR_14->di_type);
   }

   if (VAR_12 != ((void*)0)) {
    VAR_12->dts_object = VAR_13->dm_name;
    VAR_12->dts_name = VAR_14->di_name;
    VAR_12->dts_id = VAR_14->di_id;
   }

   return (0);
  }
 }

 return (FUNC_6(VAR_8, VAR_4));
}
