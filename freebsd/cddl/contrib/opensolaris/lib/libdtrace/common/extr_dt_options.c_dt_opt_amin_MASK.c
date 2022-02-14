
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int str ;
struct TYPE_6__ {void* dt_amin; int dt_cflags; TYPE_1__* dt_pcb; } ;
typedef TYPE_2__ dtrace_hdl_t ;
typedef void* dtrace_attribute_t ;
struct TYPE_5__ {void* pcb_amin; int pcb_cflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (char const*,void**) ;

__attribute__((used)) static int
FUNC_4(dtrace_hdl_t *VAR_3, const char *VAR_4, uintptr_t VAR_5)
{
 char VAR_6[VAR_0];
 dtrace_attribute_t VAR_7;

 if (VAR_4 == ((void*)0) || FUNC_3(VAR_4, &VAR_7) == -1)
  return (FUNC_1(VAR_3, VAR_2));

 FUNC_0("set compiler attribute minimum to %s\n",
     FUNC_2(VAR_7, VAR_6, sizeof (VAR_6)));

 if (VAR_3->dt_pcb != ((void*)0)) {
  VAR_3->dt_pcb->pcb_cflags |= VAR_1;
  VAR_3->dt_pcb->pcb_amin = VAR_7;
 } else {
  VAR_3->dt_cflags |= VAR_1;
  VAR_3->dt_amin = VAR_7;
 }

 return (0);
}
