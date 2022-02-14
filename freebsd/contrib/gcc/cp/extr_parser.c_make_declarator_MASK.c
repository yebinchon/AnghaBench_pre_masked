
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cp_declarator_kind ;
struct TYPE_3__ {int * declarator; int attributes; int kind; } ;
typedef TYPE_1__ cp_declarator ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static cp_declarator *
FUNC_1 (cp_declarator_kind VAR_1)
{
  cp_declarator *VAR_2;

  VAR_2 = (cp_declarator *) FUNC_0 (sizeof (cp_declarator));
  VAR_2->kind = VAR_1;
  VAR_2->attributes = VAR_0;
  VAR_2->declarator = ((void*)0);

  return VAR_2;
}
