
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int ascii_cert; } ;
typedef TYPE_1__ svn_auth_ssl_server_cert_info_t ;
struct TYPE_4__ {scalar_t__ accepted_failures; int may_save; } ;
typedef TYPE_2__ svn_auth_cred_ssl_server_trust_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char const*,char const*,int *) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,char*,unsigned long) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_boolean_t *VAR_7,
                                       void *VAR_8,
                                       void *VAR_9,
                                       apr_hash_t *VAR_10,
                                       const char *VAR_11,
                                       apr_pool_t *VAR_12)
{
  svn_auth_cred_ssl_server_trust_t *VAR_13 = VAR_8;
  const svn_auth_ssl_server_cert_info_t *VAR_14;
  apr_hash_t *VAR_15 = ((void*)0);
  const char *VAR_16;

  if (! VAR_13->may_save)
    return VAR_5;

  VAR_16 = FUNC_3(VAR_10, VAR_1);

  VAR_14 = FUNC_3(VAR_10, VAR_2);

  VAR_15 = FUNC_1(VAR_12);
  FUNC_4(VAR_15, VAR_3,
                FUNC_5(VAR_14->ascii_cert, VAR_12));
  FUNC_4(VAR_15, VAR_4,
                FUNC_6(VAR_12, "%lu",
                                   (unsigned long)VAR_13->accepted_failures));

  FUNC_0(FUNC_2(VAR_15,
                                     VAR_0,
                                     VAR_11,
                                     VAR_16,
                                     VAR_12));
  *VAR_7 = VAR_6;
  return VAR_5;
}
