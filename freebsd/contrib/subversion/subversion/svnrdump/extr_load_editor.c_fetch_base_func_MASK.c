
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct revision_baton {TYPE_1__* pb; scalar_t__ rev; } ;
typedef int apr_pool_t ;
struct TYPE_9__ {int aux_session; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_4 (int ,char const*,scalar_t__,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const**,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(const char **VAR_3,
                void *VAR_4,
                const char *VAR_5,
                svn_revnum_t VAR_6,
                apr_pool_t *VAR_7,
                apr_pool_t *VAR_8)
{
  struct revision_baton *VAR_9 = VAR_4;
  svn_stream_t *VAR_10;
  svn_error_t *VAR_11;

  if (! FUNC_1(VAR_6))
    VAR_6 = VAR_9->rev - 1;

  FUNC_0(FUNC_6(&VAR_10, VAR_3, ((void*)0),
                                 VAR_2,
                                 VAR_7, VAR_8));

  VAR_11 = FUNC_4(VAR_9->pb->aux_session, VAR_5, VAR_6,
                        VAR_10, ((void*)0), ((void*)0), VAR_8);
  if (VAR_11 && VAR_11->apr_err == VAR_0)
    {
      FUNC_2(VAR_11);
      FUNC_0(FUNC_5(VAR_10));

      *VAR_3 = ((void*)0);
      return VAR_1;
    }
  else if (VAR_11)
    return FUNC_3(VAR_11);

  FUNC_0(FUNC_5(VAR_10));

  return VAR_1;
}
