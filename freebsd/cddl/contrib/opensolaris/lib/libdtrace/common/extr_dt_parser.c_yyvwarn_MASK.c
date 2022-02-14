
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_4__ {char* dt_errmsg; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_5__ {TYPE_1__* pcb_hdl; scalar_t__ pcb_fileptr; int pcb_filetag; int pcb_region; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,char const*,int ) ;
 int FUNC_2 (char*,size_t,char*,...) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 char* VAR_3 ;

void
FUNC_5(const char *VAR_4, va_list VAR_5)
{
 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_2->pcb_hdl, FUNC_0(VAR_0), VAR_2->pcb_region,
     VAR_2->pcb_filetag, VAR_2->pcb_fileptr ? VAR_1 : 0, VAR_4, VAR_5);

 if (FUNC_3(VAR_4, '\n') == ((void*)0)) {
  dtrace_hdl_t *VAR_6 = VAR_2->pcb_hdl;
  size_t VAR_7 = FUNC_4(VAR_6->dt_errmsg);
  char *VAR_8, *VAR_9 = VAR_6->dt_errmsg + VAR_7;
  size_t VAR_10 = sizeof (VAR_6->dt_errmsg) - VAR_7;

  if (VAR_3[0] == '\0')
   (void) FUNC_2(VAR_9, VAR_10, " near end of input");
  else if (VAR_3[0] == '\n')
   (void) FUNC_2(VAR_9, VAR_10, " near end of line");
  else {
   if ((VAR_8 = FUNC_3(VAR_3, '\n')) != ((void*)0))
    *VAR_8 = '\0';
   (void) FUNC_2(VAR_9, VAR_10, " near \"%s\"", VAR_3);
  }
 }
}
