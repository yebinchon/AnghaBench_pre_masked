
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {char const* path; int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int (* close_file ) (void*,char const*,int *) ;int (* apply_textdelta ) (void*,char const*,int *,scalar_t__*,void**) ;} ;
typedef TYPE_2__ svn_delta_editor_t ;
struct TYPE_17__ {int cancel_baton; int cancel_func; int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;
typedef TYPE_3__ svn_client_ctx_t ;
struct TYPE_18__ {scalar_t__ kind; } ;
typedef TYPE_4__ svn_checksum_t ;
struct TYPE_19__ {int * base_stream; TYPE_4__* base_checksum; int * src_stream; TYPE_4__* src_checksum; } ;
typedef TYPE_5__ mtcc_op_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__ const*,TYPE_5__*,void*,int *) ;
 int FUNC_2 (void*,char const*,int *,scalar_t__*,void**) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;
 int FUNC_4 (void*,char const*,int *) ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (TYPE_4__*,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (char const*,char const*,int *) ;
 int * FUNC_8 (int *,TYPE_4__**,int *,scalar_t__,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,scalar_t__,void*,scalar_t__,int *,int ,int ,int *,int *) ;
 int FUNC_11 (int *,scalar_t__,void*,int *,int *) ;
 TYPE_1__* FUNC_12 (int ,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_13(const svn_delta_editor_t *VAR_5,
            mtcc_op_t *VAR_6,
            void *VAR_7,
            const char *VAR_8,
            const char *VAR_9,
            svn_client_ctx_t *VAR_10,
            apr_pool_t *VAR_11)
{
  const char *VAR_12 = ((void*)0);
  svn_checksum_t *VAR_13 = VAR_6->src_checksum;
  FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_7, VAR_11));

  if (VAR_6->src_stream)
    {
      const char *VAR_14 = ((void*)0);
      apr_pool_t *VAR_15 = VAR_11;
      svn_txdelta_window_handler_t VAR_16;
      void *VAR_17;
      svn_stream_t *VAR_18 = VAR_6->src_stream;

      if (VAR_6->base_checksum && VAR_6->base_checksum->kind == VAR_1)
        VAR_14 = FUNC_5(VAR_6->base_checksum, VAR_11);



      FUNC_0(VAR_5->apply_textdelta(VAR_7, VAR_14, VAR_15,
                                      &VAR_16, &VAR_17));

      if (VAR_10->notify_func2)
        {
          svn_wc_notify_t *VAR_19;

          VAR_19 = FUNC_12(
                            FUNC_7(VAR_8, VAR_9,
                                                        VAR_11),
                            VAR_4,
                            VAR_11);

          VAR_19->path = VAR_9;
          VAR_19->kind = VAR_3;

          VAR_10->notify_func2(VAR_10->notify_baton2, VAR_19, VAR_11);
        }

      if (VAR_16 != VAR_2)
        {
          if (!VAR_13 || VAR_13->kind != VAR_1)
            VAR_18 = FUNC_8(VAR_18, &VAR_13, ((void*)0),
                                                 VAR_1,
                                                 VAR_0, VAR_11);

          if (!VAR_6->base_stream)
            FUNC_0(FUNC_11(VAR_18,
                                            VAR_16, VAR_17, ((void*)0),
                                            VAR_11));
          else
            FUNC_0(FUNC_10(VAR_6->base_stream, VAR_18,
                                    VAR_16, VAR_17,
                                    VAR_1, ((void*)0),
                                    VAR_10->cancel_func, VAR_10->cancel_baton,
                                    VAR_11, VAR_11));
        }

      FUNC_0(FUNC_9(VAR_18));
      if (VAR_6->base_stream)
        FUNC_0(FUNC_9(VAR_6->base_stream));
    }

  if (VAR_13 && VAR_13->kind == VAR_1)
    VAR_12 = FUNC_5(VAR_13, VAR_11);

  return FUNC_6(VAR_5->close_file(VAR_7, VAR_12,
                                            VAR_11));
}
