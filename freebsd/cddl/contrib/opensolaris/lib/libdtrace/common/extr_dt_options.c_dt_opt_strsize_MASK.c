
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef void* dtrace_optval_t ;
struct TYPE_10__ {void* dt_ctferr; void** dt_options; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_11__ {scalar_t__ ctr_nelems; } ;
typedef TYPE_2__ ctf_arinfo_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;
 void* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,uintptr_t) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(dtrace_hdl_t *VAR_4, const char *VAR_5, uintptr_t VAR_6)
{
 dtrace_optval_t VAR_7 = VAR_4->dt_options[VAR_6];
 ctf_file_t *VAR_8 = FUNC_0(VAR_4);
 ctf_id_t VAR_9 = FUNC_5(VAR_8, FUNC_1(VAR_4));
 ctf_arinfo_t VAR_10;

 if (FUNC_7(VAR_4, VAR_5, VAR_6) != 0)
  return (-1);

 if (VAR_4->dt_options[VAR_6] > VAR_3) {
  VAR_4->dt_options[VAR_6] = VAR_7;
  return (FUNC_8(VAR_4, VAR_2));
 }

 if (FUNC_2(VAR_8, VAR_9, &VAR_10) == VAR_0) {
  VAR_4->dt_options[VAR_6] = VAR_7;
  VAR_4->dt_ctferr = FUNC_3(VAR_8);
  return (FUNC_8(VAR_4, VAR_1));
 }

 VAR_10.ctr_nelems = (uint_t)VAR_4->dt_options[VAR_6];

 if (FUNC_4(VAR_8, VAR_9, &VAR_10) == VAR_0 ||
     FUNC_6(VAR_8) == VAR_0) {
  VAR_4->dt_options[VAR_6] = VAR_7;
  VAR_4->dt_ctferr = FUNC_3(VAR_8);
  return (FUNC_8(VAR_4, VAR_1));
 }

 return (0);
}
