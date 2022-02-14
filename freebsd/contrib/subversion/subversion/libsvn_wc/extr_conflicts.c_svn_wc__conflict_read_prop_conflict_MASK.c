
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_6__ {scalar_t__ is_atom; struct TYPE_6__* next; int len; int data; struct TYPE_6__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__**,TYPE_1__ const*,int ) ;
 int * FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int **,TYPE_1__ const*,int *) ;
 int FUNC_8 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_9(const char **VAR_3,
                                    apr_hash_t **VAR_4,
                                    apr_hash_t **VAR_5,
                                    apr_hash_t **VAR_6,
                                    apr_hash_t **VAR_7,
                                    svn_wc__db_t *VAR_8,
                                    const char *VAR_9,
                                    const svn_skel_t *VAR_10,
                                    apr_pool_t *VAR_11,
                                    apr_pool_t *VAR_12)
{
  svn_skel_t *VAR_13;
  const svn_skel_t *VAR_14;

  FUNC_0(FUNC_4(&VAR_13, VAR_10,
                                 VAR_2));

  if (!VAR_13)
    return FUNC_5(VAR_0, ((void*)0), FUNC_1("Conflict not set"));

  VAR_14 = VAR_13->children;

  VAR_14 = VAR_14->next;


  if (VAR_3)
    {
      const char *VAR_15;

      if (VAR_14->children && VAR_14->children->is_atom)
        {
          VAR_15 = FUNC_3(VAR_11, VAR_14->children->data,
                                        VAR_14->children->len);

          FUNC_0(FUNC_8(VAR_3, VAR_8, VAR_9,
                                          VAR_15,
                                          VAR_11, VAR_12));
        }
      else
        *VAR_3 = ((void*)0);
    }
  VAR_14 = VAR_14->next;


  if (VAR_7)
    {
      const svn_skel_t *VAR_16;
      *VAR_7 = FUNC_2(VAR_11);

      for (VAR_16 = VAR_14->children; VAR_16; VAR_16 = VAR_16->next)
        {
          FUNC_6(*VAR_7,
                        FUNC_3(VAR_11, VAR_16->data, VAR_16->len),
                        "");
        }
    }
  VAR_14 = VAR_14->next;


  if (VAR_5)
    {
      if (VAR_14->is_atom)
        *VAR_5 = FUNC_2(VAR_11);
      else
        FUNC_0(FUNC_7(VAR_5, VAR_14, VAR_11));
    }
  VAR_14 = VAR_14->next;


  if (VAR_4)
    {
      if (VAR_14->is_atom)
        *VAR_4 = FUNC_2(VAR_11);
      else
        FUNC_0(FUNC_7(VAR_4, VAR_14, VAR_11));
    }
  VAR_14 = VAR_14->next;


  if (VAR_6)
    {
      if (VAR_14->is_atom)
        *VAR_6 = FUNC_2(VAR_11);
      else
        FUNC_0(FUNC_7(VAR_6, VAR_14, VAR_11));
    }

  return VAR_1;
}
