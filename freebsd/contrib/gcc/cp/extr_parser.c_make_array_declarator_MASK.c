
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {int bounds; } ;
struct TYPE_8__ {TYPE_1__ array; } ;
struct TYPE_9__ {TYPE_2__ u; struct TYPE_9__* declarator; } ;
typedef TYPE_3__ cp_declarator ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

cp_declarator *
FUNC_1 (cp_declarator *VAR_1, tree VAR_2)
{
  cp_declarator *VAR_3;

  VAR_3 = FUNC_0 (VAR_0);
  VAR_3->declarator = VAR_1;
  VAR_3->u.array.bounds = VAR_2;

  return VAR_3;
}
