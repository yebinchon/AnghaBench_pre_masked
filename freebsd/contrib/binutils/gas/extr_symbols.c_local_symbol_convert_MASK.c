
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sy_resolved; int sy_used; } ;
typedef TYPE_1__ symbolS ;
struct local_symbol {int lsy_name; int lsy_value; int lsy_section; int * lsy_marker; } ;


 int FUNC_0 (struct local_symbol*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct local_symbol*) ;
 int FUNC_4 (struct local_symbol*) ;
 TYPE_1__* FUNC_5 (struct local_symbol*) ;
 int FUNC_6 (struct local_symbol*) ;
 scalar_t__ FUNC_7 (struct local_symbol*) ;
 int FUNC_8 (struct local_symbol*,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static symbolS *
FUNC_11 (struct local_symbol *VAR_2)
{
  symbolS *VAR_3;

  FUNC_1 (VAR_2->lsy_marker == ((void*)0));
  if (FUNC_3 (VAR_2))
    return FUNC_5 (VAR_2);

  ++VAR_1;

  VAR_3 = FUNC_9 (VAR_2->lsy_name, VAR_2->lsy_section, VAR_2->lsy_value,
      FUNC_4 (VAR_2));

  if (FUNC_7 (VAR_2))
    VAR_3->sy_resolved = 1;


  VAR_3->sy_used = 1;





  FUNC_10 (VAR_3);

  FUNC_6 (VAR_2);
  FUNC_8 (VAR_2, VAR_3);

  FUNC_2 (VAR_0, VAR_2->lsy_name, ((void*)0));

  return VAR_3;
}
