
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef size_t svn_checksum_kind_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (char*) ;
 char const** VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,scalar_t__) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (int **,size_t,char const*,int *) ;
 int * FUNC_5 (int ,int *,char*,char const*) ;

svn_error_t *
FUNC_6(const svn_checksum_t **VAR_6,
                         const char *VAR_7,
                         apr_pool_t *VAR_8,
                         apr_pool_t *VAR_9)
{
  svn_checksum_kind_t VAR_10;
  svn_checksum_t *VAR_11;


  apr_size_t VAR_12 = FUNC_2(VAR_3[0]);


  if (FUNC_2(VAR_7) <= VAR_12)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_1("Invalid prefix in checksum '%s'"),
                             VAR_7);

  for (VAR_10 = VAR_5; VAR_10 <= VAR_4; ++VAR_10)
    if (FUNC_3(VAR_3[VAR_10], VAR_7, VAR_12) == 0)
      {
        FUNC_0(FUNC_4(&VAR_11, VAR_10,
                                       VAR_7 + VAR_12, VAR_8));
        *VAR_6 = VAR_11;
        return VAR_2;
      }

  return FUNC_5(VAR_0, ((void*)0),
                           "Unknown checksum kind in '%s'", VAR_7);
}
