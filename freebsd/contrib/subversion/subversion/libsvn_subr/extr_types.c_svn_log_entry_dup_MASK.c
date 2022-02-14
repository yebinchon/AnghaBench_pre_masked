
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ changed_paths2; scalar_t__ changed_paths; scalar_t__ revprops; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void const**,int *,void**) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,void const*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (void*,int *) ;
 scalar_t__ FUNC_8 (scalar_t__,int *) ;

svn_log_entry_t *
FUNC_9(const svn_log_entry_t *VAR_0, apr_pool_t *VAR_1)
{
  apr_hash_index_t *VAR_2;
  svn_log_entry_t *VAR_3 = FUNC_4(VAR_1, sizeof(*VAR_3));

  *VAR_3 = *VAR_0;

  if (VAR_0->revprops)
    VAR_3->revprops = FUNC_8(VAR_0->revprops, VAR_1);

  if (VAR_0->changed_paths2)
    {
      VAR_3->changed_paths2 = FUNC_1(VAR_1);

      for (VAR_2 = FUNC_0(VAR_1, VAR_0->changed_paths2);
           VAR_2; VAR_2 = FUNC_2(VAR_2))
        {
          const void *VAR_4;
          void *VAR_5;

          FUNC_3(VAR_2, &VAR_4, ((void*)0), &VAR_5);

          FUNC_6(VAR_3->changed_paths2, FUNC_5(VAR_1, VAR_4),
                        FUNC_7(VAR_5, VAR_1));
        }
    }




  VAR_3->changed_paths = VAR_3->changed_paths2;

  return VAR_3;
}
