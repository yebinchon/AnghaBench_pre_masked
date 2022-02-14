
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ node_status; scalar_t__ kind; scalar_t__ prop_status; scalar_t__ conflicted; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_wc_context_t ;
typedef int svn_string_t ;
struct TYPE_13__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {char* canon_path_from_patchfile; char const* local_abspath; char* local_relpath; scalar_t__ db_kind; scalar_t__ kind_on_disk; void* is_symlink; void* locally_deleted; void* skipped; void* obstructed; } ;
typedef TYPE_3__ patch_target_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (char const**,char*,int,int *,int *) ;
 char* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (scalar_t__*,char const**,char const*,char const*,int *) ;
 char const* FUNC_6 (char const*,char const*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char const*,scalar_t__*,void**,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_11 (int const**,int *,char const*,int ,int *,int *) ;
 TYPE_2__* FUNC_12 (TYPE_1__**,int *,char const*,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (int const*,char const*,int *) ;
 scalar_t__ FUNC_14 (int const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(patch_target_t *VAR_14,
                    const char *VAR_15,
                    const char *VAR_16,
                    int VAR_17,
                    svn_boolean_t VAR_18,
                    svn_boolean_t VAR_19,
                    svn_wc_context_t *VAR_20,
                    const apr_array_header_t *VAR_21,
                    apr_pool_t *VAR_22,
                    apr_pool_t *VAR_23)
{
  const char *VAR_24;
  svn_wc_status3_t *VAR_25;
  svn_error_t *VAR_26;
  svn_boolean_t VAR_27;

  VAR_14->canon_path_from_patchfile = FUNC_2(
                                        VAR_15, VAR_22);


  if (VAR_18 && VAR_14->canon_path_from_patchfile[0] == '\0')
    {

      VAR_14->skipped = VAR_4;
      VAR_14->local_abspath = ((void*)0);
      VAR_14->local_relpath = "";
      return VAR_2;
    }

  if (VAR_17 > 0)
    FUNC_0(FUNC_1(&VAR_24, VAR_14->canon_path_from_patchfile,
                       VAR_17, VAR_22, VAR_23));
  else
    VAR_24 = VAR_14->canon_path_from_patchfile;

  if (FUNC_3(VAR_24))
    {
      VAR_14->local_relpath = FUNC_4(VAR_16,
                                                  VAR_24,
                                                  VAR_22);

      if (! VAR_14->local_relpath)
        {


          VAR_14->skipped = VAR_4;
          VAR_14->local_abspath = ((void*)0);
          VAR_14->local_relpath = VAR_24;
          return VAR_2;
        }
    }
  else
    {
      VAR_14->local_relpath = VAR_24;
    }



  FUNC_0(FUNC_5(&VAR_27,
                                   &VAR_14->local_abspath, VAR_16,
                                   VAR_14->local_relpath, VAR_22));

  if (! VAR_27)
    {

      VAR_14->skipped = VAR_4;
      VAR_14->local_abspath = ((void*)0);
      return VAR_2;
    }

  if (FUNC_14(VAR_21, VAR_14->local_abspath, VAR_23))
    {
      VAR_14->locally_deleted = VAR_4;
      VAR_14->db_kind = VAR_6;
      return VAR_2;
    }


  VAR_26 = FUNC_12(&VAR_25, VAR_20, VAR_14->local_abspath,
                       VAR_22, VAR_23);
  if (VAR_26)
    {
      if (VAR_26->apr_err != VAR_1)
        return FUNC_8(VAR_26);

      FUNC_7(VAR_26);

      VAR_14->locally_deleted = VAR_4;
      VAR_14->db_kind = VAR_6;
      VAR_25 = ((void*)0);
    }
  else if (VAR_25->node_status == VAR_9 ||
           VAR_25->node_status == VAR_13 ||
           VAR_25->node_status == VAR_10 ||
           VAR_25->node_status == VAR_12 ||
           VAR_25->conflicted)
    {
      VAR_14->skipped = VAR_4;
      VAR_14->obstructed = VAR_4;
      return VAR_2;
    }
  else if (VAR_25->node_status == VAR_8)
    {
      VAR_14->locally_deleted = VAR_4;
    }

  if (VAR_25 && (VAR_25->kind != VAR_7))
    VAR_14->db_kind = VAR_25->kind;
  else
    VAR_14->db_kind = VAR_6;

  FUNC_0(FUNC_9(VAR_14->local_abspath,
                                    &VAR_14->kind_on_disk, &VAR_14->is_symlink,
                                    VAR_23));

  if (VAR_14->locally_deleted)
    {
      const char *VAR_28 = ((void*)0);

      if (VAR_19
          && !FUNC_13(VAR_21, VAR_14->local_abspath,
                              VAR_23))
        {
          FUNC_0(FUNC_10(&VAR_28, ((void*)0),
                                              VAR_20, VAR_14->local_abspath,
                                              VAR_22, VAR_23));
        }

      if (VAR_28)
        {
          VAR_14->local_abspath = VAR_28;
          VAR_14->local_relpath = FUNC_6(VAR_16,
                                                           VAR_28);

          if (!VAR_14->local_relpath || VAR_14->local_relpath[0] == '\0')
            {

              VAR_14->skipped = VAR_4;
              return VAR_2;
            }


          VAR_14->locally_deleted = VAR_0;

          FUNC_0(FUNC_9(VAR_14->local_abspath,
                                            &VAR_14->kind_on_disk,
                                            &VAR_14->is_symlink,
                                            VAR_23));
        }
      else if (VAR_14->kind_on_disk != VAR_6)
        {
          VAR_14->skipped = VAR_4;
          return VAR_2;
        }
    }


  if (VAR_14->kind_on_disk == VAR_5
      && !VAR_14->is_symlink
      && !VAR_14->locally_deleted
      && VAR_25->prop_status != VAR_11)
    {
      const svn_string_t *VAR_29;

      FUNC_0(FUNC_11(&VAR_29, VAR_20, VAR_14->local_abspath,
                               VAR_3, VAR_23, VAR_23));

      if (VAR_29)
        VAR_14->is_symlink = VAR_4;
    }


  return VAR_2;
}
