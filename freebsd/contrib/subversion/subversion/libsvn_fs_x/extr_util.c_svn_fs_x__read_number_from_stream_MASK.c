
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__**,char*,scalar_t__*,int *) ;

svn_error_t *
FUNC_6(apr_int64_t *VAR_2,
                                  svn_boolean_t *VAR_3,
                                  svn_stream_t *VAR_4,
                                  apr_pool_t *VAR_5)
{
  svn_stringbuf_t *VAR_6;
  svn_boolean_t VAR_7;
  svn_error_t *VAR_8;

  FUNC_0(FUNC_5(VAR_4, &VAR_6, "\n", &VAR_7, VAR_5));
  if (VAR_3)
    *VAR_3 = VAR_7;
  else
    if (VAR_7)
      return FUNC_3(VAR_0, ((void*)0), FUNC_1("Unexpected EOF"));

  if (!VAR_7)
    {
      VAR_8 = FUNC_2(VAR_2, VAR_6->data);
      if (VAR_8)
        return FUNC_4(VAR_0, VAR_8,
                                 FUNC_1("Number '%s' invalid or too large"),
                                 VAR_6->data);
    }

  return VAR_1;
}
