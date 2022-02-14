
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_2__ {int path; scalar_t__ include_merged_revisions; int end; int start; } ;
typedef TYPE_1__ blame_context_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*,int ) ;
 int FUNC_4 (int *,int *,char*,char*,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(serf_bucket_t **VAR_3,
                      void *VAR_4,
                      serf_bucket_alloc_t *VAR_5,
                      apr_pool_t *VAR_6 ,
                      apr_pool_t *VAR_7)
{
  serf_bucket_t *VAR_8;
  blame_context_t *VAR_9 = VAR_4;

  VAR_8 = FUNC_1(VAR_5);

  FUNC_4(VAR_8, VAR_5,
                                    "S:file-revs-report",
                                    "xmlns:S", VAR_2,
                                    VAR_1);

  FUNC_5(VAR_8,
                               "S:start-revision", FUNC_0(VAR_6, VAR_9->start),
                               VAR_5);

  FUNC_5(VAR_8,
                               "S:end-revision", FUNC_0(VAR_6, VAR_9->end),
                               VAR_5);

  if (VAR_9->include_merged_revisions)
    {
      FUNC_3(VAR_8, VAR_5,
                                         "S:include-merged-revisions", VAR_1);
    }

  FUNC_5(VAR_8,
                               "S:path", VAR_9->path,
                               VAR_5);

  FUNC_2(VAR_8, VAR_5,
                                     "S:file-revs-report");

  *VAR_3 = VAR_8;
  return VAR_0;
}
