
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;
struct TYPE_7__ {int kind; int apr_ctx; } ;
typedef TYPE_2__ svn_checksum_ctx_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int *) ;




 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

svn_error_t *
FUNC_7(svn_checksum_t **VAR_2,
                   const svn_checksum_ctx_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  *VAR_2 = FUNC_3(VAR_3->kind, VAR_4);

  switch (VAR_3->kind)
    {
      case 129:
        FUNC_0((unsigned char *)(*VAR_2)->digest, VAR_3->apr_ctx);
        break;

      case 128:
        FUNC_1((unsigned char *)(*VAR_2)->digest, VAR_3->apr_ctx);
        break;

      case 131:
        *(apr_uint32_t *)(*VAR_2)->digest
          = FUNC_2(FUNC_5(VAR_3->apr_ctx));
        break;

      case 130:
        *(apr_uint32_t *)(*VAR_2)->digest
          = FUNC_2(FUNC_6(VAR_3->apr_ctx));
        break;

      default:

        return FUNC_4(VAR_0, ((void*)0), ((void*)0));
    }

  return VAR_1;
}
