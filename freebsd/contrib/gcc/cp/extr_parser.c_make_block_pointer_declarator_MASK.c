
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {int qualifiers; } ;
struct TYPE_4__ {TYPE_1__ block_pointer; } ;
struct cp_declarator {TYPE_2__ u; struct cp_declarator* declarator; int attributes; } ;
typedef struct cp_declarator cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 struct cp_declarator* FUNC_0 (int ) ;

cp_declarator *
FUNC_1 (tree VAR_1,
    cp_cv_quals VAR_2,
    cp_declarator *VAR_3)
{
  struct cp_declarator *VAR_4 = VAR_3;
  struct cp_declarator *VAR_5 = FUNC_0 (VAR_0);





  VAR_5->attributes = VAR_1;
  VAR_5->declarator = VAR_4;
  VAR_5->u.block_pointer.qualifiers = VAR_2;
  return VAR_5;
}
