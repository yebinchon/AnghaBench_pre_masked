
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_12__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_2__ apr_finfo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *,int *,int ,int *) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,char const*,int ,int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int **,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t **VAR_3,
              const char *VAR_4,
              apr_pool_t *VAR_5,
              apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;
  svn_stream_t *VAR_8;
  apr_finfo_t VAR_9;

  VAR_7 = FUNC_7(&VAR_9, VAR_4, VAR_0, VAR_6);

  if (VAR_7
      && (FUNC_0(VAR_7->apr_err)
          || FUNC_2(VAR_7->apr_err)))
    {
      FUNC_4(VAR_7);


      *VAR_3 = ((void*)0);
      return VAR_2;
    }
  else
    FUNC_1(VAR_7);



  if (VAR_9.size == 0)
    {
      *VAR_3 = FUNC_3(VAR_5);
      return VAR_2;
    }

  FUNC_1(FUNC_9(&VAR_8, VAR_4,
                                   VAR_6, VAR_6));
  *VAR_3 = FUNC_3(VAR_5);
  FUNC_1(FUNC_6(*VAR_3, VAR_8, VAR_1, VAR_5));

  return FUNC_5(FUNC_8(VAR_8));
}
