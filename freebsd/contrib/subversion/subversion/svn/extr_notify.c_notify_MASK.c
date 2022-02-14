
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
struct TYPE_5__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct notify_baton {scalar_t__ had_print_error; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct notify_baton*,int const*,int *) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, const svn_wc_notify_t *VAR_5, apr_pool_t *VAR_6)
{
  struct notify_baton *VAR_7 = VAR_4;
  svn_error_t *VAR_8;

  VAR_8 = FUNC_0(VAR_7, VAR_5, VAR_6);




  if (VAR_8 && !VAR_7->had_print_error)
    {
      VAR_7->had_print_error = VAR_2;







      if (VAR_8->apr_err != VAR_1)
        FUNC_2(VAR_8, VAR_3, VAR_0, "svn: ");
    }
  FUNC_1(VAR_8);
}
