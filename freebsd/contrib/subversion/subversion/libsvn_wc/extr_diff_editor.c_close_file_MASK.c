
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int svn_error_t ;
struct TYPE_16__ {scalar_t__ kind; } ;
typedef TYPE_1__ const svn_checksum_t ;
struct file_baton_t {char* temp_file_path; int * pool; int name; int ignoring_ancestry; scalar_t__ repos_only; int pfb; int right_src; int left_src; int relpath; int local_abspath; TYPE_1__ const* base_checksum; int propchanges; int * base_props; scalar_t__ added; int result_digest; scalar_t__ skip; struct edit_baton_t* eb; struct dir_baton_t* parent_baton; } ;
struct edit_baton_t {scalar_t__ local_before_remote; TYPE_12__* processor; int cancel_baton; int cancel_func; int db; int anchor_abspath; scalar_t__ diff_pristine; } ;
struct dir_baton_t {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_15__ {int (* file_changed ) (int ,int ,int ,char const*,char const*,int *,int *,int ,int *,int ,TYPE_12__*,int *) ;int (* file_deleted ) (int ,int ,char*,int *,int ,TYPE_12__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (struct dir_baton_t*,int ,int *) ;
 int FUNC_5 (struct dir_baton_t*) ;
 int FUNC_6 (int ,int ,char*,int *,int ,TYPE_12__*,int *) ;
 int FUNC_7 (int ,int ,int ,char const*,char const*,int *,int *,int ,int *,int ,TYPE_12__*,int *) ;
 TYPE_1__ const* FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ VAR_4 ;
 int * FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,int *,int ,int ) ;
 int FUNC_11 (TYPE_1__ const**,scalar_t__,char const*,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (int **,int *,int *,int *) ;
 int FUNC_16 (TYPE_1__ const**,int ,int ,TYPE_1__ const*,int *,int *) ;
 int FUNC_17 (char const**,int ,int ,TYPE_1__ const*,int *,int *) ;
 int FUNC_18 (int *,int *,int *,int *,int *,int *,TYPE_1__ const**,int *,int *,int **,int ,int ,int *,int *) ;
 int FUNC_19 (int **,int ,int ,int *,int *) ;
 int FUNC_20 (char const**,int ,int ,int ,int,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(void *VAR_5,
           const char *VAR_6,
           apr_pool_t *VAR_7)
{
  struct file_baton_t *VAR_8 = VAR_5;
  struct dir_baton_t *VAR_9 = VAR_8->parent_baton;
  struct edit_baton_t *VAR_10 = VAR_8->eb;
  apr_pool_t *VAR_11 = VAR_8->pool;


  const char *VAR_12;
  apr_hash_t *VAR_13;

  if (VAR_8->skip)
    {
      FUNC_13(VAR_8->pool);
      FUNC_0(FUNC_5(VAR_9));
      return VAR_0;
    }

  if (VAR_6 != ((void*)0))
    {
      svn_checksum_t *VAR_14;
      const svn_checksum_t *VAR_15;

      if (VAR_8->temp_file_path)
        VAR_15 = FUNC_8(VAR_8->result_digest,
                                                        VAR_11);
      else
        VAR_15 = VAR_8->base_checksum;

      FUNC_0(FUNC_11(&VAR_14, VAR_4,
                                     VAR_6, VAR_11));

      if (VAR_15->kind != VAR_4)
        FUNC_0(FUNC_16(&VAR_15,
                                            VAR_10->db, VAR_8->local_abspath,
                                            VAR_15,
                                            VAR_11, VAR_11));

      if (!FUNC_9(VAR_14, VAR_15))
        return FUNC_10(
                            VAR_14,
                            VAR_15,
                            VAR_7,
                            FUNC_1("Checksum mismatch for '%s'"),
                            FUNC_12(VAR_8->local_abspath,
                                                   VAR_11));
    }

  if (VAR_10->local_before_remote && !VAR_8->repos_only && !VAR_8->ignoring_ancestry)
    FUNC_0(FUNC_4(VAR_9, VAR_8->name, VAR_11));

  {
    apr_hash_t *VAR_16;

    if (VAR_8->added)
      VAR_16 = FUNC_2(VAR_11);
    else
      VAR_16 = VAR_8->base_props;


    VAR_13 = FUNC_14(VAR_16, VAR_8->propchanges, VAR_11);

    VAR_12 = VAR_8->temp_file_path;
    if (! VAR_12)
      {
        FUNC_3(VAR_8->base_checksum);
        FUNC_0(FUNC_17(&VAR_12,
                                             VAR_10->db, VAR_10->anchor_abspath,
                                             VAR_8->base_checksum,
                                             VAR_11, VAR_11));
      }
  }

  if (VAR_8->repos_only)
    {
      FUNC_0(VAR_10->processor->file_deleted(VAR_8->relpath,
                                          VAR_8->left_src,
                                          VAR_8->temp_file_path,
                                          VAR_13,
                                          VAR_8->pfb,
                                          VAR_10->processor,
                                          VAR_11));
    }
  else
    {

      apr_hash_t *VAR_17;
      apr_array_header_t *VAR_18;
      const char *VAR_19;




      if (VAR_10->diff_pristine)
        {
          const svn_checksum_t *VAR_20;
          FUNC_0(FUNC_18(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), &VAR_20, ((void*)0), ((void*)0),
                                                &VAR_17,
                                                VAR_10->db, VAR_8->local_abspath,
                                                VAR_11, VAR_11));
          FUNC_3(VAR_20);
          FUNC_0(FUNC_17(&VAR_19,
                                               VAR_10->db, VAR_10->anchor_abspath,
                                               VAR_20,
                                               VAR_11, VAR_11));
        }
      else
        {
          FUNC_0(FUNC_19(&VAR_17,
                                        VAR_10->db, VAR_8->local_abspath,
                                        VAR_11, VAR_11));


          FUNC_0(FUNC_20(
                    &VAR_19, VAR_8->local_abspath, VAR_10->db, VAR_8->local_abspath,
                    VAR_1 | VAR_2,
                    VAR_10->cancel_func, VAR_10->cancel_baton,
                    VAR_11, VAR_11));
        }

      FUNC_0(FUNC_15(&VAR_18, VAR_17, VAR_13,
                             VAR_11));




      FUNC_0(VAR_10->processor->file_changed(VAR_8->relpath,
                                          VAR_8->left_src,
                                          VAR_8->right_src,
                                          VAR_12 ,
                                          VAR_19 ,
                                          VAR_13 ,
                                          VAR_17 ,
                                          VAR_3 ,
                                          VAR_18,
                                          VAR_8->pfb,
                                          VAR_10->processor,
                                          VAR_11));
    }

  if (!VAR_10->local_before_remote && !VAR_8->repos_only && !VAR_8->ignoring_ancestry)
    FUNC_0(FUNC_4(VAR_9, VAR_8->name, VAR_11));

  FUNC_13(VAR_8->pool);
  FUNC_0(FUNC_5(VAR_9));
  return VAR_0;
}
