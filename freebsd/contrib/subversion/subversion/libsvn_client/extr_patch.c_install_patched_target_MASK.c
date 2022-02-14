
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int cancel_baton; int cancel_func; int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int svn_boolean_t ;
struct TYPE_10__ {char const* local_abspath; scalar_t__ kind_on_disk; char const* move_target_abspath; int executable; scalar_t__ added; TYPE_1__* content; int patched_path; scalar_t__ git_symlink_format; scalar_t__ is_special; void* skipped; void* obstructed; scalar_t__ deleted; } ;
typedef TYPE_3__ patch_target_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_8__ {scalar_t__ eol_style; int keywords; int eol_str; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_3__*,char const*,TYPE_2__*,int,int *,int *) ;
 char* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 int FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (char const*,int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *,int *,int ,int ,int *) ;
 int FUNC_7 (int **,int ,int *,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,char const*,int ,int,int ,void*,int ,int ,int ,int *) ;
 int FUNC_10 (int **,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,char const*,char const*,void*,int ,int ,int ,int *,int *,int *) ;
 int FUNC_12 (int ,char const*,int *,int ,int *,int *,int *) ;
 int FUNC_13 (int ,char const*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_14 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(patch_target_t *VAR_8, const char *VAR_9,
                       svn_client_ctx_t *VAR_10, svn_boolean_t VAR_11,
                       apr_array_header_t *VAR_12,
                       apr_pool_t *VAR_13)
{
  if (VAR_8->deleted)
    {
      if (! VAR_11)
        {





          FUNC_0(FUNC_13(VAR_10->wc_ctx, VAR_8->local_abspath,
                                 VAR_0 , VAR_0,
                                 VAR_10->cancel_func, VAR_10->cancel_baton,
                                 ((void*)0), ((void*)0) ,
                                 VAR_13));
        }
    }
  else
    {
      svn_node_kind_t VAR_14;
      if (VAR_8->added)
        {
          const char *VAR_15;

          VAR_15 = FUNC_2(VAR_8->local_abspath,
                                              VAR_13);



          FUNC_0(FUNC_14(&VAR_14, VAR_10->wc_ctx,
                                    VAR_15, VAR_0, VAR_0, VAR_13));



          if (VAR_14 == VAR_3
              || VAR_14 == VAR_4)
            {
              if (VAR_14 != VAR_3)
                VAR_8->skipped = VAR_2;
              else
                {
                  svn_node_kind_t VAR_16;

                  FUNC_0(FUNC_3(VAR_15, &VAR_16, VAR_13));
                  if (VAR_16 != VAR_3)
                    VAR_8->skipped = VAR_2;
                }
            }
          else
            FUNC_0(FUNC_1(VAR_8, VAR_9, VAR_10,
                                           VAR_11, VAR_12, VAR_13));

        }
      else
        {
          svn_node_kind_t VAR_17;


          FUNC_0(FUNC_14(&VAR_17, VAR_10->wc_ctx,
                                    VAR_8->local_abspath,
                                    VAR_0, VAR_0, VAR_13));

          if (VAR_8->kind_on_disk == VAR_5
              || VAR_17 != VAR_8->kind_on_disk)
            {
              VAR_8->skipped = VAR_2;
              if (VAR_17 != VAR_8->kind_on_disk)
                VAR_8->obstructed = VAR_2;
            }
        }

      if (! VAR_11 && ! VAR_8->skipped)
        {
          if (VAR_8->is_special)
            {
              svn_stream_t *VAR_18;
              svn_stream_t *VAR_19;

              FUNC_0(FUNC_7(&VAR_19,
                                               VAR_8->patched_path,
                                               VAR_13, VAR_13));
              FUNC_0(FUNC_10(&VAR_18,
                                                   VAR_8->local_abspath,
                                                   VAR_13, VAR_13));
              if (VAR_8->git_symlink_format)
                  FUNC_0(FUNC_8(VAR_18, "link "));
              FUNC_0(FUNC_6(VAR_19, VAR_18,
                                       VAR_10->cancel_func, VAR_10->cancel_baton,
                                       VAR_13));
            }
          else
            {
              svn_boolean_t VAR_20;




              VAR_20 = (VAR_8->content->eol_style ==
                              VAR_6 ||
                            VAR_8->content->eol_style ==
                              VAR_7);

              FUNC_0(FUNC_9(
                        VAR_8->patched_path,
                        VAR_8->move_target_abspath
                          ? VAR_8->move_target_abspath
                          : VAR_8->local_abspath,
                        VAR_8->content->eol_str, VAR_20,
                        VAR_8->content->keywords,
                        VAR_2 , VAR_0 ,
                        VAR_10->cancel_func, VAR_10->cancel_baton, VAR_13));
            }

          if (VAR_8->added)
            {





              FUNC_0(FUNC_12(VAR_10->wc_ctx, VAR_8->local_abspath,
                                            ((void*)0) ,
                                            VAR_0 ,
                                            ((void*)0), ((void*)0), VAR_13));
            }


          FUNC_0(FUNC_5(VAR_8->move_target_abspath
                                               ? VAR_8->move_target_abspath
                                               : VAR_8->local_abspath,
                                             VAR_8->executable,
                                             VAR_0, VAR_13));

          if (VAR_8->move_target_abspath)
            {







              FUNC_0(FUNC_11(VAR_10->wc_ctx,
                                    VAR_8->local_abspath,
                                    VAR_8->move_target_abspath,
                                    VAR_2,
                                    VAR_0,
                                    VAR_10->cancel_func, VAR_10->cancel_baton,
                                    ((void*)0), ((void*)0),
                                    VAR_13));


              FUNC_0(FUNC_4(VAR_8->local_abspath, VAR_0, VAR_13));
            }
        }
    }

  return VAR_1;
}
