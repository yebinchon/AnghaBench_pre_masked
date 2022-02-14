
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct spillbuf_baton {int scratch_pool; int reader; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct spillbuf_baton *VAR_4 = VAR_1;

  FUNC_0(FUNC_2(VAR_3, VAR_4->reader, VAR_2, *VAR_3,
                                    VAR_4->scratch_pool));

  FUNC_1(VAR_4->scratch_pool);
  return VAR_0;
}
