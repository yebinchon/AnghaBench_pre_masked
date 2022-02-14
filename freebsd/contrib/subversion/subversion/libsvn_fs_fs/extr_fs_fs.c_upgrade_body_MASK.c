
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_node_kind_t ;
struct TYPE_14__ {int uuid; int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct upgrade_baton_t {int cancel_baton; int cancel_func; int notify_baton; int (* notify_func ) (int ,int,int ,int *) ;TYPE_1__* fs; } ;
struct TYPE_15__ {int format; int max_files_per_dir; scalar_t__ use_log_addressing; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int *) ;
 char* FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int*,int*,scalar_t__*,char const*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int ,int *,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_14 (TYPE_1__*,int (*) (int ,int,int ,int *),int ,int ,int ,int *) ;
 int FUNC_15 (TYPE_1__*,int (*) (int ,int,int ,int *),int ,int ,int ,int *) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int *) ;
 int VAR_10 ;
 int FUNC_17 (int ,int*,int *) ;
 int FUNC_18 (int ,char*,int *) ;
 int FUNC_19 (int ,int *) ;


 int FUNC_20 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_21(void *VAR_11, apr_pool_t *VAR_12)
{
  struct upgrade_baton_t *VAR_13 = VAR_11;
  svn_fs_t *VAR_14 = VAR_13->fs;
  fs_fs_data_t *VAR_15 = VAR_14->fsap_data;
  int VAR_16, VAR_17;
  svn_boolean_t VAR_18;
  const char *VAR_19 = FUNC_3(VAR_14, VAR_12);
  svn_node_kind_t VAR_20;
  svn_boolean_t VAR_21 = VAR_0;


  FUNC_0(FUNC_4(&VAR_16, &VAR_17, &VAR_18,
                      VAR_19, VAR_12));


  FUNC_0(FUNC_17(FUNC_7(VAR_14->path, VAR_1, VAR_12),
                            &VAR_20, VAR_12));
  switch (VAR_20)
    {
    case 128:
      FUNC_0(FUNC_20(VAR_14, VAR_12));
      break;
    case 129:
      break;
    default:
      return FUNC_8(VAR_2, ((void*)0),
                               FUNC_1("'%s' is not a regular file."
                                 " Please move it out of "
                                 "the way and try again"),
                               FUNC_7(VAR_14->path, VAR_1, VAR_12));
    }


  if (VAR_16 == VAR_3)
    return VAR_8;



  if (VAR_16 < VAR_7)
    {
      FUNC_0(FUNC_2(
                           FUNC_10(VAR_14, VAR_12), "0\n",
                           VAR_12));
      FUNC_0(FUNC_2(
                           FUNC_11(VAR_14, VAR_12), "",
                           VAR_12));
    }



  if (VAR_16 < VAR_6)
    {
      FUNC_0(FUNC_19(
          FUNC_12(VAR_14, VAR_12), VAR_12));
    }


  if (VAR_16 < VAR_4)
    FUNC_0(FUNC_18(FUNC_9(VAR_14, VAR_12),
                               "0\n", VAR_12));





  if ( VAR_16 >= VAR_4
      && VAR_16 < VAR_5
      && VAR_17 > 0)
    {
      VAR_21 = VAR_9;
      FUNC_0(FUNC_15(VAR_14,
                                               VAR_13->notify_func,
                                               VAR_13->notify_baton,
                                               VAR_13->cancel_func,
                                               VAR_13->cancel_baton,
                                               VAR_12));
    }




  FUNC_0(FUNC_5(VAR_14, VAR_12));



  VAR_15->format = VAR_3;
  VAR_15->max_files_per_dir = VAR_17;
  VAR_15->use_log_addressing = VAR_18;



  FUNC_0(FUNC_13(VAR_14, VAR_14->uuid, ((void*)0), VAR_12));


  FUNC_0(FUNC_16(VAR_14, VAR_9, VAR_12));

  if (VAR_13->notify_func)
    FUNC_0(VAR_13->notify_func(VAR_13->notify_baton,
                                       VAR_3,
                                       VAR_10,
                                       VAR_12));


  if (VAR_21)
    FUNC_0(FUNC_14(VAR_14,
                                               VAR_13->notify_func,
                                               VAR_13->notify_baton,
                                               VAR_13->cancel_func,
                                               VAR_13->cancel_baton,
                                               VAR_12));


  return VAR_8;
}
