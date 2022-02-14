
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int crypto; } ;
typedef TYPE_2__ svn_crypto__ctx_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_crypto_key_t ;
typedef int apr_crypto_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char**,scalar_t__*,unsigned char*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (unsigned char*,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int **,scalar_t__*,unsigned char*,int *,int *) ;
 scalar_t__ FUNC_5 (int **,scalar_t__*,scalar_t__,scalar_t__,unsigned char*,scalar_t__,int ,int ,int ,int ,int ,int *) ;
 unsigned char* FUNC_6 (int *,scalar_t__) ;
 char* FUNC_7 (int *,char const*,scalar_t__) ;
 int * FUNC_8 (TYPE_2__*,scalar_t__,char*) ;
 int * FUNC_9 (int ,int *,char*) ;
 int * FUNC_10 (int *) ;

svn_error_t *
FUNC_11(const char **VAR_10,
                             svn_crypto__ctx_t *VAR_11,
                             const svn_string_t *VAR_12,
                             const svn_string_t *VAR_13,
                             const svn_string_t *VAR_14,
                             const svn_string_t *VAR_15,
                             apr_pool_t *VAR_16,
                             apr_pool_t *VAR_17)
{
  return FUNC_9(VAR_8, ((void*)0),
                          "Cryptographic support is not available");

}
