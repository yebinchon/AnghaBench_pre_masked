
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct TYPE_12__ {int crypto; } ;
typedef TYPE_2__ svn_crypto__ctx_t ;
typedef int svn_checksum_t ;
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int * VAR_9 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned char**,scalar_t__*,unsigned char const*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (int **,unsigned char const**,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_7 (int **,scalar_t__*,int ,int ,unsigned char const*,scalar_t__,int ,int ,int ,int ,int ,int *) ;
 unsigned char* FUNC_8 (int *,scalar_t__) ;
 int * FUNC_9 (TYPE_2__*,scalar_t__,char*) ;
 int FUNC_10 (unsigned char const**,TYPE_2__*,scalar_t__,int *) ;
 int FUNC_11 (int **,int ,unsigned char const*,scalar_t__,int *) ;
 int VAR_10 ;
 char* FUNC_12 (int *,int *) ;
 int * FUNC_13 (int ,int *,char*) ;
 int * FUNC_14 (int *) ;
 TYPE_1__* FUNC_15 (unsigned char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_16(const svn_string_t **VAR_11,
                                      const svn_string_t **VAR_12,
                                      const svn_string_t **VAR_13,
                                      const char **VAR_14,
                                      svn_crypto__ctx_t *VAR_15,
                                      const svn_string_t *VAR_16,
                                      apr_pool_t *VAR_17,
                                      apr_pool_t *VAR_18)
{
  return FUNC_13(VAR_8, ((void*)0),
                          "Cryptographic support is not available");

}
