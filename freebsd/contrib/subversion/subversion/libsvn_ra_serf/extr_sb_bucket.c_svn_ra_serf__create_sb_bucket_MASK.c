
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_spillbuf_t ;
struct sbb_baton {int scratch_pool; int * holding; int * spillbuf; } ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,struct sbb_baton*) ;
 struct sbb_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

serf_bucket_t *
FUNC_3(svn_spillbuf_t *VAR_1,
                              serf_bucket_alloc_t *VAR_2,
                              apr_pool_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  struct sbb_baton *VAR_5;

  VAR_5 = FUNC_1(VAR_2, sizeof(*VAR_5));
  VAR_5->spillbuf = VAR_1;
  VAR_5->holding = ((void*)0);
  VAR_5->scratch_pool = FUNC_2(VAR_3);

  return FUNC_0(&VAR_0, VAR_2, VAR_5);
}
