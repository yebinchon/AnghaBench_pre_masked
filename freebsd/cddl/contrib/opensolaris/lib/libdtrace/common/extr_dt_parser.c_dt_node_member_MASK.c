
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dtt_flags; int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_10__ {char* dn_membname; struct TYPE_10__* dn_membexpr; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_decl_t ;
struct TYPE_11__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_2 ;

dt_node_t *
FUNC_5(dt_decl_t *VAR_3, char *VAR_4, dt_node_t *VAR_5)
{
 dtrace_typeinfo_t VAR_6;
 dt_node_t *VAR_7;
 int VAR_8;

 if (VAR_3 != ((void*)0)) {
  VAR_8 = FUNC_1(VAR_3, &VAR_6);
  FUNC_0(VAR_3);

  if (VAR_8 != 0)
   FUNC_4(VAR_2->pcb_jmpbuf, VAR_1);
 }

 VAR_7 = FUNC_2(VAR_0);
 VAR_7->dn_membname = VAR_4;
 VAR_7->dn_membexpr = VAR_5;

 if (VAR_3 != ((void*)0))
  FUNC_3(VAR_7, VAR_6.dtt_ctfp, VAR_6.dtt_type,
      VAR_6.dtt_flags);

 return (VAR_7);
}
