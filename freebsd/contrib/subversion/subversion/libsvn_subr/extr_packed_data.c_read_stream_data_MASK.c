
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t len; char* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_uint64_t ;
typedef size_t apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (char*,size_t,TYPE_1__*,size_t) ;
 int FUNC_3 (int *,char*,size_t*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_stream_t *VAR_1,
                 apr_size_t VAR_2,
                 svn_stringbuf_t *VAR_3,
                 svn_stringbuf_t *VAR_4)
{
  apr_uint64_t VAR_5;
  apr_size_t VAR_6;

  FUNC_0(FUNC_1(VAR_1, &VAR_5));
  VAR_6 = (apr_size_t)VAR_5;

  FUNC_4(VAR_4, VAR_6);
  VAR_4->len = VAR_6;
  FUNC_0(FUNC_3(VAR_1, VAR_4->data, &VAR_4->len));
  VAR_4->data[VAR_6] = '\0';

  FUNC_0(FUNC_2(VAR_4->data, VAR_4->len,
                               VAR_3, VAR_2));

  return VAR_0;
}
