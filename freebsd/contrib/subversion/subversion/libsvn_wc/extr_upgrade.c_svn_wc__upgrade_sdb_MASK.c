
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
struct bump_baton {char const* wcroot_abspath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,int *) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ,int,...) ;
 int FUNC_6 (int*,int *,int *) ;
 int FUNC_7 (int *,int ,struct bump_baton*,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char const*,int *) ;

svn_error_t *
FUNC_11(int *VAR_7,
                    const char *VAR_8,
                    svn_sqlite__db_t *VAR_9,
                    int VAR_10,
                    apr_pool_t *VAR_11)
{
  struct bump_baton VAR_12;

  VAR_12.wcroot_abspath = VAR_8;

  if (VAR_10 < VAR_2 )
    return FUNC_5(VAR_0, ((void*)0),
                             FUNC_3("Working copy '%s' is too old (format %d, "
                               "created by Subversion %s)"),
                             FUNC_4(VAR_8,
                                                    VAR_11),
                             VAR_10,
                             FUNC_9(VAR_10));


  if (VAR_10 < 19)
    return FUNC_5(VAR_0, ((void*)0),
                             FUNC_3("Working copy '%s' is an old development "
                               "version (format %d); to upgrade it, "
                               "use a format 18 client, then "
                               "use 'tools/dev/wc-ng/bump-to-19.py', then "
                               "use the current client"),
                             FUNC_4(VAR_8,
                                                    VAR_11),
                             VAR_10);
  else if (VAR_10 < 29)
    return FUNC_5(VAR_0, ((void*)0),
                             FUNC_3("Working copy '%s' is an old development "
                               "version (format %d); to upgrade it, "
                               "use a Subversion 1.7-1.9 client, then "
                               "use the current client"),
                             FUNC_4(VAR_8,
                                                    VAR_11),
                             VAR_10);






  switch (VAR_10)
    {
      case 29:
        FUNC_0(FUNC_7(VAR_9, VAR_4, &VAR_12,
                                             VAR_11));
        *VAR_7 = 30;

      case 30:
        FUNC_0(FUNC_7(VAR_9, VAR_5, &VAR_12,
                                             VAR_11));
        *VAR_7 = 31;
      case 128:

        *VAR_7 = 128;

        FUNC_2(
            FUNC_8(VAR_9, VAR_11),
            VAR_9);
    }
  FUNC_10(VAR_8, VAR_11);

  return VAR_1;
}
