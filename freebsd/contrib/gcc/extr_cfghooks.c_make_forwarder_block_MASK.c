
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int edge_iterator ;
typedef TYPE_2__* edge ;
typedef TYPE_1__* basic_block ;
struct TYPE_20__ {scalar_t__ count; TYPE_1__* dest; TYPE_1__* src; } ;
struct TYPE_19__ {scalar_t__ frequency; scalar_t__ count; int preds; } ;
struct TYPE_18__ {int (* make_forwarder_block ) (TYPE_2__*) ;int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_16__* VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,TYPE_1__**,int) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;

edge
FUNC_10 (basic_block VAR_2, bool (*VAR_3) (edge),
        void (*VAR_4) (basic_block))
{
  edge VAR_5, VAR_6;
  edge_iterator VAR_7;
  basic_block VAR_8, VAR_9;

  if (!VAR_1->make_forwarder_block)
    FUNC_5 ("%s does not support make_forwarder_block",
      VAR_1->name);

  VAR_6 = FUNC_8 (VAR_2);
  VAR_8 = VAR_6->src;
  VAR_2 = VAR_6->dest;


  for (VAR_7 = FUNC_4 (VAR_8->preds); (VAR_5 = FUNC_3 (VAR_7)); )
    {
      if (VAR_3 (VAR_5))
 {
   FUNC_2 (&VAR_7);
   continue;
 }

      VAR_8->frequency -= FUNC_0 (VAR_5);
      VAR_8->count -= VAR_5->count;
      if (VAR_8->frequency < 0)
 VAR_8->frequency = 0;
      if (VAR_8->count < 0)
 VAR_8->count = 0;
      VAR_6->count -= VAR_5->count;
      if (VAR_6->count < 0)
 VAR_6->count = 0;

      VAR_9 = FUNC_7 (VAR_5, VAR_2);
      if (VAR_9)
 VAR_4 (VAR_9);
    }

  if (FUNC_1 (VAR_0))
    {
      basic_block VAR_10[2];

      VAR_10[0] = VAR_8;
      VAR_10[1] = VAR_2;
      FUNC_6 (VAR_0, VAR_10, 2);
    }

  VAR_1->make_forwarder_block (VAR_6);

  return VAR_6;
}
