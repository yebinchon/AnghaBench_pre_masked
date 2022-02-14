
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int stream; int errfunc_baton; int (* errfunc ) (int ,int *) ;} ;
typedef TYPE_1__ stream_bucket_ctx_t ;
typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*,scalar_t__*) ;

__attribute__((used)) static apr_status_t
FUNC_4(void *VAR_3, apr_size_t VAR_4, char *VAR_5, apr_size_t *VAR_6)
{
  stream_bucket_ctx_t *VAR_7 = VAR_3;
  svn_error_t *VAR_8;

  *VAR_6 = VAR_4;

  VAR_8 = FUNC_3(VAR_7->stream, VAR_5, VAR_6);
  if (VAR_8)
    {
      if (VAR_7->errfunc)
        VAR_7->errfunc(VAR_7->errfunc_baton, VAR_8);
      FUNC_1(VAR_8);

      return VAR_2;
    }

  if (*VAR_6 == VAR_4)
    {
      return VAR_1;
    }
  else
    {
      FUNC_1(FUNC_2(VAR_7->stream));
      return VAR_0;
    }
}
