
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int node_class; int lineno; int node_code; } ;
struct TYPE_6__ {int * str; int value; } ;
struct TYPE_8__ {TYPE_2__ type; TYPE_1__ value; } ;
typedef TYPE_3__ etree_type ;
typedef int bfd_vma ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;

etree_type *
FUNC_1 (bfd_vma VAR_3)
{
  etree_type *VAR_4 = FUNC_0 (sizeof (VAR_4->value));
  VAR_4->type.node_code = VAR_0;
  VAR_4->type.lineno = VAR_2;
  VAR_4->value.value = VAR_3;
  VAR_4->value.str = ((void*)0);
  VAR_4->type.node_class = VAR_1;
  return VAR_4;
}
