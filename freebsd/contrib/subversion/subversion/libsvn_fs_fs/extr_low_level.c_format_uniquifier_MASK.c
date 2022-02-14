
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_fs__id_part_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,char const*,char*) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int const*,int *) ;

__attribute__((used)) static const char *
FUNC_3(const svn_fs_fs__id_part_t *VAR_1,
                  apr_uint64_t VAR_2,
                  apr_pool_t *VAR_3)
{
  char VAR_4[VAR_0];
  const char *VAR_5;

  VAR_5 = FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_4, VAR_2);

  return FUNC_0(VAR_3, "%s/_%s", VAR_5, VAR_4);
}
