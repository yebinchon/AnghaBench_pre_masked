
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct so_list {int so_name; TYPE_1__* lm_info; } ;
struct read_map_ctxt {int dummy; } ;
struct TYPE_2__ {int isloader; } ;


 int FUNC_0 (struct read_map_ctxt*) ;
 int FUNC_1 (struct read_map_ctxt*) ;
 int FUNC_2 (struct so_list*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct read_map_ctxt*,struct so_list*) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_6 (void *VAR_1)
{
  struct read_map_ctxt VAR_2;
  struct so_list VAR_3;
  int VAR_4;

  if (VAR_0)
    if (!FUNC_3 ("Attempt to reload symbols from process? "))
      return 0;


  if (!FUNC_1 (&VAR_2))
    return 0;
  for (VAR_4 = 0; !VAR_4;)
    {
      if (!FUNC_4 (&VAR_2, &VAR_3))
 break;
      VAR_4 = !VAR_3.lm_info->isloader;
      FUNC_2 (&VAR_3);
    }
  FUNC_0 (&VAR_2);

  if (VAR_4)
    FUNC_5 (VAR_3.so_name, *(int *) VAR_1);
  return VAR_4;
}
