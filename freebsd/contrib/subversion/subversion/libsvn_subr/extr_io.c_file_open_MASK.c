
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
struct TYPE_3__ {int protection; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef int apr_fileperms_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int **,char const*,int,int ,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,int *) ;

__attribute__((used)) static apr_status_t
FUNC_4(apr_file_t **VAR_6,
          const char *VAR_7,
          apr_int32_t VAR_8,
          apr_fileperms_t VAR_9,
          svn_boolean_t VAR_10,
          apr_pool_t *VAR_11)
{
  apr_status_t VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11);

  if (VAR_10)
    {
      FUNC_1(VAR_12, FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_11));
    }
  return VAR_12;
}
