
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;

svn_skel_t *
FUNC_4(svn_skel_t *VAR_0,
                 svn_skel_t *VAR_1,
                 apr_pool_t *VAR_2)
{

  if (VAR_0 == ((void*)0))
    return VAR_1;
  if (VAR_1 == ((void*)0))
    return VAR_0;


  if (FUNC_0(VAR_0))
    {
      if (FUNC_0(VAR_1))
        {



          svn_skel_t *VAR_3 = FUNC_2(VAR_2);

          FUNC_3(VAR_1, VAR_3);
          FUNC_3(VAR_0, VAR_3);
          return VAR_3;
        }



      FUNC_3(VAR_0, VAR_1);
      return VAR_1;
    }


  if (FUNC_0(VAR_1))
    {

      FUNC_1(VAR_0, VAR_1);
      return VAR_0;
    }




  FUNC_1(VAR_0, VAR_1->children);
  return VAR_0;
}
