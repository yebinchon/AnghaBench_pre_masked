
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
struct TYPE_4__ {int inner_baton; int * (* inner_handler ) (int *,int *,int ,int *) ;scalar_t__ read_headers; int pool; TYPE_1__* lock; } ;
typedef TYPE_2__ lock_info_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int creation_date; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(serf_request_t *VAR_3,
            serf_bucket_t *VAR_4,
            void *VAR_5,
            apr_pool_t *VAR_6)
{
  lock_info_t *VAR_7 = VAR_5;

  if (!VAR_7->read_headers)
    {
      serf_bucket_t *VAR_8;
      const char *VAR_9;

      VAR_8 = FUNC_3(VAR_4);

      VAR_9 = FUNC_2(VAR_8, VAR_1);
      if (VAR_9)
        {
          VAR_7->lock->owner = FUNC_1(VAR_7->pool, VAR_9);
        }

      VAR_9 = FUNC_2(VAR_8, VAR_0);
      if (VAR_9)
        {
          FUNC_0(FUNC_5(&VAR_7->lock->creation_date, VAR_9,
                                        VAR_7->pool));
        }

      VAR_7->read_headers = VAR_2;
    }

  return VAR_7->inner_handler(VAR_3, VAR_4, VAR_7->inner_baton, VAR_6);
}
