
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bin_messagetable {TYPE_1__* items; } ;
typedef scalar_t__ rc_uint_type ;
struct TYPE_7__ {scalar_t__ vid; } ;
typedef TYPE_2__ mc_node_lang ;
struct TYPE_8__ {scalar_t__ res_off; } ;
typedef TYPE_3__ mc_msg_item ;
struct TYPE_6__ {int highid; int offset; int lowid; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct bin_messagetable *VAR_0, mc_node_lang **VAR_1, mc_msg_item *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 0;
  rc_uint_type VAR_6;

  if (! VAR_1)
    return;
  VAR_4 = 0;
  while (VAR_4 < VAR_3)
    {
      FUNC_0 (VAR_0->items[VAR_5].lowid, VAR_1[VAR_4]->vid);
      FUNC_0 (VAR_0->items[VAR_5].highid, VAR_1[VAR_4]->vid);
      FUNC_0 (VAR_0->items[VAR_5].offset, VAR_2[VAR_4].res_off);
      VAR_6 = VAR_1[VAR_4++]->vid;
      while (VAR_4 < VAR_3 && VAR_1[VAR_4]->vid == VAR_6 + 1)
 {
   FUNC_0 (VAR_0->items[VAR_5].highid, VAR_1[VAR_4]->vid);
   VAR_6 = VAR_1[VAR_4++]->vid;
 }
      ++VAR_5;
    }
}
