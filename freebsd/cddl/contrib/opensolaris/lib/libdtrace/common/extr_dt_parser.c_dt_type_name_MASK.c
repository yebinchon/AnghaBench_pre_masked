
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_2__ {int * pcb_hdl; } ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,scalar_t__,char*,size_t) ;
 int FUNC_7 (char*,size_t,char*) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_8(ctf_file_t *VAR_1, ctf_id_t VAR_2, char *VAR_3, size_t VAR_4)
{
 dtrace_hdl_t *VAR_5 = VAR_0->pcb_hdl;

 if (VAR_1 == FUNC_2(VAR_5) && VAR_2 == FUNC_3(VAR_5))
  (void) FUNC_7(VAR_3, VAR_4, "function pointer");
 else if (VAR_1 == FUNC_4(VAR_5) && VAR_2 == FUNC_5(VAR_5))
  (void) FUNC_7(VAR_3, VAR_4, "function");
 else if (VAR_1 == FUNC_0(VAR_5) && VAR_2 == FUNC_1(VAR_5))
  (void) FUNC_7(VAR_3, VAR_4, "dynamic variable");
 else if (VAR_1 == ((void*)0))
  (void) FUNC_7(VAR_3, VAR_4, "<none>");
 else if (FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4) == ((void*)0))
  (void) FUNC_7(VAR_3, VAR_4, "unknown");

 return (VAR_3);
}
