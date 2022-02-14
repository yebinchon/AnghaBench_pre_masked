
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int * crypto; } ;
typedef TYPE_1__ svn_crypto__ctx_t ;
typedef int apu_err_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_crypto_t ;
typedef int apr_crypto_driver_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const**,char*,int *,int const**,int *) ;
 scalar_t__ FUNC_3 (int **,int const*,int *,int *) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 int * FUNC_5 (scalar_t__,int const*) ;
 int * FUNC_6 (scalar_t__,int *,char*) ;

svn_error_t *
FUNC_7(svn_crypto__ctx_t **VAR_4,
                           apr_pool_t *VAR_5)
{
  return FUNC_6(VAR_2, ((void*)0),
                          "Cryptographic support is not available");

}
