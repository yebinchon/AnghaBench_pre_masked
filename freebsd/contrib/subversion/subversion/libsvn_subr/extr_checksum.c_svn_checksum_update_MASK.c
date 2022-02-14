
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int kind; int apr_ctx; } ;
typedef TYPE_1__ svn_checksum_ctx_t ;
typedef scalar_t__ apr_size_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,void const*,scalar_t__) ;
 int FUNC_1 (int ,void const*,unsigned int) ;




 int * FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,void const*,scalar_t__) ;
 int FUNC_4 (int ,void const*,scalar_t__) ;

svn_error_t *
FUNC_5(svn_checksum_ctx_t *VAR_2,
                    const void *VAR_3,
                    apr_size_t VAR_4)
{
  switch (VAR_2->kind)
    {
      case 129:
        FUNC_0(VAR_2->apr_ctx, VAR_3, VAR_4);
        break;

      case 128:
        FUNC_1(VAR_2->apr_ctx, VAR_3, (unsigned int)VAR_4);
        break;

      case 131:
        FUNC_3(VAR_2->apr_ctx, VAR_3, VAR_4);
        break;

      case 130:
        FUNC_4(VAR_2->apr_ctx, VAR_3, VAR_4);
        break;

      default:

        return FUNC_2(VAR_0, ((void*)0), ((void*)0));
    }

  return VAR_1;
}
