
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int ascii_cert; } ;
typedef TYPE_2__ svn_auth_ssl_server_cert_info_t ;
struct TYPE_10__ {int may_save; } ;
typedef TYPE_3__ svn_auth_cred_ssl_server_trust_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int * VAR_7 ;
 TYPE_3__* FUNC_1 (int *,int) ;
 int * FUNC_2 (int **,int ,char const*,char const*,int *) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void **VAR_8,
                                        void **VAR_9,
                                        void *VAR_10,
                                        apr_hash_t *VAR_11,
                                        const char *VAR_12,
                                        apr_pool_t *VAR_13)
{
  apr_uint32_t *VAR_14 = FUNC_5(VAR_11,
                                         VAR_4);
  const svn_auth_ssl_server_cert_info_t *VAR_15 =
    FUNC_5(VAR_11, VAR_3);
  apr_hash_t *VAR_16 = ((void*)0);
  const char *VAR_17;
  svn_error_t *VAR_18 = VAR_7;

  *VAR_8 = ((void*)0);
  *VAR_9 = ((void*)0);


  VAR_17 = FUNC_5(VAR_11, VAR_2);
  VAR_18 =
    FUNC_2(&VAR_16, VAR_1,
                              VAR_12, VAR_17, VAR_13);
  FUNC_4(VAR_18);
  if (! VAR_18 && VAR_16)
    {
      svn_string_t *VAR_19, *VAR_20, *VAR_21;
      apr_uint32_t VAR_22 = 0;

      VAR_19 = FUNC_5(VAR_16, VAR_5);
      VAR_20 = FUNC_7(VAR_15->ascii_cert, VAR_13);
      VAR_21 = FUNC_5(VAR_16, VAR_6);

      if (VAR_21)
        FUNC_0(FUNC_3(&VAR_22, VAR_21->data));



      if (VAR_19 &&
          FUNC_6(VAR_20, VAR_19) &&
          (*VAR_14 & ~VAR_22) == 0)
        {
          *VAR_14 = 0;
        }
    }


  if (! *VAR_14)
    {
      svn_auth_cred_ssl_server_trust_t *VAR_23 =
        FUNC_1(VAR_13, sizeof(*VAR_23));
      VAR_23->may_save = VAR_0;
      *VAR_8 = VAR_23;
    }

  return VAR_7;
}
