
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char node_code; int node_class; int lineno; } ;
struct TYPE_9__ {char const* dst; int hidden; TYPE_4__* src; TYPE_3__ type; } ;
struct TYPE_8__ {int lineno; } ;
struct TYPE_11__ {TYPE_2__ assign; TYPE_1__ type; } ;
typedef TYPE_4__ etree_type ;
typedef int bfd_boolean ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int) ;

etree_type *
FUNC_1 (const char *VAR_1, etree_type *VAR_2, bfd_boolean VAR_3)
{
  etree_type *VAR_4;

  VAR_4 = FUNC_0 (sizeof (VAR_4->assign));
  VAR_4->assign.type.node_code = '=';
  VAR_4->assign.type.lineno = VAR_2->type.lineno;
  VAR_4->assign.type.node_class = VAR_0;
  VAR_4->assign.src = VAR_2;
  VAR_4->assign.dst = VAR_1;
  VAR_4->assign.hidden = VAR_3;
  return VAR_4;
}
