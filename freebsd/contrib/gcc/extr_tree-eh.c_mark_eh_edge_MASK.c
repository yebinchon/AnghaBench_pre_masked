
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct eh_region {int dummy; } ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_9__ {char* index; } ;
struct TYPE_8__ {int flags; void* aux; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct eh_region*) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (struct eh_region *VAR_2, void *VAR_3)
{
  tree VAR_4, VAR_5;
  basic_block VAR_6, VAR_7;
  edge VAR_8;

  VAR_4 = (tree) VAR_3;
  VAR_5 = FUNC_3 (VAR_2);

  VAR_6 = FUNC_0 (VAR_4);
  VAR_7 = FUNC_4 (VAR_5);

  VAR_8 = FUNC_2 (VAR_6, VAR_7);
  if (!VAR_8)
    {
      FUNC_1 ("EH edge %i->%i is missing", VAR_6->index, VAR_7->index);
      VAR_1 = 1;
    }
  else if (!(VAR_8->flags & VAR_0))
    {
      FUNC_1 ("EH edge %i->%i miss EH flag", VAR_6->index, VAR_7->index);
      VAR_1 = 1;
    }
  else if (VAR_8->aux)
    {

      FUNC_1 ("EH edge %i->%i has duplicated regions", VAR_6->index, VAR_7->index);
      VAR_1 = 1;
    }
  else
    VAR_8->aux = (void *)1;
}
