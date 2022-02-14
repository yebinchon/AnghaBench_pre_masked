
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_boolean_t ;
struct search_groups_baton {int pool; int match; int key; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int * FUNC_2 (char const*,char*,int ,int *) ;

__attribute__((used)) static svn_boolean_t FUNC_3(const char *VAR_2,
                                   const char *VAR_3,
                                   void *VAR_4,
                                   apr_pool_t *VAR_5)
{
  struct search_groups_baton *VAR_6 = VAR_4;
  apr_array_header_t *VAR_7;

  VAR_7 = FUNC_2(VAR_3, ",", VAR_1, VAR_5);
  if (FUNC_1(VAR_6->key, VAR_7))
    {

      VAR_6->match = FUNC_0(VAR_6->pool, VAR_2);
      return VAR_0;
    }
  else
    return VAR_1;
}
