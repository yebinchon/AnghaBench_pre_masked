
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {char const* mime_type; int lock_state; int prop_state; int content_state; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_string_t ;
struct TYPE_15__ {scalar_t__ special; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int (* close_file ) (void*,char const*,int *) ;int (* change_file_prop ) (void*,char const*,int const*,int *) ;int (* add_file ) (char const*,void*,int *,int ,int *,void**) ;} ;
typedef TYPE_3__ svn_delta_editor_t ;
struct TYPE_17__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_4__ svn_client_ctx_t ;
typedef int svn_checksum_t ;
struct TYPE_18__ {int autoprops; int magic_cookie; int repos_changed; } ;
typedef TYPE_5__ import_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int **,char const*,void*,TYPE_3__ const*,int *,int *) ;
 int FUNC_7 (char const*,void*,int *,int ,int *,void**) ;
 int FUNC_8 (void*,char const*,int const*,int *) ;
 int FUNC_9 (int ,TYPE_1__*,int *) ;
 int FUNC_10 (void*,char const*,int const*,int *) ;
 int FUNC_11 (void*,char const*,int *) ;
 char* FUNC_12 (int *,int *) ;
 int FUNC_13 (int **,char const**,char const*,int ,int ,TYPE_4__*,int *,int *) ;
 int * FUNC_14 (int ) ;
 int const* FUNC_15 (int *,char const*) ;
 int FUNC_16 (int *,char const*,int ) ;
 int VAR_4 ;
 int FUNC_17 (char const*,int *) ;
 int FUNC_18 (int ,int *) ;
 TYPE_1__* FUNC_19 (char const*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_20(const svn_delta_editor_t *VAR_8,
            void *VAR_9,
            const char *VAR_10,
            const char *VAR_11,
            const svn_io_dirent2_t *VAR_12,
            import_ctx_t *VAR_13,
            svn_client_ctx_t *VAR_14,
            apr_pool_t *VAR_15)
{
  void *VAR_16;
  const char *VAR_17 = ((void*)0);
  svn_checksum_t *VAR_18;
  const char *VAR_19;
  apr_hash_t* VAR_20;
  apr_hash_index_t *VAR_21;

  FUNC_0(FUNC_17(VAR_10, VAR_15));


  FUNC_0(VAR_8->add_file(VAR_11, VAR_9, ((void*)0), VAR_0,
                           VAR_15, &VAR_16));


  VAR_13->repos_changed = VAR_3;

  if (! VAR_12->special)
    {

      FUNC_0(FUNC_13(&VAR_20, &VAR_17,
                                               VAR_10,
                                               VAR_13->magic_cookie,
                                               VAR_13->autoprops,
                                               VAR_14, VAR_15, VAR_15));
    }
  else
    VAR_20 = FUNC_2(VAR_15);

  if (VAR_20)
    {
      for (VAR_21 = FUNC_1(VAR_15, VAR_20); VAR_21; VAR_21 = FUNC_3(VAR_21))
        {
          const char *VAR_22 = FUNC_4(VAR_21);
          const svn_string_t *VAR_23 = FUNC_5(VAR_21);

          FUNC_0(VAR_8->change_file_prop(VAR_16, VAR_22, VAR_23, VAR_15));
        }
    }

  if (VAR_14->notify_func2)
    {
      svn_wc_notify_t *VAR_24
        = FUNC_19(VAR_10, VAR_5,
                               VAR_15);
      VAR_24->kind = VAR_4;
      VAR_24->mime_type = VAR_17;
      VAR_24->content_state = VAR_24->prop_state
        = VAR_7;
      VAR_24->lock_state = VAR_6;
      VAR_14->notify_func2(VAR_14->notify_baton2, VAR_24, VAR_15);
    }




  if (VAR_12->special)
    {
      FUNC_16(VAR_20, VAR_2,
                    FUNC_18(VAR_1, VAR_15));
      FUNC_0(VAR_8->change_file_prop(VAR_16, VAR_2,
                                       FUNC_15(VAR_20,
                                                     VAR_2),
                                       VAR_15));
    }


  FUNC_0(FUNC_6(&VAR_18, VAR_10,
                             VAR_16, VAR_8, VAR_20, VAR_15));


  VAR_19 = FUNC_12(VAR_18, VAR_15);
  return FUNC_14(VAR_8->close_file(VAR_16, VAR_19, VAR_15));
}
