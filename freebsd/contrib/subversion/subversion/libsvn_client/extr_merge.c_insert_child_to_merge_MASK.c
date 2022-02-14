
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_client__merge_path_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *,int const**,int) ;
 int FUNC_2 (int *,int const**,int ) ;

__attribute__((used)) static void
FUNC_3(apr_array_header_t *VAR_1,
                      const svn_client__merge_path_t *VAR_2,
                      apr_pool_t *VAR_3)
{
  int VAR_4;
  const svn_client__merge_path_t *VAR_5;


  VAR_4 =
    FUNC_2(VAR_1, &VAR_2,
                                  VAR_0);

  VAR_5 = FUNC_0(VAR_2, VAR_3);
  FUNC_1(VAR_1, &VAR_5, VAR_4);
}
