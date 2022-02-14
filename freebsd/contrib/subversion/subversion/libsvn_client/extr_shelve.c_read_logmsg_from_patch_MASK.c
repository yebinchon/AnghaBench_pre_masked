
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
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int **,char const*,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,TYPE_1__**,char*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char **VAR_4,
                       const char *VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  apr_file_t *VAR_8;
  svn_stream_t *VAR_9;
  svn_boolean_t VAR_10;
  svn_stringbuf_t *VAR_11;

  FUNC_0(FUNC_1(&VAR_8, VAR_5,
                           VAR_0, VAR_1, VAR_7));
  VAR_9 = FUNC_3(VAR_8, VAR_2 , VAR_7);
  FUNC_0(FUNC_4(VAR_9, &VAR_11, "\n", &VAR_10, VAR_6));
  FUNC_0(FUNC_2(VAR_9));
  *VAR_4 = VAR_11->data;
  return VAR_3;
}
