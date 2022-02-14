
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ presence; char* repos_relpath; scalar_t__ kind; char* changed_author; int inherited_props; scalar_t__ file_external; int properties; int recorded_time; int recorded_size; int checksum; int local_relpath; int op_depth; int revision; int repos_id; int changed_date; int changed_rev; int depth; int parent_relpath; int wc_id; } ;
typedef TYPE_1__ db_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int,int ,int *) ;
 int FUNC_10 (int *,int,int ,int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,char*) ;
 int FUNC_13 (int *,int,int ,scalar_t__) ;
 int FUNC_14 (int *,char*,int ,int ,int ,int ,int *) ;
 int FUNC_15 (int **,int *,int ) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_sqlite__db_t *VAR_15,
            const db_node_t *VAR_16,
            apr_pool_t *VAR_17)
{
  svn_sqlite__stmt_t *VAR_18;
  svn_boolean_t VAR_19 = (VAR_16->presence == VAR_12
                           || VAR_16->presence == VAR_11);

  FUNC_1(VAR_16->op_depth > 0 || VAR_16->repos_relpath);

  FUNC_0(FUNC_15(&VAR_18, VAR_15, VAR_0));
  FUNC_0(FUNC_14(VAR_18, "isdsnnnnsn",
                            VAR_16->wc_id,
                            VAR_16->local_relpath,
                            VAR_16->op_depth,
                            VAR_16->parent_relpath,

                            (VAR_16->kind == VAR_6 && VAR_19)
                              ? FUNC_3(VAR_16->depth)
                              : ((void*)0)));

  if (VAR_19 && VAR_16->repos_relpath)
    {
      FUNC_0(FUNC_11(VAR_18, 11, VAR_16->changed_rev));
      FUNC_0(FUNC_8(VAR_18, 12, VAR_16->changed_date));
      FUNC_0(FUNC_12(VAR_18, 13, VAR_16->changed_author));
    }

  if (VAR_16->repos_relpath
      && VAR_16->presence != VAR_9)
    {
      FUNC_0(FUNC_8(VAR_18, 5,
                                     VAR_16->repos_id));
      FUNC_0(FUNC_12(VAR_18, 6,
                                    VAR_16->repos_relpath));
      FUNC_0(FUNC_11(VAR_18, 7, VAR_16->revision));
    }

  FUNC_0(FUNC_13(VAR_18, 8, VAR_5, VAR_16->presence));

  if (VAR_16->kind == VAR_8)
    FUNC_0(FUNC_12(VAR_18, 10, "unknown"));
  else
    FUNC_0(FUNC_13(VAR_18, 10, VAR_4, VAR_16->kind));

  if (VAR_16->kind == VAR_7 && VAR_19)
    {
      if (!VAR_16->checksum
          && VAR_16->op_depth == 0
          && VAR_16->presence != VAR_13
          && VAR_16->presence != VAR_10
          && VAR_16->presence != VAR_14)
        return FUNC_5(VAR_1, ((void*)0),
                                 FUNC_2("The file '%s' has no checksum"),
                                 FUNC_4(VAR_16->local_relpath,
                                                        VAR_17));

      FUNC_0(FUNC_6(VAR_18, 14, VAR_16->checksum,
                                        VAR_17));

      if (VAR_16->repos_relpath)
        {
          if (VAR_16->recorded_size != VAR_2)
            FUNC_0(FUNC_8(VAR_18, 16, VAR_16->recorded_size));

          FUNC_0(FUNC_8(VAR_18, 17, VAR_16->recorded_time));
        }
    }


  if (VAR_16->properties && VAR_19 && VAR_16->repos_relpath)
    FUNC_0(FUNC_10(VAR_18, 15, VAR_16->properties,
                                        VAR_17));

  if (VAR_16->file_external)
    FUNC_0(FUNC_7(VAR_18, 20, 1));

  if (VAR_16->inherited_props && VAR_19)
    FUNC_0(FUNC_9(VAR_18, 23, VAR_16->inherited_props,
                                    VAR_17));

  FUNC_0(FUNC_16(((void*)0), VAR_18));

  return VAR_3;
}
