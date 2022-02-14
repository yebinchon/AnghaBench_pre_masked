
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dn_kind; int dn_value; int * dn_string; struct TYPE_4__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_5__ {scalar_t__ pcb_idepth; int * pcb_filetag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_5, dt_node_t *VAR_6)
{
 dt_node_t *VAR_7 = VAR_6 ? VAR_6->dn_list : ((void*)0);
 dt_node_t *VAR_8 = VAR_7 ? VAR_7->dn_list : ((void*)0);

 if ((VAR_6 == ((void*)0) || VAR_6->dn_kind != VAR_0) ||
     (VAR_7 != ((void*)0) && VAR_7->dn_kind != VAR_1) ||
     (VAR_8 != ((void*)0) && VAR_8->dn_kind != VAR_0)) {
  FUNC_2(VAR_2, "malformed #%s "
      "<line> [ [\"file\"] state ]\n", VAR_5);
 }





 if (VAR_7 != ((void*)0)) {
  if (VAR_4->pcb_filetag != ((void*)0))
   FUNC_0(VAR_4->pcb_filetag);
  if (FUNC_1(VAR_7->dn_string, "/dev/fd/", 8) != 0) {
   VAR_4->pcb_filetag = VAR_7->dn_string;
   VAR_7->dn_string = ((void*)0);
  } else
   VAR_4->pcb_filetag = ((void*)0);
 }

 if (VAR_8 != ((void*)0)) {
  if (VAR_8->dn_value == 1)
   VAR_4->pcb_idepth++;
  else if (VAR_8->dn_value == 2 && VAR_4->pcb_idepth != 0)
   VAR_4->pcb_idepth--;
 }

 VAR_3 = VAR_6->dn_value;
}
