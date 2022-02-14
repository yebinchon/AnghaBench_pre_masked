
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct occurrence {struct occurrence* children; TYPE_1__* bb; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {struct occurrence* aux; } ;


 int FUNC_0 (struct occurrence*,int ,int) ;
 int VAR_0 ;
 struct occurrence* FUNC_1 (int ) ;

__attribute__((used)) static struct occurrence *
FUNC_2 (basic_block VAR_1, struct occurrence *VAR_2)
{
  struct occurrence *VAR_3;

  VAR_3 = VAR_1->aux = FUNC_1 (VAR_0);
  FUNC_0 (VAR_3, 0, sizeof (struct occurrence));

  VAR_3->bb = VAR_1;
  VAR_3->children = VAR_2;
  return VAR_3;
}
