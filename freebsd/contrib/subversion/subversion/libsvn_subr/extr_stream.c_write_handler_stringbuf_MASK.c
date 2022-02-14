
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct stringbuf_stream_baton {int str; } ;
typedef int apr_size_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  struct stringbuf_stream_baton *VAR_4 = VAR_1;

  FUNC_0(VAR_4->str, VAR_2, *VAR_3);
  return VAR_0;
}
