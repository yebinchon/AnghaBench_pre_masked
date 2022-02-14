
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_4__ {scalar_t__ dn_kind; int dn_string; int * dn_list; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_5__ {int * pcb_hdl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char const*,...) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static void
FUNC_8(const char *VAR_4, dt_node_t *VAR_5)
{
 dtrace_hdl_t *VAR_6 = VAR_3->pcb_hdl;
 char *VAR_7, *VAR_8;

 if (VAR_5 == ((void*)0) || VAR_5->dn_kind != VAR_0) {
  FUNC_7(VAR_1,
      "malformed #pragma %s <option>=<val>\n", VAR_4);
 }

 if (VAR_5->dn_list != ((void*)0)) {
  FUNC_7(VAR_1,
      "superfluous arguments specified for #pragma %s\n", VAR_4);
 }

 VAR_7 = FUNC_0(FUNC_6(VAR_5->dn_string) + 1);
 (void) FUNC_5(VAR_7, VAR_5->dn_string);

 if ((VAR_8 = FUNC_4(VAR_7, '=')) != ((void*)0))
  *VAR_8++ = '\0';

 if (FUNC_3(VAR_6, VAR_7, VAR_8) == -1) {
  if (VAR_8 == ((void*)0)) {
   FUNC_7(VAR_2,
       "failed to set option '%s': %s\n", VAR_7,
       FUNC_1(VAR_6, FUNC_2(VAR_6)));
  } else {
   FUNC_7(VAR_2,
       "failed to set option '%s' to '%s': %s\n",
       VAR_7, VAR_8, FUNC_1(VAR_6, FUNC_2(VAR_6)));
  }
 }
}
