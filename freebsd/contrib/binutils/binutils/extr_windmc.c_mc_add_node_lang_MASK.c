
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ rc_uint_type ;
struct TYPE_9__ {scalar_t__ vid; struct TYPE_9__* next; TYPE_3__ const* lang; } ;
typedef TYPE_1__ mc_node_lang ;
struct TYPE_10__ {TYPE_1__* sub; } ;
typedef TYPE_2__ mc_node ;
struct TYPE_11__ {scalar_t__ nval; } ;
typedef TYPE_3__ mc_keyword ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_3 (int) ;

mc_node_lang *
FUNC_4 (mc_node *VAR_0, const mc_keyword *VAR_1, rc_uint_type VAR_2)
{
  mc_node_lang *VAR_3, *VAR_4, *VAR_5;

  if (! VAR_1 || ! VAR_0)
    FUNC_1 (FUNC_0("try to add a ill language."));
  VAR_3 = FUNC_3 (sizeof (mc_node_lang));
  FUNC_2 (VAR_3, 0, sizeof (mc_node_lang));
  VAR_3->lang = VAR_1;
  VAR_3->vid = VAR_2;
  if ((VAR_4 = VAR_0->sub) == ((void*)0))
    VAR_0->sub = VAR_3;
  else
    {
      VAR_5 = ((void*)0);
      while (VAR_4 != ((void*)0))
 {
   if (VAR_4->lang->nval > VAR_1->nval)
     break;
   if (VAR_4->lang->nval == VAR_1->nval)
     {
       if (VAR_4->vid > VAR_2)
  break;
       if (VAR_4->vid == VAR_2)
  FUNC_1 ("double defined message id %ld.\n", (long) VAR_2);
     }
   VAR_4 = (VAR_5 = VAR_4)->next;
 }
      VAR_3->next = VAR_4;
      if (! VAR_5)
 VAR_0->sub = VAR_3;
      else
 VAR_5->next = VAR_3;
    }
  return VAR_3;
}
