
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {struct so_list* next; TYPE_1__* lm_info; } ;
struct read_map_ctxt {int dummy; } ;
struct TYPE_2__ {int isloader; } ;


 int FUNC_0 (struct read_map_ctxt*) ;
 int FUNC_1 (struct so_list*,struct so_list*,int) ;
 int FUNC_2 (struct read_map_ctxt*) ;
 int FUNC_3 (struct so_list*) ;
 int FUNC_4 (struct read_map_ctxt*,struct so_list*) ;
 struct so_list* FUNC_5 (int) ;

__attribute__((used)) static struct so_list *
FUNC_6 (void)
{
  struct so_list *VAR_0 = ((void*)0), *VAR_1, *VAR_2, VAR_3;
  struct read_map_ctxt VAR_4;
  int VAR_5;

  if (!FUNC_2 (&VAR_4))
    return ((void*)0);


  for (VAR_5 = 0;;)
    {
      if (!FUNC_4 (&VAR_4, &VAR_3))
 break;



      if (!VAR_3.lm_info->isloader && !VAR_5)
 {
   FUNC_3 (&VAR_3);
   VAR_5 = 1;
   continue;
 }

      VAR_2 = FUNC_5 (sizeof *VAR_2);
      if (!VAR_0)
 VAR_0 = VAR_2;
      else
 VAR_1->next = VAR_2;
      VAR_1 = VAR_2;

      FUNC_1 (VAR_1, &VAR_3, sizeof VAR_3);
      VAR_1->next = ((void*)0);
    }

 done:
  FUNC_0 (&VAR_4);
  return VAR_0;
}
