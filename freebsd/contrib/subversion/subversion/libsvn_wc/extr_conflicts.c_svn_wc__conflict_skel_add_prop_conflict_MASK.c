
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_12__ {TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_11__ {TYPE_2__* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char const* FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__**,TYPE_2__*,char const*) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (char const*,TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__**,int const*,int *) ;
 int FUNC_11 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_12(svn_skel_t *VAR_2,
                                        svn_wc__db_t *VAR_3,
                                        const char *VAR_4,
                                        const char *VAR_5,
                                        const apr_hash_t *VAR_6,
                                        const apr_hash_t *VAR_7,
                                        const apr_hash_t *VAR_8,
                                        const apr_hash_t *VAR_9,
                                        apr_pool_t *VAR_10,
                                        apr_pool_t *VAR_11)
{
  svn_skel_t *VAR_12;
  svn_skel_t *VAR_13;
  svn_skel_t *VAR_14;
  svn_skel_t *VAR_15;
  apr_hash_index_t *VAR_16;

  FUNC_0(FUNC_6(&VAR_12, VAR_2,
                                 VAR_1));

  FUNC_1(!VAR_12);
  VAR_12 = FUNC_7(VAR_10);

  if (VAR_8)
    {
      FUNC_0(FUNC_10(&VAR_13, VAR_8, VAR_10));
      FUNC_8(VAR_13, VAR_12);
    }
  else
    FUNC_9("", VAR_12, VAR_10);

  if (VAR_6)
    {
      FUNC_0(FUNC_10(&VAR_13, VAR_6, VAR_10));
      FUNC_8(VAR_13, VAR_12);
    }
  else
    FUNC_9("", VAR_12, VAR_10);

  if (VAR_7)
    {
      FUNC_0(FUNC_10(&VAR_13, VAR_7,
                                         VAR_10));
      FUNC_8(VAR_13, VAR_12);
    }
  else
    FUNC_9("", VAR_12, VAR_10);

  VAR_14 = FUNC_7(VAR_10);
  for (VAR_16 = FUNC_2(VAR_11, (apr_hash_t *)VAR_9);
       VAR_16;
       VAR_16 = FUNC_3(VAR_16))
    {
      FUNC_9(FUNC_5(VAR_10, FUNC_4(VAR_16)),
                            VAR_14,
                            VAR_10);
    }
  FUNC_8(VAR_14, VAR_12);

  VAR_15 = FUNC_7(VAR_10);

  if (VAR_5)
    {
      const char *VAR_17;
      FUNC_0(FUNC_11(&VAR_17, VAR_3, VAR_4,
                                    VAR_5,
                                    VAR_10, VAR_11));

      FUNC_9(VAR_17, VAR_15, VAR_10);
    }



  FUNC_8(VAR_15, VAR_12);

  FUNC_9(VAR_1, VAR_12, VAR_10);


  FUNC_8(VAR_12, VAR_2->children->next);

  return VAR_0;
}
