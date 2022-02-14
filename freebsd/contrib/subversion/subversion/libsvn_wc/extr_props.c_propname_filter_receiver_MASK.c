
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct propname_filter_baton_t {int receiver_baton; int (* receiver_func ) (int ,char const*,int *,int *) ;int propname; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_1,
                         const char *VAR_2,
                         apr_hash_t *VAR_3,
                         apr_pool_t *VAR_4)
{
  struct propname_filter_baton_t *VAR_5 = VAR_1;
  const svn_string_t *VAR_6 = FUNC_3(VAR_3, VAR_5->propname);

  if (VAR_6)
    {
      VAR_3 = FUNC_1(VAR_4);
      FUNC_4(VAR_3, VAR_5->propname, VAR_6);

      FUNC_0(VAR_5->receiver_func(VAR_5->receiver_baton, VAR_2, VAR_3,
                                 VAR_4));
    }

  return VAR_0;
}
