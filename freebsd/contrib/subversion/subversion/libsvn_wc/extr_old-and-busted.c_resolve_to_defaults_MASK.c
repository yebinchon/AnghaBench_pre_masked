
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ revision; scalar_t__ kind; int url; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int ,int *,int ) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(apr_hash_t *VAR_8,
                    apr_pool_t *VAR_9)
{
  apr_hash_index_t *VAR_10;
  svn_wc_entry_t *VAR_11
    = FUNC_5(VAR_8, VAR_5);


  if (! VAR_11)
    return FUNC_4(VAR_2,
                            ((void*)0),
                            FUNC_0("Missing default entry"));

  if (VAR_11->revision == VAR_3)
    return FUNC_4(VAR_0,
                            ((void*)0),
                            FUNC_0("Default entry has no revision number"));

  if (! VAR_11->url)
    return FUNC_4(VAR_1,
                            ((void*)0),
                            FUNC_0("Default entry is missing URL"));



  for (VAR_10 = FUNC_1(VAR_9, VAR_8); VAR_10; VAR_10 = FUNC_2(VAR_10))
    {
      svn_wc_entry_t *VAR_12 = FUNC_3(VAR_10);

      if (VAR_12 == VAR_11)


        continue;

      if (VAR_12->kind == VAR_6)






        continue;

      if (VAR_12->kind == VAR_7)



        FUNC_6(VAR_11, VAR_12, VAR_9);
    }

  return VAR_4;
}
