
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_prefix_string__t ;
struct TYPE_3__ {void* is_head; int * path; } ;
typedef TYPE_1__ path_order_t ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *) ;

__attribute__((used)) static void
FUNC_1(path_order_t **VAR_1,
               int VAR_2)
{
  const svn_prefix_string__t *VAR_3;
  int VAR_4;


  if (VAR_2 == 0)
    return;




  VAR_3 = VAR_1[0]->path;
  VAR_1[0]->is_head = VAR_0;





  for (VAR_4 = 1; VAR_4 < VAR_2; ++VAR_4)
    {

      if (FUNC_0(VAR_3, VAR_1[VAR_4]->path))
        {
          VAR_3 = VAR_1[VAR_4]->path;
          VAR_1[VAR_4]->is_head = VAR_0;
        }
    }
}
