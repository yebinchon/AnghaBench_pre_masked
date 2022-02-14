
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (int *,TYPE_1__**,int ,int *,int *) ;

svn_error_t *
FUNC_3(const char **VAR_4,
                            apr_pool_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  svn_stringbuf_t *VAR_7 = ((void*)0);
  svn_stream_t *VAR_8 = ((void*)0);
  svn_boolean_t VAR_9 = VAR_1;

  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_6));
  FUNC_0(FUNC_2(VAR_8, &VAR_7, VAR_0, &VAR_9, VAR_5));

  *VAR_4 = VAR_7->data;

  return VAR_2;
}
