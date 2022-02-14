
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_22__ {int (* dtv_lookup_by_addr ) (int ,scalar_t__,TYPE_7__*,TYPE_4__*) ;} ;
typedef TYPE_3__ dtrace_vector_t ;
struct TYPE_23__ {char const* dts_name; int dts_id; int dts_object; } ;
typedef TYPE_4__ dtrace_syminfo_t ;
struct TYPE_21__ {scalar_t__ cts_data; } ;
struct TYPE_25__ {scalar_t__ dm_text_va; scalar_t__ dm_text_size; scalar_t__ dm_data_va; scalar_t__ dm_data_size; scalar_t__ dm_bss_va; scalar_t__ dm_bss_size; TYPE_2__ dm_strtab; int dm_name; TYPE_1__* dm_ops; } ;
struct TYPE_24__ {TYPE_6__ dt_modlist; int dt_varg; TYPE_3__* dt_vector; } ;
typedef TYPE_5__ dtrace_hdl_t ;
typedef TYPE_6__ dt_module_t ;
struct TYPE_26__ {int st_name; } ;
struct TYPE_20__ {int * (* do_symaddr ) (TYPE_6__*,scalar_t__,TYPE_7__*,int *) ;} ;
typedef TYPE_7__ GElf_Sym ;
typedef scalar_t__ GElf_Addr ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int ,scalar_t__,TYPE_7__*,TYPE_4__*) ;
 int * FUNC_4 (TYPE_6__*,scalar_t__,TYPE_7__*,int *) ;

int
FUNC_5(dtrace_hdl_t *VAR_1, GElf_Addr VAR_2,
    GElf_Sym *VAR_3, dtrace_syminfo_t *VAR_4)
{
 dt_module_t *VAR_5;
 uint_t VAR_6;
 const dtrace_vector_t *VAR_7 = VAR_1->dt_vector;

 if (VAR_7 != ((void*)0))
  return (VAR_7->dtv_lookup_by_addr(VAR_1->dt_varg, VAR_2, VAR_3, VAR_4));

 for (VAR_5 = FUNC_0(&VAR_1->dt_modlist); VAR_5 != ((void*)0);
     VAR_5 = FUNC_0(VAR_5)) {
  if (VAR_2 - VAR_5->dm_text_va < VAR_5->dm_text_size ||
      VAR_2 - VAR_5->dm_data_va < VAR_5->dm_data_size ||
      VAR_2 - VAR_5->dm_bss_va < VAR_5->dm_bss_size)
   break;
 }

 if (VAR_5 == ((void*)0))
  return (FUNC_2(VAR_1, VAR_0));

 if (FUNC_1(VAR_1, VAR_5) == -1)
  return (-1);

 if (VAR_3 != ((void*)0)) {
  if (VAR_5->dm_ops->do_symaddr(VAR_5, VAR_2, VAR_3, &VAR_6) == ((void*)0))
   return (FUNC_2(VAR_1, VAR_0));
 }

 if (VAR_4 != ((void*)0)) {
  VAR_4->dts_object = VAR_5->dm_name;

  if (VAR_3 != ((void*)0)) {
   VAR_4->dts_name = (const char *)
       VAR_5->dm_strtab.cts_data + VAR_3->st_name;
   VAR_4->dts_id = VAR_6;
  } else {
   VAR_4->dts_name = ((void*)0);
   VAR_4->dts_id = 0;
  }
 }

 return (0);
}
