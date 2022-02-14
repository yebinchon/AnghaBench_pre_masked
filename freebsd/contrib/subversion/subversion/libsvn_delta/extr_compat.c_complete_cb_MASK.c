
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct editor_baton {int dedit_baton; TYPE_1__* deditor; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* abort_edit ) (int ,int *) ;int (* close_edit ) (int ,int *) ;} ;


 int * FUNC_0 (struct editor_baton*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_0,
            apr_pool_t *VAR_1)
{
  struct editor_baton *VAR_2 = VAR_0;
  svn_error_t *VAR_3;


  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (!VAR_3)
     {
       VAR_3 = FUNC_4(VAR_3, VAR_2->deditor->close_edit(
                                                            VAR_2->dedit_baton,
                                                            VAR_1));
     }

  if (VAR_3)
    FUNC_3(VAR_2->deditor->abort_edit(VAR_2->dedit_baton, VAR_1));

  return FUNC_5(VAR_3);
}
