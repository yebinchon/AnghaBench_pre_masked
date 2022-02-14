
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_2__ {int end_rev; int start_rev; int peg_revision; int path; } ;
typedef TYPE_1__ gls_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t **VAR_3,
                void *VAR_4,
                serf_bucket_alloc_t *VAR_5,
                apr_pool_t *VAR_6 ,
                apr_pool_t *VAR_7)
{
  serf_bucket_t *VAR_8;
  gls_context_t *VAR_9 = VAR_4;

  VAR_8 = FUNC_1(VAR_5);

  FUNC_3(VAR_8, VAR_5,
                                    "S:get-location-segments",
                                    "xmlns:S", VAR_2,
                                    VAR_1);

  FUNC_4(VAR_8,
                               "S:path", VAR_9->path,
                               VAR_5);

  FUNC_4(VAR_8,
                               "S:peg-revision",
                               FUNC_0(VAR_6, VAR_9->peg_revision),
                               VAR_5);

  FUNC_4(VAR_8,
                               "S:start-revision",
                               FUNC_0(VAR_6, VAR_9->start_rev),
                               VAR_5);

  FUNC_4(VAR_8,
                               "S:end-revision",
                               FUNC_0(VAR_6, VAR_9->end_rev),
                               VAR_5);

  FUNC_2(VAR_8, VAR_5,
                                     "S:get-location-segments");

  *VAR_3 = VAR_8;
  return VAR_0;
}
