
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_uintptr_t ;
typedef scalar_t__ apr_uint32_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ protection; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef scalar_t__ apr_fileperms_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int * FUNC_5 (TYPE_1__*,int ,int *,int *) ;
 int * FUNC_6 (int **,char const**,char const*,char const*,int *,int ,int *,int *) ;
 int FUNC_7 (char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(apr_fileperms_t *VAR_4,
                       const char *VAR_5,
                       apr_pool_t *VAR_6)
{

  static apr_fileperms_t VAR_7 = 0;






  if (VAR_7 == 0)
    {
      apr_finfo_t VAR_8;
      apr_file_t *VAR_9;
      const char *VAR_10, *VAR_11;
      apr_uint32_t VAR_12;
      svn_error_t *VAR_13;
      VAR_12 = ((apr_uint32_t)(apr_uintptr_t)VAR_6
                   + (apr_uint32_t)((apr_uintptr_t)VAR_6 / 4096)
                   + (apr_uint32_t)FUNC_2());
      VAR_10 = FUNC_1(VAR_6, "svn-%08x", VAR_12);

      FUNC_0(FUNC_6(&VAR_9, &VAR_11, VAR_5, VAR_10,
                                         ((void*)0), VAR_3,
                                         VAR_6, VAR_6));
      VAR_13 = FUNC_5(&VAR_8, VAR_0, VAR_9, VAR_6);
      VAR_13 = FUNC_3(VAR_13, FUNC_4(VAR_9, VAR_6));
      VAR_13 = FUNC_3(VAR_13, FUNC_7(VAR_11, VAR_2,
                                                              VAR_6));
      FUNC_0(VAR_13);
      *VAR_4 = VAR_8.protection;
      VAR_7 = VAR_8.protection;
    }
  else
    *VAR_4 = VAR_7;

  return VAR_1;
}
