
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_9__ {int len; int data; scalar_t__ is_atom; struct TYPE_9__* next; TYPE_2__* children; } ;
typedef TYPE_3__ svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_1__* next; } ;
struct TYPE_7__ {TYPE_3__* children; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_3__**,TYPE_3__ const*,int ) ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (char const**,int *,char const*,char const*,int *,int *) ;

svn_error_t *
FUNC_6(const char **VAR_3,
                                    const char **VAR_4,
                                    const char **VAR_5,
                                    svn_wc__db_t *VAR_6,
                                    const char *VAR_7,
                                    const svn_skel_t *VAR_8,
                                    apr_pool_t *VAR_9,
                                    apr_pool_t *VAR_10)
{
  svn_skel_t *VAR_11;
  const svn_skel_t *VAR_12;

  FUNC_0(FUNC_3(&VAR_11, VAR_8,
                                 VAR_2));

  if (!VAR_11)
    return FUNC_4(VAR_0, ((void*)0), FUNC_1("Conflict not set"));

  VAR_12 = VAR_11->children->next->children;

  if (VAR_4)
    {
      if (VAR_12->is_atom)
        {
          const char *VAR_13;

          VAR_13 = FUNC_2(VAR_10, VAR_12->data, VAR_12->len);
          FUNC_0(FUNC_5(VAR_4,
                                          VAR_6, VAR_7, VAR_13,
                                          VAR_9, VAR_10));
        }
      else
        *VAR_4 = ((void*)0);
    }
  VAR_12 = VAR_12->next;

  if (VAR_3)
    {
      if (VAR_12->is_atom)
        {
          const char *VAR_14;

          VAR_14 = FUNC_2(VAR_10, VAR_12->data, VAR_12->len);
          FUNC_0(FUNC_5(VAR_3,
                                          VAR_6, VAR_7, VAR_14,
                                          VAR_9, VAR_10));
        }
      else
        *VAR_3 = ((void*)0);
    }
  VAR_12 = VAR_12->next;

  if (VAR_5)
    {
      if (VAR_12->is_atom)
        {
          const char *VAR_15;

          VAR_15 = FUNC_2(VAR_10, VAR_12->data, VAR_12->len);
          FUNC_0(FUNC_5(VAR_5,
                                          VAR_6, VAR_7, VAR_15,
                                          VAR_9, VAR_10));
        }
      else
        *VAR_5 = ((void*)0);
    }

  return VAR_1;
}
