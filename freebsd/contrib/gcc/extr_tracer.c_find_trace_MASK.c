
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_11__ {int index; int frequency; } ;
struct TYPE_10__ {int flags; TYPE_2__* dest; TYPE_2__* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4 (basic_block VAR_3, basic_block *VAR_4)
{
  int VAR_5 = 0;
  edge VAR_6;

  if (VAR_2)
    FUNC_2 (VAR_2, "Trace seed %i [%i]", VAR_3->index, VAR_3->frequency);

  while ((VAR_6 = FUNC_0 (VAR_3)) != ((void*)0))
    {
      basic_block VAR_7 = VAR_6->src;
      if (FUNC_3 (VAR_7) || (VAR_6->flags & (VAR_1 | VAR_0))
   || FUNC_1 (VAR_7) != VAR_6)
 break;
      if (VAR_2)
 FUNC_2 (VAR_2, ",%i [%i]", VAR_3->index, VAR_3->frequency);
      VAR_3 = VAR_7;
    }
  if (VAR_2)
    FUNC_2 (VAR_2, " forward %i [%i]", VAR_3->index, VAR_3->frequency);
  VAR_4[VAR_5++] = VAR_3;


  while ((VAR_6 = FUNC_1 (VAR_3)) != ((void*)0))
    {
      VAR_3 = VAR_6->dest;
      if (FUNC_3 (VAR_3) || (VAR_6->flags & (VAR_1 | VAR_0))
   || FUNC_0 (VAR_3) != VAR_6)
 break;
      if (VAR_2)
 FUNC_2 (VAR_2, ",%i [%i]", VAR_3->index, VAR_3->frequency);
      VAR_4[VAR_5++] = VAR_3;
    }
  if (VAR_2)
    FUNC_2 (VAR_2, "\n");
  return VAR_5;
}
