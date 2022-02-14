
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct revision_report_t {int send_deltas; int low_water_mark; int revision; scalar_t__ include_path; } ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*,char*,int ,int ) ;
 int FUNC_4 (int *,char*,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(serf_bucket_t **VAR_3,
                   void *VAR_4,
                   serf_bucket_alloc_t *VAR_5,
                   apr_pool_t *VAR_6 ,
                   apr_pool_t *VAR_7)
{
  struct revision_report_t *VAR_8 = VAR_4;
  serf_bucket_t *VAR_9;

  VAR_9 = FUNC_1(VAR_5);

  FUNC_3(VAR_9, VAR_5,
                                    "S:replay-report",
                                    "xmlns:S", VAR_2,
                                    VAR_1);



  if (VAR_8->include_path)
    {
      FUNC_4(VAR_9,
                                   "S:include-path",
                                   VAR_8->include_path,
                                   VAR_5);
    }
  else
    {
      FUNC_4(VAR_9,
                                   "S:revision",
                                   FUNC_0(VAR_6, VAR_8->revision),
                                   VAR_5);
    }
  FUNC_4(VAR_9,
                               "S:low-water-mark",
                               FUNC_0(VAR_6, VAR_8->low_water_mark),
                               VAR_5);

  FUNC_4(VAR_9,
                               "S:send-deltas",
                               FUNC_0(VAR_6, VAR_8->send_deltas),
                               VAR_5);

  FUNC_2(VAR_9, VAR_5, "S:replay-report");

  *VAR_3 = VAR_9;
  return VAR_0;
}
