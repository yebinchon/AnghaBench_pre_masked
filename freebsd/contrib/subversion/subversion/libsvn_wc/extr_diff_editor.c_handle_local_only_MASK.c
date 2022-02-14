
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_boolean_t ;
struct svn_wc__db_info_t {int status; scalar_t__ kind; scalar_t__ moved_here; } ;
struct edit_baton_t {int cancel_baton; int cancel_func; int diff_pristine; int processor; int db; int anchor_abspath; scalar_t__ ignore_ancestry; } ;
struct dir_baton_t {scalar_t__ depth; int pdb; int relpath; int local_abspath; scalar_t__ deletes; scalar_t__ local_info; scalar_t__ skip_children; int added; struct edit_baton_t* eb; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct dir_baton_t*,int *) ;
 int FUNC_5 (char const*,char) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (int ,char const*,int *) ;
 char* FUNC_7 (int ,char const*) ;
 struct svn_wc__db_info_t* FUNC_8 (scalar_t__,char const*) ;
 int FUNC_9 (scalar_t__,char const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ,char const*,int *) ;
 int FUNC_11 (char const**,int *,int *,int *,int ,char const*,int *,int *) ;




 int FUNC_12 (int ,char const*,int ,scalar_t__,char const*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_13 (int ,char const*,int ,char const*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(struct dir_baton_t *VAR_5,
                  const char *VAR_6,
                  apr_pool_t *VAR_7)
{
  struct edit_baton_t *VAR_8 = VAR_5->eb;
  const struct svn_wc__db_info_t *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  svn_boolean_t VAR_12 = (VAR_5->deletes
                                && FUNC_8(VAR_5->deletes, VAR_6));

  FUNC_3(!FUNC_5(VAR_6, '/'));
  FUNC_3(!VAR_5->added || VAR_8->ignore_ancestry);

  if (VAR_5->skip_children)
    return VAR_0;

  FUNC_1(FUNC_4(VAR_5, VAR_7));

  VAR_9 = FUNC_8(VAR_5->local_info, VAR_6);

  if (VAR_9 == ((void*)0) || FUNC_0(VAR_9->status))
    return VAR_0;

  switch (VAR_9->status)
    {
      case 128:
      case 129:
        if (!VAR_12)
          return VAR_0;
        FUNC_9(VAR_5->deletes, VAR_6, ((void*)0));
        break;

      case 130:
        if (!(VAR_8->diff_pristine && VAR_12))
          return VAR_0;
        break;

      case 131:
      default:
        break;
    }

  VAR_10 = FUNC_6(VAR_5->local_abspath, VAR_6, VAR_7);

  if (VAR_9->moved_here)
    {
      const char *VAR_13;

      FUNC_1(FUNC_11(&VAR_13,
                                    ((void*)0), ((void*)0), ((void*)0),
                                    VAR_8->db, VAR_10,
                                    VAR_7, VAR_7));
      FUNC_2(VAR_13 != ((void*)0));

      VAR_11 = FUNC_7(
                                    VAR_8->anchor_abspath,
                                    VAR_13);
    }
  else
    VAR_11 = ((void*)0);

  if (VAR_9->kind == VAR_4)
    {
      svn_depth_t VAR_14 ;

      if (VAR_5->depth == VAR_2 || VAR_5->depth == VAR_3)
        VAR_14 = VAR_5->depth;
      else
        VAR_14 = VAR_1;

      FUNC_1(FUNC_12(
                      VAR_8->db,
                      VAR_10,
                      FUNC_10(VAR_5->relpath, VAR_6, VAR_7),
                      VAR_12 ? VAR_2 : VAR_14,
                      VAR_11,
                      VAR_8->processor, VAR_5->pdb,
                      VAR_8->diff_pristine,
                      VAR_8->cancel_func, VAR_8->cancel_baton,
                      VAR_7));
    }
  else
    FUNC_1(FUNC_13(
                      VAR_8->db,
                      VAR_10,
                      FUNC_10(VAR_5->relpath, VAR_6, VAR_7),
                      VAR_11,
                      VAR_8->processor, VAR_5->pdb,
                      VAR_8->diff_pristine,
                      VAR_8->cancel_func, VAR_8->cancel_baton,
                      VAR_7));

  return VAR_0;
}
