
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* edge ;
typedef TYPE_3__* basic_block ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {int flags; TYPE_3__* dest; TYPE_1__* src; } ;
struct TYPE_7__ {int index; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,char*,int,int) ;

__attribute__((used)) static void
FUNC_3 (edge VAR_6)
{
  basic_block VAR_7 = VAR_6->dest;
  if (VAR_7 == VAR_1)
    return;


  if (VAR_6->flags & VAR_0)
    return;

  VAR_6->flags |= VAR_0;


  if (FUNC_0 (VAR_3, VAR_7->index))
    return;

  FUNC_1 (VAR_7);

  if (VAR_4 && (VAR_5 & VAR_2))
    FUNC_2 (VAR_4, "Adding Destination of edge (%d -> %d) to worklist\n\n",
 VAR_6->src->index, VAR_6->dest->index);
}
