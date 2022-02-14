
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef int basic_block ;
struct TYPE_7__ {scalar_t__ probability; scalar_t__ count; int flags; int src; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

edge
FUNC_3 (edge VAR_1, basic_block VAR_2)
{
  edge VAR_3;

  VAR_3 = FUNC_0 (VAR_1->src, VAR_2);
  if (VAR_3 && VAR_3 != VAR_1)
    {
      VAR_3->flags |= VAR_1->flags;
      VAR_3->probability += VAR_1->probability;
      if (VAR_3->probability > VAR_0)
 VAR_3->probability = VAR_0;
      VAR_3->count += VAR_1->count;
      FUNC_2 (VAR_1);
      VAR_1 = VAR_3;
    }
  else
    FUNC_1 (VAR_1, VAR_2);

  return VAR_1;
}
