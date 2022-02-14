
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
typedef int dt_errtag_t ;
struct TYPE_2__ {scalar_t__ pcb_fileptr; int pcb_filetag; int pcb_region; int pcb_hdl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,char const*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_2(dt_errtag_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->pcb_hdl, FUNC_0(VAR_2), VAR_1->pcb_region,
     VAR_1->pcb_filetag, VAR_1->pcb_fileptr ? VAR_0 : 0, VAR_3, VAR_4);
}
