
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int s ;
typedef int dtrace_attribute_t ;
struct TYPE_6__ {int dn_attr; } ;
typedef TYPE_1__ dt_node_t ;
typedef int a ;
struct TYPE_7__ {int pcb_cflags; int pcb_amin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 TYPE_2__* VAR_4 ;

void
FUNC_4(dt_node_t *VAR_5, dtrace_attribute_t VAR_6)
{
 if ((VAR_4->pcb_cflags & VAR_2) &&
     (FUNC_1(VAR_6, VAR_4->pcb_amin) < 0)) {
  char VAR_7[VAR_1];
  char VAR_8[VAR_0];

  FUNC_0(VAR_5, VAR_3, "attributes for %s (%s) are less than "
      "predefined minimum\n", FUNC_2(VAR_5, VAR_8, sizeof (VAR_8)),
      FUNC_3(VAR_6, VAR_7, sizeof (VAR_7)));
 }

 VAR_5->dn_attr = VAR_6;
}
