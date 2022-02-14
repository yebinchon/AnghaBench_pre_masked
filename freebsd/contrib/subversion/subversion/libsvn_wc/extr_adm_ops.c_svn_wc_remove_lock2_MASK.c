
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_skel_t ;
struct TYPE_12__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int *,int ,int ) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int ,char const*,int *,int *) ;
 int FUNC_10 (int **,int ,char const*,int *,int *) ;
 TYPE_2__* FUNC_11 (int ,char const*,int *,int *,int *) ;
 int FUNC_12 (int ,int ,int *) ;

svn_error_t *
FUNC_13(svn_wc_context_t *VAR_2,
                    const char *VAR_3,
                    apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5;
  svn_skel_t *VAR_6;

  FUNC_1(FUNC_4(VAR_3));

  FUNC_0(FUNC_12(VAR_2->db,
                              FUNC_3(VAR_3, VAR_4),
                              VAR_4));

  FUNC_0(FUNC_10(&VAR_6,
                                           VAR_2->db, VAR_3,
                                           VAR_4, VAR_4));

  VAR_5 = FUNC_9(VAR_2->db, VAR_3, VAR_6,
                               VAR_4);
  if (VAR_5)
    {
      if (VAR_5->apr_err != VAR_1)
        return FUNC_8(VAR_5);


      FUNC_6(VAR_5);
      return FUNC_7(VAR_0, ((void*)0),
                               FUNC_2("'%s' is not under version control"),
                               FUNC_5(VAR_3,
                                                      VAR_4));
    }

  return FUNC_8(FUNC_11(VAR_2->db, VAR_3,
                                        ((void*)0), ((void*)0) ,
                                        VAR_4));
}
