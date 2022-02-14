
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_3__ {char* dtpd_provider; } ;
typedef TYPE_1__ dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
typedef int dt_proc_t ;
typedef int dt_pcb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,int *,int ,char*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static pid_t
FUNC_3(dtrace_probedesc_t *VAR_3, dtrace_hdl_t *VAR_4, dt_pcb_t *VAR_5,
    dt_proc_t *VAR_6)
{
 pid_t VAR_7;
 char *VAR_8, *VAR_9 = ((void*)0), *VAR_10;

 for (VAR_8 = &VAR_3->dtpd_provider[0]; *VAR_8 != '\0'; VAR_8++) {
  if (!FUNC_1(*VAR_8))
   VAR_9 = VAR_8;
 }

 if (VAR_9 == ((void*)0) || (*(++VAR_9) == '\0')) {
  (void) FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0), VAR_1,
      "'%s' is not a valid provider", VAR_3->dtpd_provider);
  return (-1);
 }

 VAR_2 = 0;
 VAR_7 = FUNC_2(VAR_9, &VAR_10, 10);

 if (VAR_2 != 0 || VAR_10 == VAR_9 || VAR_10[0] != '\0' || VAR_7 <= 0) {
  (void) FUNC_0(VAR_4, VAR_5, VAR_6, ((void*)0), VAR_0,
      "'%s' does not contain a valid pid", VAR_3->dtpd_provider);
  return (-1);
 }

 return (VAR_7);
}
