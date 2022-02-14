
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct log_msg_baton {int tmpfile_left; int pool; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_5 (int ,int ,int ) ;

svn_error_t *
FUNC_6(void *VAR_1,
                        svn_error_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  struct log_msg_baton *VAR_4 = VAR_1;
  svn_error_t *VAR_5;



  if ((! VAR_4) || (! VAR_4->tmpfile_left))
    return VAR_2;


  if (! VAR_2)
    return FUNC_5(VAR_4->tmpfile_left, VAR_0, VAR_4->pool);







  VAR_5 = FUNC_4(VAR_2->apr_err, ((void*)0),
                          FUNC_0("   '%s'"),
                          FUNC_1(VAR_4->tmpfile_left, VAR_3));
  FUNC_2(VAR_2,
                    FUNC_3(VAR_2->apr_err, VAR_5,
                      FUNC_0("Your commit message was left in "
                        "a temporary file:")));
  return VAR_2;
}
