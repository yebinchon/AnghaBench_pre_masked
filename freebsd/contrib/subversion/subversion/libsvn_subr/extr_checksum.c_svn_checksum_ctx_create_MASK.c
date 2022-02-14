
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_checksum_kind_t ;
struct TYPE_3__ {int kind; void* apr_ctx; } ;
typedef TYPE_1__ svn_checksum_ctx_t ;
typedef int apr_sha1_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_md5_ctx_t ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (void*) ;




 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;

svn_checksum_ctx_t *
FUNC_6(svn_checksum_kind_t VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_checksum_ctx_t *VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2));

  VAR_2->kind = VAR_0;
  switch (VAR_0)
    {
      case 129:
        VAR_2->apr_ctx = FUNC_2(VAR_1, sizeof(apr_md5_ctx_t));
        FUNC_1(VAR_2->apr_ctx);
        break;

      case 128:
        VAR_2->apr_ctx = FUNC_2(VAR_1, sizeof(apr_sha1_ctx_t));
        FUNC_3(VAR_2->apr_ctx);
        break;

      case 131:
        VAR_2->apr_ctx = FUNC_4(VAR_1);
        break;

      case 130:
        VAR_2->apr_ctx = FUNC_5(VAR_1);
        break;

      default:
        FUNC_0();
    }

  return VAR_2;
}
