
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct TYPE_4__* children; struct TYPE_4__* next; int data; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ,int *) ;
 char* FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_1,
                                svn_skel_t *VAR_2,
                                apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4 = ((void*)0);
  int VAR_5 = FUNC_5(VAR_2);
  svn_skel_t *VAR_6;

  if (! (VAR_5 >= 0))
    return FUNC_3("entries");

  if (VAR_5 > 0)
    {

      VAR_4 = FUNC_0(VAR_3);


      for (VAR_6 = VAR_2->children; VAR_6; VAR_6 = VAR_6->next)
        {
          const char *VAR_7;
          svn_fs_id_t *VAR_8;


          if (FUNC_5(VAR_6) != 2)
            return FUNC_3("entries");


          VAR_7 = FUNC_2(VAR_3, VAR_6->children->data,
                                VAR_6->children->len);
          VAR_8 = FUNC_4(VAR_6->children->next->data,
                                     VAR_6->children->next->len, VAR_3);


          FUNC_1(VAR_4, VAR_7, VAR_6->children->len, VAR_8);
        }
    }


  *VAR_1 = VAR_4;
  return VAR_0;
}
