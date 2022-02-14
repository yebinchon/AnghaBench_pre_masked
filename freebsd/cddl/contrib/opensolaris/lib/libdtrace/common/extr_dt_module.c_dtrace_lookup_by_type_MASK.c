
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_17__ {scalar_t__ dtt_type; int * dtt_ctfp; int dtt_object; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_19__ {size_t dm_flags; scalar_t__ dm_pid; size_t dm_nctflibs; int dm_name; int ** dm_libctfp; int * dm_ctfp; } ;
struct TYPE_18__ {size_t dt_nmods; TYPE_3__ dt_modlist; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef TYPE_3__ dt_module_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,char const*) ;
 int * FUNC_5 (TYPE_2__*,TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char const*,char) ;
 char* FUNC_11 (char const*) ;

int
FUNC_12(dtrace_hdl_t *VAR_8, const char *VAR_9, const char *VAR_10,
    dtrace_typeinfo_t *VAR_11)
{
 dtrace_typeinfo_t VAR_12;
 dt_module_t *VAR_13;
 int VAR_14 = 0;
 ctf_id_t VAR_15;
 uint_t VAR_16, VAR_17;
 int VAR_18;
 ctf_file_t *VAR_19;
 char *VAR_20, *VAR_21, *VAR_22;

 uint_t VAR_23 = 0;
 uint_t VAR_24 = 0;

 if (VAR_9 != VAR_2 &&
     VAR_9 != VAR_3 &&
     VAR_9 != VAR_4) {
  if ((VAR_13 = FUNC_4(VAR_8, VAR_9)) == ((void*)0))
   return (-1);

  if (FUNC_7(VAR_8, VAR_13) == -1)
   return (-1);
  VAR_16 = 1;
  VAR_18 = 1;
 } else {
  if (VAR_9 == VAR_3)
   VAR_23 = VAR_24 = VAR_5;
  else if (VAR_9 == VAR_4)
   VAR_23 = VAR_5;

  VAR_13 = FUNC_3(&VAR_8->dt_modlist);
  VAR_16 = VAR_8->dt_nmods;
  VAR_18 = 0;
 }

 if (VAR_11 == ((void*)0))
  VAR_11 = &VAR_12;

 for (; VAR_16 > 0; VAR_16--, VAR_13 = FUNC_3(VAR_13)) {
  if ((VAR_13->dm_flags & VAR_23) != VAR_24)
   continue;






  if (FUNC_6(VAR_8, VAR_13) == 0) {
   if (VAR_18)
    return (-1);
   continue;
  }







  if (VAR_13->dm_pid == 0) {
   VAR_15 = FUNC_0(VAR_13->dm_ctfp, VAR_10);
   VAR_19 = VAR_13->dm_ctfp;
  } else {
   if ((VAR_21 = FUNC_10(VAR_10, '`')) != ((void*)0)) {
    VAR_20 = FUNC_11(VAR_10);
    if (VAR_20 == ((void*)0))
     return (FUNC_8(VAR_8, VAR_6));
    VAR_21 = FUNC_10(VAR_20, '`');
    if ((VAR_22 = FUNC_10(VAR_21 + 1, '`')) != ((void*)0))
     VAR_21 = VAR_22;
    *VAR_21 = '\0';
    VAR_19 = FUNC_5(VAR_8, VAR_13, VAR_20);
    if (VAR_19 == ((void*)0) || (VAR_15 = FUNC_0(VAR_19,
        VAR_21 + 1)) == VAR_0)
     VAR_15 = VAR_0;
    FUNC_9(VAR_20);
   } else {
    for (VAR_17 = 0; VAR_17 < VAR_13->dm_nctflibs; VAR_17++) {
     VAR_19 = VAR_13->dm_libctfp[VAR_17];
     VAR_15 = FUNC_0(VAR_19, VAR_10);
     if (VAR_15 != VAR_0)
      break;
    }
   }
  }
  if (VAR_15 != VAR_0) {
   VAR_11->dtt_object = VAR_13->dm_name;
   VAR_11->dtt_ctfp = VAR_19;
   VAR_11->dtt_type = VAR_15;
   if (FUNC_1(VAR_19, FUNC_2(VAR_19, VAR_15)) !=
       VAR_1)
    return (0);

   VAR_14++;
  }
 }

 if (VAR_14 == 0)
  return (FUNC_8(VAR_8, VAR_7));

 return (0);
}
