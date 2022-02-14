
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct svn_wc__db_info_t {scalar_t__ kind; int status; int have_more_work; } ;
struct file_baton_t {int pool; void* right_src; void* left_src; int relpath; void* skip; int pfb; int local_abspath; int base_props; int base_checksum; int name; void* repos_only; void* ignoring_ancestry; } ;
struct edit_baton_t {TYPE_1__* processor; int db; int revnum; int ignore_ancestry; } ;
struct dir_baton_t {int pdb; int pool; int compared; int local_info; scalar_t__ repos_only; scalar_t__ skip_children; struct edit_baton_t* eb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* file_opened ) (int *,void**,int ,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct dir_baton_t*,int *) ;
 struct file_baton_t* FUNC_5 (char const*,int ,struct dir_baton_t*,int *) ;
 int FUNC_6 (int *,void**,int ,void*,void*,int *,int ,TYPE_1__*,int ,int ) ;
 void* FUNC_7 (int ,int ) ;
 struct svn_wc__db_info_t* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,int ,int ,int ) ;





__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_5,
          void *VAR_6,
          svn_revnum_t VAR_7,
          apr_pool_t *VAR_8,
          void **VAR_9)
{
  struct dir_baton_t *VAR_10 = VAR_6;
  struct edit_baton_t *VAR_11 = VAR_10->eb;
  struct file_baton_t *VAR_12;

  VAR_12 = FUNC_5(VAR_5, VAR_0, VAR_10, VAR_8);
  *VAR_9 = VAR_12;

  if (VAR_10->skip_children)
    VAR_12->skip = VAR_3;
  else if (VAR_10->repos_only)
    VAR_12->repos_only = VAR_3;
  else
    {
      struct svn_wc__db_info_t *VAR_13;
      FUNC_1(FUNC_4(VAR_10, VAR_8));

      VAR_13 = FUNC_8(VAR_10->local_info, VAR_12->name);

      if (!VAR_13 || VAR_13->kind != VAR_4 || FUNC_0(VAR_13->status))
        VAR_12->repos_only = VAR_3;

      if (!VAR_12->repos_only)
        switch (VAR_13->status)
          {
            case 128:
            case 129:
              break;
            case 130:
              VAR_12->repos_only = VAR_3;
              if (!VAR_13->have_more_work)
                FUNC_9(VAR_10->compared,
                              FUNC_3(VAR_10->pool, VAR_12->name), "");
              break;
            case 131:
              if (VAR_11->ignore_ancestry)
                VAR_12->ignoring_ancestry = VAR_3;
              else
                VAR_12->repos_only = VAR_3;
              break;
            default:
              FUNC_2();
        }

      if (!VAR_12->repos_only)
        {


          VAR_12->right_src = FUNC_7(VAR_1, VAR_12->pool);
          FUNC_9(VAR_10->compared, FUNC_3(VAR_10->pool, VAR_12->name), "");
        }
    }

  VAR_12->left_src = FUNC_7(VAR_11->revnum, VAR_12->pool);

  FUNC_1(FUNC_10(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), &VAR_12->base_checksum, ((void*)0),
                                   ((void*)0), ((void*)0), &VAR_12->base_props, ((void*)0),
                                   VAR_11->db, VAR_12->local_abspath,
                                   VAR_12->pool, VAR_12->pool));

  FUNC_1(VAR_11->processor->file_opened(&VAR_12->pfb, &VAR_12->skip,
                                     VAR_12->relpath,
                                     VAR_12->left_src,
                                     VAR_12->right_src,
                                     ((void*)0) ,
                                     VAR_10->pdb,
                                     VAR_11->processor,
                                     VAR_12->pool, VAR_12->pool));

  return VAR_2;
}
