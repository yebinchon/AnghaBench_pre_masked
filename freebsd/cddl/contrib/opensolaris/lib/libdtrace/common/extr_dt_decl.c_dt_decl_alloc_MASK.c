
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_5__ {char* dd_name; int * dd_next; int * dd_node; int dd_type; int * dd_ctfp; scalar_t__ dd_attr; int dd_kind; } ;
typedef TYPE_1__ dt_decl_t ;
struct TYPE_6__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;

dt_decl_t *
FUNC_2(ushort_t VAR_3, char *VAR_4)
{
 dt_decl_t *VAR_5 = FUNC_1(sizeof (dt_decl_t));

 if (VAR_5 == ((void*)0))
  FUNC_0(VAR_2->pcb_jmpbuf, VAR_1);

 VAR_5->dd_kind = VAR_3;
 VAR_5->dd_attr = 0;
 VAR_5->dd_ctfp = ((void*)0);
 VAR_5->dd_type = VAR_0;
 VAR_5->dd_name = VAR_4;
 VAR_5->dd_node = ((void*)0);
 VAR_5->dd_next = ((void*)0);

 return (VAR_5);
}
