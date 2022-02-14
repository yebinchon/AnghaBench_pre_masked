
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct dump_filter_baton_t {scalar_t__ do_exclude; int prefixes; scalar_t__ glob; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_1,
                 svn_fs_root_t *VAR_2,
                 const char *VAR_3,
                 void *VAR_4,
                 apr_pool_t *VAR_5)
{
  struct dump_filter_baton_t *VAR_6 = VAR_4;
  const svn_boolean_t VAR_7 =
    (VAR_6->glob
     ? FUNC_1(VAR_3, VAR_6->prefixes)
     : FUNC_0(VAR_6->prefixes, VAR_3));

  *VAR_1 = VAR_6->do_exclude ? !VAR_7 : VAR_7;
  return VAR_0;
}
