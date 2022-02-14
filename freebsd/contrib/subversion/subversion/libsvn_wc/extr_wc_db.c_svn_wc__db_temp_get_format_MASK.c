
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int format; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_8(int *VAR_3,
                           svn_wc__db_t *VAR_4,
                           const char *VAR_5,
                           apr_pool_t *VAR_6)
{
  svn_wc__db_wcroot_t *VAR_7;
  const char *VAR_8;
  svn_error_t *VAR_9;

  FUNC_0(FUNC_2(VAR_5));


  VAR_9 = FUNC_7(&VAR_7, &VAR_8, VAR_4,
                                VAR_5, VAR_6, VAR_6);



  if (VAR_9)
    {
      if (VAR_9->apr_err != VAR_1)
        return FUNC_6(VAR_9);
      FUNC_4(VAR_9);


      *VAR_3 = 0;
      return FUNC_5(VAR_0, ((void*)0),
                               FUNC_1("'%s' is not a working copy"),
                               FUNC_3(VAR_5,
                                                      VAR_6));
    }

  FUNC_0(VAR_7 != ((void*)0));
  FUNC_0(VAR_7->format >= 1);

  *VAR_3 = VAR_7->format;

  return VAR_2;
}
