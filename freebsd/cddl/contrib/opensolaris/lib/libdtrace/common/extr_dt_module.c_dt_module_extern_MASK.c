
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_14__ {int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_15__ {int dts_id; int dts_name; int dts_object; } ;
typedef TYPE_2__ dtrace_syminfo_t ;
struct TYPE_16__ {int dt_gen; } ;
typedef TYPE_3__ dtrace_hdl_t ;
struct TYPE_17__ {int dm_name; int * dm_extern; int dm_nsymelems; } ;
typedef TYPE_4__ dt_module_t ;
struct TYPE_18__ {int di_type; int di_ctfp; TYPE_2__* di_data; int di_id; int di_name; } ;
typedef TYPE_5__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (char*,int *,int ,int ) ;
 TYPE_5__* FUNC_1 (int *,char const*,int ,int ,int ,int ,int ,int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int) ;

dt_ident_t *
FUNC_6(dtrace_hdl_t *VAR_6, dt_module_t *VAR_7,
    const char *VAR_8, const dtrace_typeinfo_t *VAR_9)
{
 dtrace_syminfo_t *VAR_10;
 dt_ident_t *VAR_11;
 uint_t VAR_12;

 if (VAR_7->dm_extern == ((void*)0) && (VAR_7->dm_extern = FUNC_0(
     "extern", ((void*)0), VAR_7->dm_nsymelems, VAR_3)) == ((void*)0)) {
  (void) FUNC_3(VAR_6, VAR_1);
  return (((void*)0));
 }

 if (FUNC_2(VAR_7->dm_extern, &VAR_12) == -1) {
  (void) FUNC_3(VAR_6, VAR_2);
  return (((void*)0));
 }

 if ((VAR_10 = FUNC_5(sizeof (dtrace_syminfo_t))) == ((void*)0)) {
  (void) FUNC_3(VAR_6, VAR_1);
  return (((void*)0));
 }

 VAR_11 = FUNC_1(VAR_7->dm_extern, VAR_8, VAR_0, 0, VAR_12,
     VAR_4, 0, &VAR_5, ((void*)0), VAR_6->dt_gen);

 if (VAR_11 == ((void*)0)) {
  (void) FUNC_3(VAR_6, VAR_1);
  FUNC_4(VAR_10);
  return (((void*)0));
 }

 VAR_10->dts_object = VAR_7->dm_name;
 VAR_10->dts_name = VAR_11->di_name;
 VAR_10->dts_id = VAR_11->di_id;

 VAR_11->di_data = VAR_10;
 VAR_11->di_ctfp = VAR_9->dtt_ctfp;
 VAR_11->di_type = VAR_9->dtt_type;

 return (VAR_11);
}
