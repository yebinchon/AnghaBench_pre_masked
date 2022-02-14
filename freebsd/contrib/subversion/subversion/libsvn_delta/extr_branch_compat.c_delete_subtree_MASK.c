
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ action; int deleting_rev; scalar_t__ deleting; int changing_rev; } ;
typedef TYPE_1__ change_node_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 char const* FUNC_6 (int *,char const*) ;
 TYPE_1__* FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*,TYPE_1__*) ;
 char* FUNC_9 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t *VAR_5,
               const char *VAR_6,
               svn_revnum_t VAR_7)
{
  apr_pool_t *VAR_8 = FUNC_3(VAR_5);
  apr_pool_t *VAR_9 = VAR_8;
  change_node_t *VAR_10 = FUNC_7(VAR_5, VAR_6);

  if (VAR_10)
    {




       FUNC_0(VAR_10->action != VAR_1);
       if (VAR_10->action == VAR_0 && !VAR_10->deleting)
         {
           FUNC_8(VAR_5, VAR_6, ((void*)0));
           VAR_10 = ((void*)0);
         }
       else
         {
           VAR_10->action = VAR_1;
         }
    }
  else
    {

      VAR_10 = FUNC_5(VAR_8, sizeof(*VAR_10));
      VAR_10->action = VAR_1;
      VAR_10->changing_rev = VAR_2;
      VAR_10->deleting = VAR_4;
      VAR_10->deleting_rev = VAR_7;

      FUNC_8(VAR_5, FUNC_6(VAR_8, VAR_6), VAR_10);
    }


  {
    apr_hash_index_t *VAR_11;

    for (VAR_11 = FUNC_1(VAR_9, VAR_5);
         VAR_11; VAR_11 = FUNC_2(VAR_11))
      {
        const char *VAR_12 = FUNC_4(VAR_11);
        const char *VAR_13 = FUNC_9(VAR_6, VAR_12);

        if (VAR_13 && VAR_13[0])
          {
            FUNC_8(VAR_5, VAR_12, ((void*)0));
          }
      }
  }

  return VAR_3;
}
