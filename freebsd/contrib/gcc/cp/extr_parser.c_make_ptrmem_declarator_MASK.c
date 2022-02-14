
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int class_type; int qualifiers; } ;
struct TYPE_8__ {TYPE_1__ pointer; } ;
struct TYPE_9__ {TYPE_2__ u; struct TYPE_9__* declarator; } ;
typedef TYPE_3__ cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

cp_declarator *
FUNC_1 (cp_cv_quals VAR_1, tree VAR_2,
   cp_declarator *VAR_3)
{
  cp_declarator *VAR_4;

  VAR_4 = FUNC_0 (VAR_0);
  VAR_4->declarator = VAR_3;
  VAR_4->u.pointer.qualifiers = VAR_1;
  VAR_4->u.pointer.class_type = VAR_2;

  return VAR_4;
}
