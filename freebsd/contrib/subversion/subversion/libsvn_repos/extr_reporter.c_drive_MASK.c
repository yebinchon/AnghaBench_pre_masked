
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
struct TYPE_16__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_17__ {char* t_path; TYPE_1__* editor; int requested_depth; scalar_t__* s_operand; int edit_baton; int t_rev; int * t_root; int fs_base; } ;
typedef TYPE_3__ report_baton_t ;
struct TYPE_18__ {int depth; int start_empty; int link_path; int rev; } ;
typedef TYPE_4__ path_info_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {int (* close_directory ) (void*,int *) ;int (* open_root ) (int ,int ,int *,void**) ;int (* set_target_revision ) (int ,int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int*,char const*,int *) ;
 int FUNC_4 (TYPE_3__*,int ,char const*,char const*,void*,char*,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__ const**,int *,char const*,int *) ;
 int FUNC_6 (TYPE_3__*,int **,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int *,void**) ;
 int FUNC_9 (void*,int *) ;
 int * FUNC_10 (int ,int *,int ) ;
 int * FUNC_11 (int ,int *,int ,char const*) ;
 int * FUNC_12 (int ) ;
 char* FUNC_13 (char*,int *) ;
 char* FUNC_14 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_15 (TYPE_3__*,int ,char const*,TYPE_2__ const*,char const*,TYPE_2__ const*,void*,scalar_t__*,TYPE_4__*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(report_baton_t *VAR_3, svn_revnum_t VAR_4, path_info_t *VAR_5,
      apr_pool_t *VAR_6)
{
  const char *VAR_7, *VAR_8;
  svn_boolean_t VAR_9, VAR_10;
  svn_fs_root_t *VAR_11;
  const svn_fs_dirent_t *VAR_12, *VAR_13;
  void *VAR_14;



  VAR_7 = *VAR_3->s_operand ? FUNC_13(VAR_3->t_path, VAR_6) : VAR_3->t_path;
  FUNC_0(FUNC_3(VAR_3, &VAR_9, VAR_7, VAR_6));
  if (!VAR_9)
    return FUNC_10
      (VAR_0, ((void*)0),
       FUNC_2("Not authorized to open root of edit operation"));


  VAR_8 = FUNC_14(VAR_3->fs_base, VAR_3->s_operand, VAR_6);
  FUNC_0(FUNC_6(VAR_3, &VAR_11, VAR_4));
  FUNC_0(FUNC_5(&VAR_12, VAR_11, VAR_8, VAR_6));
  FUNC_0(FUNC_5(&VAR_13, VAR_3->t_root, VAR_3->t_path, VAR_6));



  VAR_10 = (FUNC_1(VAR_5->rev) && !VAR_5->link_path);
  if (VAR_10 && !VAR_12)
    VAR_8 = ((void*)0);


  if (!*VAR_3->s_operand && !(VAR_13))
    return FUNC_11(VAR_1, ((void*)0),
                             FUNC_2("Target path '%s' does not exist"),
                             VAR_3->t_path);



  else if (!*VAR_3->s_operand && (!VAR_12 || VAR_12->kind != VAR_2
                              || VAR_13->kind != VAR_2))
    return FUNC_10(VAR_1, ((void*)0),
                            FUNC_2("Cannot replace a directory from within"));

  FUNC_0(VAR_3->editor->set_target_revision(VAR_3->edit_baton, VAR_3->t_rev, VAR_6));
  FUNC_0(VAR_3->editor->open_root(VAR_3->edit_baton, VAR_4, VAR_6, &VAR_14));



  if (!*VAR_3->s_operand)
    FUNC_0(FUNC_4(VAR_3, VAR_4, VAR_8, VAR_3->t_path, VAR_14,
                       "", VAR_5->start_empty, VAR_5->depth, VAR_3->requested_depth,
                       VAR_6));
  else
    FUNC_0(FUNC_15(VAR_3, VAR_4, VAR_8, VAR_12, VAR_3->t_path,
                         VAR_13, VAR_14, VAR_3->s_operand, VAR_5,
                         VAR_5->depth, VAR_3->requested_depth, VAR_6));

  return FUNC_12(VAR_3->editor->close_directory(VAR_14, VAR_6));
}
