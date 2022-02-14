
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int protection; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef int apr_fileperms_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int*,char const*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_file_t *VAR_2,
                         apr_fileperms_t *VAR_3,
                         const char *VAR_4,
                         apr_pool_t *VAR_5)
{
  apr_finfo_t VAR_6;
  apr_fileperms_t VAR_7;

  FUNC_0(FUNC_1(&VAR_7, VAR_4, VAR_5));
  FUNC_0(FUNC_2(&VAR_6, VAR_0, VAR_2, VAR_5));


  *VAR_3 = VAR_7 | VAR_6.protection;
  return VAR_1;
}
