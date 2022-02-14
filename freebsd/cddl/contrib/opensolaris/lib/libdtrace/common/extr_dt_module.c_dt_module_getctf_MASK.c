
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_14__ {int dtc_ctfmodel; } ;
struct TYPE_15__ {int dt_ctferr; TYPE_1__ dt_conf; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_13__ {scalar_t__ cts_size; } ;
struct TYPE_16__ {int * dm_ctfp; int dm_name; int dm_strtab; int dm_symtab; TYPE_12__ dm_ctdata; int * dm_ops; } ;
typedef TYPE_3__ dt_module_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (TYPE_12__*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (char*,int ,void*) ;
 int VAR_7 ;
 TYPE_3__* FUNC_8 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;

ctf_file_t *
FUNC_11(dtrace_hdl_t *VAR_8, dt_module_t *VAR_9)
{
 const char *VAR_10;
 dt_module_t *VAR_11;
 ctf_file_t *VAR_12;
 int VAR_13;

 if (VAR_9->dm_ctfp != ((void*)0) || FUNC_9(VAR_8, VAR_9) != 0)
  return (VAR_9->dm_ctfp);

 if (VAR_9->dm_ops == &VAR_7)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_1;







 if (VAR_8->dt_conf.dtc_ctfmodel != VAR_13) {
  (void) FUNC_10(VAR_8, VAR_4);
  return (((void*)0));
 }

 if (VAR_9->dm_ctdata.cts_size == 0) {
  (void) FUNC_10(VAR_8, VAR_5);
  return (((void*)0));
 }

 VAR_9->dm_ctfp = FUNC_0(&VAR_9->dm_ctdata,
     &VAR_9->dm_symtab, &VAR_9->dm_strtab, &VAR_8->dt_ctferr);

 if (VAR_9->dm_ctfp == ((void*)0)) {
  (void) FUNC_10(VAR_8, VAR_3);
  return (((void*)0));
 }

 (void) FUNC_5(VAR_9->dm_ctfp, VAR_13);
 FUNC_6(VAR_9->dm_ctfp, VAR_9);

 if ((VAR_10 = FUNC_4(VAR_9->dm_ctfp)) != ((void*)0)) {
  if ((VAR_11 = FUNC_8(VAR_8, VAR_10)) == ((void*)0) ||
      (VAR_12 = FUNC_11(VAR_8, VAR_11)) == ((void*)0)) {
   if (VAR_11 == ((void*)0))
    (void) FUNC_10(VAR_8, VAR_6);
   goto err;
  }

  if (FUNC_3(VAR_9->dm_ctfp, VAR_12) == VAR_0) {
   VAR_8->dt_ctferr = FUNC_2(VAR_9->dm_ctfp);
   (void) FUNC_10(VAR_8, VAR_3);
   goto err;
  }
 }

 FUNC_7("loaded CTF container for %s (%p)\n",
     VAR_9->dm_name, (void *)VAR_9->dm_ctfp);

 return (VAR_9->dm_ctfp);

err:
 FUNC_1(VAR_9->dm_ctfp);
 VAR_9->dm_ctfp = ((void*)0);
 return (((void*)0));
}
