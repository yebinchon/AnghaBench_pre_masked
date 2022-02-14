
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_mutex__t ;
struct TYPE_15__ {int uuid; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
struct hotcopy_body_baton {void* cancel_baton; int (* cancel_func ) (void*) ;void* notify_baton; int notify_func; scalar_t__ incremental; TYPE_1__* dst_fs; TYPE_1__* src_fs; } ;
struct TYPE_16__ {int use_log_addressing; int max_files_per_dir; int format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (struct hotcopy_body_baton*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *) ;
 char* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_12 (TYPE_1__*,int (*) (struct hotcopy_body_baton*,int *),struct hotcopy_body_baton*,int *) ;
 int FUNC_13 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_14(svn_fs_t *VAR_4,
                   svn_fs_t *VAR_5,
                   const char *VAR_6,
                   const char *VAR_7,
                   svn_boolean_t VAR_8,
                   svn_fs_hotcopy_notify_t VAR_9,
                   void *VAR_10,
                   svn_cancel_func_t VAR_11,
                   void *VAR_12,
                   svn_mutex__t *VAR_13,
                   apr_pool_t *VAR_14,
                   apr_pool_t *VAR_15)
{
  struct hotcopy_body_baton VAR_16;

  if (VAR_11)
    FUNC_0(VAR_11(VAR_12));

  FUNC_0(FUNC_8(VAR_4, VAR_6, VAR_14));

  if (VAR_8)
    {
      const char *VAR_17;
      svn_node_kind_t VAR_18;



      VAR_17 = FUNC_4(VAR_7, VAR_1, VAR_14);
      FUNC_0(FUNC_13(VAR_17, &VAR_18, VAR_14));
      if (VAR_18 == VAR_3)
        {

          VAR_8 = VAR_0;
        }
    }

  if (VAR_8)
    {

      FUNC_0(FUNC_8(VAR_5, VAR_7, VAR_14));
      FUNC_0(FUNC_2(VAR_4, VAR_5, VAR_14));

      FUNC_0(FUNC_7(VAR_5, VAR_13,
                                                VAR_14, VAR_15));
      FUNC_0(FUNC_6(VAR_5, VAR_14));
    }
  else
    {


      fs_fs_data_t *VAR_19 = VAR_4->fsap_data;


      FUNC_0(FUNC_5(VAR_5, VAR_7, VAR_19->format,
                                          VAR_19->max_files_per_dir,
                                          VAR_19->use_log_addressing,
                                          VAR_14));



      FUNC_0(FUNC_11(VAR_5, VAR_4->uuid, ((void*)0), VAR_14));



      FUNC_0(FUNC_3(FUNC_9(VAR_5, 0, VAR_14),
                                  VAR_14));
      FUNC_0(FUNC_3(FUNC_10(VAR_5, 0, VAR_14),
                                  VAR_14));

      FUNC_0(FUNC_7(VAR_5, VAR_13,
                                                VAR_14, VAR_15));
      FUNC_0(FUNC_6(VAR_5, VAR_14));
    }

  if (VAR_11)
    FUNC_0(VAR_11(VAR_12));

  VAR_16.src_fs = VAR_4;
  VAR_16.dst_fs = VAR_5;
  VAR_16.incremental = VAR_8;
  VAR_16.notify_func = VAR_9;
  VAR_16.notify_baton = VAR_10;
  VAR_16.cancel_func = VAR_11;
  VAR_16.cancel_baton = VAR_12;





  if (VAR_8)
    FUNC_0(FUNC_12(VAR_5, FUNC_1, &VAR_16, VAR_14));
  else
    FUNC_0(FUNC_1(&VAR_16, VAR_14));

  return VAR_2;
}
