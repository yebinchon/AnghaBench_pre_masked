
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {TYPE_1__* lock; } ;
typedef TYPE_2__ lock_ctx_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ comment; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,char*,int ) ;
 int FUNC_3 (int *,int *,char*,char*,...) ;
 int FUNC_4 (int *,char*,scalar_t__,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(serf_bucket_t **VAR_2,
                 void *VAR_3,
                 serf_bucket_alloc_t *VAR_4,
                 apr_pool_t *VAR_5 ,
                 apr_pool_t *VAR_6)
{
  lock_ctx_t *VAR_7 = VAR_3;
  serf_bucket_t *VAR_8;

  VAR_8 = FUNC_0(VAR_4);

  FUNC_5(VAR_8, VAR_4);
  FUNC_3(VAR_8, VAR_4, "lockinfo",
                                    "xmlns", "DAV:",
                                    VAR_1);

  FUNC_3(VAR_8, VAR_4, "lockscope", VAR_1);
  FUNC_2(VAR_8, VAR_4, "exclusive", VAR_1);
  FUNC_1(VAR_8, VAR_4, "lockscope");

  FUNC_3(VAR_8, VAR_4, "locktype", VAR_1);
  FUNC_2(VAR_8, VAR_4, "write", VAR_1);
  FUNC_1(VAR_8, VAR_4, "locktype");

  if (VAR_7->lock->comment)
    {
      FUNC_4(VAR_8, "owner", VAR_7->lock->comment,
                                   VAR_4);
    }

  FUNC_1(VAR_8, VAR_4, "lockinfo");

  *VAR_2 = VAR_8;
  return VAR_0;
}
