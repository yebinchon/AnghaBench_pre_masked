
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; struct TYPE_3__* next; struct TYPE_3__* children; scalar_t__ is_atom; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_size_t ;



__attribute__((used)) static apr_size_t
FUNC_0(const svn_skel_t *VAR_0)
{
  if (VAR_0->is_atom)
    {
      if (VAR_0->len < 100)



        return VAR_0->len + 3;
      else
        return VAR_0->len + 30;
    }
  else
    {
      apr_size_t VAR_1;
      svn_skel_t *VAR_2;



      VAR_1 = 2;
      for (VAR_2 = VAR_0->children; VAR_2; VAR_2 = VAR_2->next)
        VAR_1 += FUNC_0(VAR_2) + 1;

      return VAR_1;
    }
}
