
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct change_rev_prop_baton {int rev; int fs; int const* value; int name; int ** old_value_p; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int **,int ,int ,int ,int *,int *) ;
 int * FUNC_4 (int ,int ,int *,int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int const*) ;
 scalar_t__ FUNC_7 (int const*,int const*) ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_3, apr_pool_t *VAR_4)
{
  struct change_rev_prop_baton *VAR_5 = VAR_3;
  apr_hash_t *VAR_6;
  const svn_string_t *VAR_7;



  FUNC_0(FUNC_3(&VAR_6, VAR_5->fs, VAR_5->rev, VAR_2,
                                           VAR_4, VAR_4));
  VAR_7 = FUNC_5(VAR_6, VAR_5->name);

  if (VAR_5->old_value_p)
    {
      const svn_string_t *VAR_8 = *VAR_5->old_value_p;
      if ((!VAR_8 != !VAR_7)
          || (VAR_8 && VAR_7
              && !FUNC_7(VAR_8, VAR_7)))
        {

          return FUNC_2(VAR_0, ((void*)0),
                                   FUNC_1("revprop '%s' has unexpected value in "
                                     "filesystem"),
                                   VAR_5->name);
        }

    }


  if ((!VAR_7 && !VAR_5->value)
      || (VAR_7 && VAR_5->value
          && FUNC_7(VAR_7, VAR_5->value)))
    return VAR_1;

  FUNC_6(VAR_6, VAR_5->name, VAR_5->value);

  return FUNC_4(VAR_5->fs, VAR_5->rev, VAR_6, VAR_4);
}
