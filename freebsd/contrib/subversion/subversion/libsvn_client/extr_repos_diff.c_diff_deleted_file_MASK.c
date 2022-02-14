
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_diff_source_t ;
typedef scalar_t__ svn_boolean_t ;
struct file_baton {int pfb; int pristine_props; int path_start_revision; int path; } ;
struct edit_baton {TYPE_1__* processor; int text_deltas; int cancel_baton; int (* cancel_func ) (int ) ;int revision; } ;
struct dir_baton {int pdb; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;
struct TYPE_3__ {int (* file_deleted ) (int ,int *,int ,int ,int ,TYPE_1__*,int *) ;int (* file_opened ) (int *,scalar_t__*,char const*,int *,int *,int *,int ,TYPE_1__*,int *,int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct file_baton*,int,int *) ;
 struct file_baton* FUNC_2 (char const*,struct dir_baton*,scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__*,char const*,int *,int *,int *,int ,TYPE_1__*,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,int ,int ,TYPE_1__*,int *) ;
 int * FUNC_7 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_2,
                  struct dir_baton *VAR_3,
                  apr_pool_t *VAR_4)
{
  struct edit_baton *VAR_5 = VAR_3->edit_baton;
  struct file_baton *VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_4);
  svn_boolean_t VAR_7 = VAR_0;
  svn_diff_source_t *VAR_8 = FUNC_7(VAR_5->revision,
                                                           VAR_4);

  if (VAR_5->cancel_func)
    FUNC_0(VAR_5->cancel_func(VAR_5->cancel_baton));

  FUNC_0(VAR_5->processor->file_opened(&VAR_6->pfb, &VAR_7, VAR_2,
                                     VAR_8,
                                     ((void*)0) ,
                                     ((void*)0) ,
                                     VAR_3->pdb,
                                     VAR_5->processor,
                                     VAR_4, VAR_4));

  if (VAR_5->cancel_func)
    FUNC_0(VAR_5->cancel_func(VAR_5->cancel_baton));

  if (VAR_7)
    return VAR_1;

  FUNC_0(FUNC_1(VAR_6, ! VAR_5->text_deltas, VAR_4));

  FUNC_0(VAR_5->processor->file_deleted(VAR_6->path,
                                      VAR_8,
                                      VAR_6->path_start_revision,
                                      VAR_6->pristine_props,
                                      VAR_6->pfb,
                                      VAR_5->processor,
                                      VAR_4));

  return VAR_1;
}
