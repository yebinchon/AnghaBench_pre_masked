
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_mutex__t ;
struct TYPE_19__ {int max_files_per_dir; int format; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_20__ {int uuid; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_21__ {void* cancel_baton; int (* cancel_func ) (void*) ;void* notify_baton; int notify_func; scalar_t__ incremental; TYPE_2__* dst_fs; TYPE_2__* src_fs; } ;
typedef TYPE_3__ hotcopy_body_baton_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 char* FUNC_4 (char const*,int ,int *) ;
 int FUNC_5 (TYPE_2__*,char const*,int ,int ,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *,int *) ;
 int FUNC_8 (TYPE_2__*,char const*,int *) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int *) ;
 int FUNC_11 (TYPE_2__*,int ,int *,int ,int *) ;
 int FUNC_12 (TYPE_2__*,int (*) (TYPE_3__*,int *),TYPE_3__*,int *) ;
 int FUNC_13 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_14(svn_fs_t *VAR_5,
                  svn_fs_t *VAR_6,
                  const char *VAR_7,
                  const char *VAR_8,
                  svn_boolean_t VAR_9,
                  svn_fs_hotcopy_notify_t VAR_10,
                  void *VAR_11,
                  svn_cancel_func_t VAR_12,
                  void *VAR_13,
                  svn_mutex__t *VAR_14,
                  apr_pool_t *VAR_15,
                  apr_pool_t *VAR_16)
{
  hotcopy_body_baton_t VAR_17;

  if (VAR_12)
    FUNC_0(VAR_12(VAR_13));

  FUNC_0(FUNC_8(VAR_5, VAR_7, VAR_15));

  if (VAR_9)
    {
      const char *VAR_18;
      svn_node_kind_t VAR_19;



      VAR_18 = FUNC_4(VAR_8, VAR_1,
                                           VAR_15);
      FUNC_0(FUNC_13(VAR_18, &VAR_19,
                                VAR_15));
      if (VAR_19 == VAR_4)
        {

          VAR_9 = VAR_0;
        }
    }

  if (VAR_9)
    {

      FUNC_0(FUNC_8(VAR_6, VAR_8, VAR_15));
      FUNC_0(FUNC_2(VAR_5, VAR_6));

      FUNC_0(FUNC_7(VAR_6, VAR_14,
                                               VAR_15, VAR_16));
      FUNC_0(FUNC_6(VAR_6, VAR_15));
    }
  else
    {


      svn_fs_x__data_t *VAR_20 = VAR_5->fsap_data;


      FUNC_0(FUNC_5(VAR_6, VAR_8, VAR_20->format,
                                         VAR_20->max_files_per_dir,
                                         VAR_15));



      FUNC_0(FUNC_11(VAR_6, VAR_5->uuid, ((void*)0), VAR_3,
                                 VAR_15));



      FUNC_0(FUNC_3(FUNC_9(VAR_6, 0,
                                                     VAR_15),
                                  VAR_15));
      FUNC_0(FUNC_3(FUNC_10(VAR_6, 0,
                                                          VAR_15),
                                  VAR_15));

      FUNC_0(FUNC_7(VAR_6, VAR_14,
                                               VAR_15, VAR_16));
      FUNC_0(FUNC_6(VAR_6, VAR_15));
    }

  if (VAR_12)
    FUNC_0(VAR_12(VAR_13));

  VAR_17.src_fs = VAR_5;
  VAR_17.dst_fs = VAR_6;
  VAR_17.incremental = VAR_9;
  VAR_17.notify_func = VAR_10;
  VAR_17.notify_baton = VAR_11;
  VAR_17.cancel_func = VAR_12;
  VAR_17.cancel_baton = VAR_13;





  if (VAR_9)
    FUNC_0(FUNC_12(VAR_6, FUNC_1, &VAR_17,
                                     VAR_15));
  else
    FUNC_0(FUNC_1(&VAR_17, VAR_15));

  return VAR_2;
}
