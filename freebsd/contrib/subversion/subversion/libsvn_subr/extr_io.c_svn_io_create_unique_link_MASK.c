
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (int *,char*,char const*,...) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_8 (char const**,char const*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int * FUNC_10 (int ,int *,int ) ;
 int * FUNC_11 (int ,int *,int ,int ) ;
 int * FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (char const*,char const*) ;

svn_error_t *
FUNC_14(const char **VAR_5,
                          const char *VAR_6,
                          const char *VAR_7,
                          const char *VAR_8,
                          apr_pool_t *VAR_9)
{
  return FUNC_10(VAR_3, ((void*)0),
                          FUNC_4("Symbolic links are not supported on this "
                            "platform"));

}
