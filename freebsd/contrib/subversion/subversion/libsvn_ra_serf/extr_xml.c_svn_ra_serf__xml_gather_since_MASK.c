
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int * attrs; struct TYPE_4__* prev; int * state_pool; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void const*,int ,void*) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 int FUNC_5 (TYPE_1__*) ;

apr_hash_t *
FUNC_6(svn_ra_serf__xml_estate_t *VAR_0,
                              int VAR_1)
{
  apr_hash_t *VAR_2;
  apr_pool_t *VAR_3;

  FUNC_5(VAR_0);
  VAR_3 = VAR_0->state_pool;

  VAR_2 = FUNC_1(VAR_3);

  for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->prev)
    {
      if (VAR_0->attrs != ((void*)0))
        {
          apr_hash_index_t *VAR_4;

          for (VAR_4 = FUNC_0(VAR_3, VAR_0->attrs); VAR_4;
               VAR_4 = FUNC_2(VAR_4))
            {
              const void *VAR_5;
              apr_ssize_t VAR_6;
              void *VAR_7;


              FUNC_4(VAR_4, &VAR_5, &VAR_6, &VAR_7);
              FUNC_3(VAR_2, VAR_5, VAR_6, VAR_7);
            }
        }

      if (VAR_0->state == VAR_1)
        break;
    }

  return VAR_2;
}
