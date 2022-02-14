
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
struct recode_write_baton {int * out; int pool; } ;
typedef int apr_pool_t ;
typedef int FILE ;


 struct recode_write_baton* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct recode_write_baton*,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_stream_t *
FUNC_4(FILE *VAR_1, apr_pool_t *VAR_2)
{
  struct recode_write_baton *VAR_3 =
    FUNC_0(VAR_2, sizeof(struct recode_write_baton));

  svn_stream_t *VAR_4 = FUNC_2(VAR_3, VAR_2);
  VAR_3->pool = FUNC_1(VAR_2);
  VAR_3->out = VAR_1;
  FUNC_3(VAR_4, VAR_0);
  return VAR_4;
}
