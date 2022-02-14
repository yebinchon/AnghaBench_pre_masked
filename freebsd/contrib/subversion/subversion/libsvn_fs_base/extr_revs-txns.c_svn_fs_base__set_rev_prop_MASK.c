
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ proplist; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__**,char const**,int *,int ,int *,int *) ;
 int * FUNC_4 (int *,TYPE_1__*,char const*,int *,int *) ;
 int * FUNC_5 (int ,int *,int ,char const*) ;
 int * FUNC_6 (scalar_t__,char const*) ;
 int FUNC_7 (scalar_t__,char const*,int const*) ;
 scalar_t__ FUNC_8 (int const*,int const*) ;

svn_error_t *
FUNC_9(svn_fs_t *VAR_2,
                          svn_revnum_t VAR_3,
                          const char *VAR_4,
                          const svn_string_t *const *VAR_5,
                          const svn_string_t *VAR_6,
                          trail_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  transaction_t *VAR_9;
  const char *VAR_10;
  const svn_string_t *VAR_11;

  FUNC_0(FUNC_3(&VAR_9, &VAR_10, VAR_2, VAR_3, VAR_7, VAR_8));
  VAR_11 = FUNC_6(VAR_9->proplist, VAR_4);


  if ((! VAR_9->proplist) && (! VAR_6))
    return VAR_1;


  if (! VAR_9->proplist)
    VAR_9->proplist = FUNC_2(VAR_8);


  if (VAR_5)
    {
      const svn_string_t *VAR_12 = *VAR_5;
      if ((!VAR_12 != !VAR_11)
          || (VAR_12 && VAR_11
              && !FUNC_8(VAR_12, VAR_11)))
        {

          return FUNC_5(VAR_0, ((void*)0),
                                   FUNC_1("revprop '%s' has unexpected value in "
                                     "filesystem"),
                                   VAR_4);
        }

    }


  if ((!VAR_11 && !VAR_6)
      || (VAR_11 && VAR_6
          && FUNC_8(VAR_11, VAR_6)))
    return VAR_1;

  FUNC_7(VAR_9->proplist, VAR_4, VAR_6);


  return FUNC_4(VAR_2, VAR_9, VAR_10, VAR_7, VAR_8);
}
