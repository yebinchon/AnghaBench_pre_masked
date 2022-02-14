
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int inner_stream; int context; } ;
typedef TYPE_1__ fnv1a_stream_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                    const char *VAR_2,
                    apr_size_t *VAR_3)
{
  fnv1a_stream_baton_t *VAR_4 = VAR_1;

  FUNC_0(FUNC_1(VAR_4->context, VAR_2, *VAR_3));
  FUNC_0(FUNC_2(VAR_4->inner_stream, VAR_2, VAR_3));

  return VAR_0;
}
