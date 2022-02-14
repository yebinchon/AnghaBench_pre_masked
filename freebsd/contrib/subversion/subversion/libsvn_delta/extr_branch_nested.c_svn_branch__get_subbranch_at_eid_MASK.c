
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_11__ {TYPE_1__* payload; } ;
typedef TYPE_2__ svn_element__content_t ;
struct TYPE_12__ {int txn; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {scalar_t__ is_subbranch_root; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 char* FUNC_1 (TYPE_3__*,int *) ;
 char* FUNC_2 (char const*,int,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__**,int,int *) ;
 TYPE_3__* FUNC_4 (int ,char const*,int *) ;

svn_error_t *
FUNC_5(svn_branch__state_t *VAR_1,
                                 svn_branch__state_t **VAR_2,
                                 int VAR_3,
                                 apr_pool_t *VAR_4)
{
  svn_element__content_t *VAR_5;

  FUNC_0(FUNC_3(VAR_1, &VAR_5, VAR_3, VAR_4));
  if (VAR_5 && VAR_5->payload->is_subbranch_root)
    {
      const char *VAR_6 = FUNC_1(VAR_1, VAR_4);
      const char *VAR_7 = FUNC_2(VAR_6, VAR_3,
                                                     VAR_4);

      *VAR_2 = FUNC_4(VAR_1->txn, VAR_7,
                                                      VAR_4);
    }
  else
    {
      *VAR_2 = ((void*)0);
    }
  return VAR_0;
}
