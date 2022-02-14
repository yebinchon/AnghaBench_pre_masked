
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_10__ {int encoding; scalar_t__ message; TYPE_1__* filedata; } ;
typedef TYPE_3__ svn_cl__opt_state_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {scalar_t__ len; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int ,int *,int ) ;
 TYPE_2__* FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (TYPE_2__**,int *,int *,TYPE_2__*,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char **VAR_3, svn_client_ctx_t *VAR_4,
            svn_cl__opt_state_t *VAR_5, apr_pool_t *VAR_6)
{
  svn_string_t *VAR_7;

  if (VAR_5->filedata)
    {

      if (FUNC_2(VAR_5->filedata->data) < VAR_5->filedata->len)
        {


          return FUNC_3(VAR_1, ((void*)0),
                                  FUNC_1("Lock comment contains a zero byte"));
        }
      VAR_7 = FUNC_4(VAR_5->filedata->data, VAR_6);

    }
  else if (VAR_5->message)
    {

      VAR_7 = FUNC_4(VAR_5->message, VAR_6);
    }
  else
    {
      *VAR_3 = ((void*)0);
      return VAR_2;
    }


  FUNC_0(FUNC_5(&VAR_7, ((void*)0), ((void*)0),
                                      VAR_7, VAR_5->encoding,
                                      VAR_0, VAR_6, VAR_6));
  *VAR_3 = VAR_7->data;

  return VAR_2;
}
