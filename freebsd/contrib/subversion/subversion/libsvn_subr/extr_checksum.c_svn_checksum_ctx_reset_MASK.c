
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int kind; int apr_ctx; } ;
typedef TYPE_1__ svn_checksum_ctx_t ;
typedef int apr_sha1_ctx_t ;
typedef int apr_md5_ctx_t ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;




 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

svn_error_t *
FUNC_6(svn_checksum_ctx_t *VAR_1)
{
  switch (VAR_1->kind)
    {
      case 129:
        FUNC_3(VAR_1->apr_ctx, 0, sizeof(apr_md5_ctx_t));
        FUNC_1(VAR_1->apr_ctx);
        break;

      case 128:
        FUNC_3(VAR_1->apr_ctx, 0, sizeof(apr_sha1_ctx_t));
        FUNC_2(VAR_1->apr_ctx);
        break;

      case 131:
        FUNC_4(VAR_1->apr_ctx);
        break;

      case 130:
        FUNC_5(VAR_1->apr_ctx);
        break;

      default:
        FUNC_0();
    }

  return VAR_0;
}
