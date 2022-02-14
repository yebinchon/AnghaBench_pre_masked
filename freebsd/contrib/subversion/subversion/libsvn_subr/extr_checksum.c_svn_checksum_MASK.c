
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {scalar_t__ digest; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int svn_checksum_kind_t ;
typedef int apr_uint32_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_sha1_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (unsigned char*,void const*,scalar_t__) ;
 int FUNC_2 (unsigned char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void const*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void const*,scalar_t__) ;
 int FUNC_7 (void const*,scalar_t__) ;
 TYPE_1__* FUNC_8 (int,int *) ;




 int * FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int) ;

svn_error_t *
FUNC_11(svn_checksum_t **VAR_2,
             svn_checksum_kind_t VAR_3,
             const void *VAR_4,
             apr_size_t VAR_5,
             apr_pool_t *VAR_6)
{
  apr_sha1_ctx_t VAR_7;

  FUNC_0(FUNC_10(VAR_3));
  *VAR_2 = FUNC_8(VAR_3, VAR_6);

  switch (VAR_3)
    {
      case 129:
        FUNC_1((unsigned char *)(*VAR_2)->digest, VAR_4, VAR_5);
        break;

      case 128:
        FUNC_3(&VAR_7);
        FUNC_4(&VAR_7, VAR_4, (unsigned int)VAR_5);
        FUNC_2((unsigned char *)(*VAR_2)->digest, &VAR_7);
        break;

      case 131:
        *(apr_uint32_t *)(*VAR_2)->digest
          = FUNC_5(FUNC_6(VAR_4, VAR_5));
        break;

      case 130:
        *(apr_uint32_t *)(*VAR_2)->digest
          = FUNC_5(FUNC_7(VAR_4, VAR_5));
        break;

      default:

        return FUNC_9(VAR_0, ((void*)0), ((void*)0));
    }

  return VAR_1;
}
