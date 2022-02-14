
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_7__ {int * pa_ctfp; int * pa_file; scalar_t__ pa_depth; scalar_t__ pa_nest; int pa_addr; int * pa_dtp; } ;
typedef TYPE_1__ dt_printarg_t ;
struct TYPE_8__ {scalar_t__ dm_pid; int dm_nctflibs; int ** dm_libctfp; } ;
typedef TYPE_2__ dt_module_t ;
typedef void* ctf_id_t ;
typedef int ctf_file_t ;
typedef int caddr_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,void*,int ,TYPE_1__*) ;
 int * FUNC_5 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int *,char*) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 char* FUNC_8 (char const*,char) ;

int
FUNC_9(dtrace_hdl_t *VAR_2, FILE *VAR_3, const char *VAR_4,
    caddr_t VAR_5, size_t VAR_6)
{
 const char *VAR_7;
 char *VAR_8;
 dt_printarg_t VAR_9;
 ctf_id_t VAR_10;
 dt_module_t *VAR_11;
 ctf_file_t *VAR_12;
 int VAR_13;
 for (VAR_7 = VAR_4; *VAR_7 != '\0' && *VAR_7 != '`'; VAR_7++)
  ;

 if (*VAR_7 != '`')
  return (0);

 VAR_8 = FUNC_0(VAR_7 - VAR_4 + 1);
 FUNC_2(VAR_4, VAR_8, VAR_7 - VAR_4);
 VAR_8[VAR_7 - VAR_4] = '\0';
 VAR_11 = FUNC_6(VAR_2, VAR_8);
 if (VAR_11 == ((void*)0))
  return (0);

 if (VAR_11->dm_pid != 0) {
  VAR_13 = FUNC_1(VAR_7 + 1);
  VAR_7 = FUNC_8(VAR_7 + 1, '`');
  if (VAR_7 == ((void*)0) || VAR_13 > VAR_11->dm_nctflibs)
   return (0);
  VAR_12 = VAR_11->dm_libctfp[VAR_13];
 } else {
  VAR_12 = FUNC_5(VAR_2, VAR_11);
 }

 VAR_10 = FUNC_1(VAR_7 + 1);






 if (VAR_12 == ((void*)0) || FUNC_3(VAR_12, VAR_10) == VAR_0)
  return (0);


 VAR_9.pa_dtp = VAR_2;
 VAR_9.pa_addr = VAR_5;
 VAR_9.pa_ctfp = VAR_12;
 VAR_9.pa_nest = 0;
 VAR_9.pa_depth = 0;
 VAR_9.pa_file = VAR_3;
 (void) FUNC_4(VAR_9.pa_ctfp, VAR_10, VAR_1, &VAR_9);

 FUNC_7(&VAR_9, 0);

 return (VAR_6);
}
