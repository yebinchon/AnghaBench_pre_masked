
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* dst; TYPE_3__* src; } ;
struct TYPE_8__ {int node_code; int node_class; int lineno; } ;
struct TYPE_9__ {TYPE_1__ assign; TYPE_2__ type; } ;
typedef TYPE_3__ etree_type ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;

etree_type *
FUNC_1 (int VAR_1, const char *VAR_2, etree_type *VAR_3)
{
  etree_type *VAR_4;

  VAR_4 = FUNC_0 (sizeof (VAR_4->assign));
  VAR_4->type.node_code = VAR_1;
  VAR_4->type.lineno = VAR_3->type.lineno;
  VAR_4->type.node_class = VAR_0;
  VAR_4->assign.src = VAR_3;
  VAR_4->assign.dst = VAR_2;
  return VAR_4;
}
