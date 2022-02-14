
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int * dtt_object; int dtt_type; int * dtt_ctfp; scalar_t__ dtt_flags; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_20__ {int dts_id; int dts_name; int dts_object; } ;
typedef TYPE_2__ dtrace_syminfo_t ;
struct TYPE_21__ {int dt_ctferr; } ;
typedef TYPE_3__ dtrace_hdl_t ;
struct TYPE_22__ {int * dm_name; int * dm_ctfp; int * dm_extern; } ;
typedef TYPE_4__ dt_module_t ;
struct TYPE_23__ {int di_type; int * di_ctfp; } ;
typedef TYPE_5__ dt_ident_t ;
struct TYPE_24__ {scalar_t__ st_shndx; int st_info; } ;
typedef TYPE_6__ GElf_Sym ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_5__* FUNC_5 (int *,int ) ;
 int * FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;

int
FUNC_9(dtrace_hdl_t *VAR_6, const GElf_Sym *VAR_7,
    const dtrace_syminfo_t *VAR_8, dtrace_typeinfo_t *VAR_9)
{
 dt_module_t *VAR_10;

 VAR_9->dtt_object = ((void*)0);
 VAR_9->dtt_ctfp = ((void*)0);
 VAR_9->dtt_type = VAR_0;
 VAR_9->dtt_flags = 0;

 if ((VAR_10 = FUNC_7(VAR_6, VAR_8->dts_object)) == ((void*)0))
  return (FUNC_8(VAR_6, VAR_2));

 if (VAR_7->st_shndx == VAR_4 && VAR_10->dm_extern != ((void*)0)) {
  dt_ident_t *VAR_11 =
      FUNC_5(VAR_10->dm_extern, VAR_8->dts_name);

  if (VAR_11 == ((void*)0))
   return (FUNC_8(VAR_6, VAR_3));

  VAR_9->dtt_ctfp = VAR_11->di_ctfp;
  VAR_9->dtt_type = VAR_11->di_type;

 } else if (FUNC_2(VAR_7->st_info) != VAR_5) {
  if (FUNC_6(VAR_6, VAR_10) == ((void*)0))
   return (-1);

  VAR_9->dtt_ctfp = VAR_10->dm_ctfp;
  VAR_9->dtt_type = FUNC_4(VAR_10->dm_ctfp, VAR_8->dts_id);

  if (VAR_9->dtt_type == VAR_0) {
   VAR_6->dt_ctferr = FUNC_3(VAR_9->dtt_ctfp);
   return (FUNC_8(VAR_6, VAR_1));
  }

 } else {
  VAR_9->dtt_ctfp = FUNC_0(VAR_6);
  VAR_9->dtt_type = FUNC_1(VAR_6);
 }

 VAR_9->dtt_object = VAR_10->dm_name;
 return (0);
}
