
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct mark_apr {int off; } ;
struct baton_apr {int pool; int file; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct mark_apr* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1, svn_stream_mark_t **VAR_2, apr_pool_t *VAR_3)
{
  struct baton_apr *VAR_4 = VAR_1;
  struct mark_apr *VAR_5;

  VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_5));
  FUNC_0(FUNC_2(&VAR_5->off, VAR_4->file, VAR_4->pool));
  *VAR_2 = (svn_stream_mark_t *)VAR_5;
  return VAR_0;
}
