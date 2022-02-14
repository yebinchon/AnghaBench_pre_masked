
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int window_buffer; } ;
typedef TYPE_1__ svndiff_stream_baton_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  svndiff_stream_baton_t *VAR_4 = VAR_1;




  FUNC_0(VAR_4->window_buffer, VAR_2, *VAR_3);

  return VAR_0;
}
