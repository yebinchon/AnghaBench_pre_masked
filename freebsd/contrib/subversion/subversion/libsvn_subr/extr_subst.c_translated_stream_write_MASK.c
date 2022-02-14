
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct translated_stream_baton {int iterpool; int out_baton; int stream; int written; } ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,char const*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                        const char *VAR_2,
                        apr_size_t *VAR_3)
{
  struct translated_stream_baton *VAR_4 = VAR_1;
  FUNC_0(VAR_4->iterpool);

  VAR_4->written = VAR_0;
  return FUNC_1(VAR_4->stream, VAR_4->out_baton, VAR_2, *VAR_3, VAR_4->iterpool);
}
