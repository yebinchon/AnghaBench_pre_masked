
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; scalar_t__ action; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_error_t ;
struct copy_warning_notify_baton {scalar_t__ depth; scalar_t__ warned; int wrapped_baton; int (* wrapped_func ) (int ,TYPE_1__ const*,int *) ;} ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__ const*,int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(void *VAR_5,
                         const svn_wc_notify_t *VAR_6,
                         apr_pool_t *VAR_7)
{
  struct copy_warning_notify_baton *VAR_8 = VAR_5;


  if (VAR_8->wrapped_func)
    VAR_8->wrapped_func(VAR_8->wrapped_baton, VAR_6, VAR_7);





  if ((! VAR_8->warned)
      && (VAR_8->depth < VAR_1)
      && (VAR_6->kind == VAR_2)
      && ((VAR_6->action == VAR_3) ||
          (VAR_6->action == VAR_4)))
    {
      svn_error_t *VAR_9;
      VAR_9 = FUNC_2(VAR_7,
                               FUNC_0("svn: The depth of this commit is '%s', "
                                 "but copies are always performed "
                                 "recursively in the repository.\n"),
                               FUNC_3(VAR_8->depth));

      FUNC_4(VAR_9);


      VAR_8->warned = VAR_0;
    }
}
