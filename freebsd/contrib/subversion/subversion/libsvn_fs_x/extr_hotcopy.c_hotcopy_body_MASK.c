
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_11__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_12__ {void* cancel_baton; int (* cancel_func ) (void*) ;void* notify_baton; int notify_func; scalar_t__ incremental; TYPE_1__* dst_fs; TYPE_1__* src_fs; } ;
typedef TYPE_2__ hotcopy_body_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,char const*,char const*,int ,void*,int (*) (void*),void*,int *) ;
 char* FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int *) ;
 int FUNC_10 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_11 (char const*,scalar_t__*,int *) ;
 int FUNC_12 (char const*,int ,int ,int ,int (*) (void*),void*,int *) ;
 int FUNC_13 (int ,int ,int ,int *) ;
 int FUNC_14 (char const*,int *) ;
 int FUNC_15 (char const*,int ,int (*) (void*),void*,int *) ;
 int FUNC_16 (char const*,int ,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_17 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_18(void *VAR_11,
             apr_pool_t *VAR_12)
{
  hotcopy_body_baton_t *VAR_13 = VAR_11;
  svn_fs_t *VAR_14 = VAR_13->src_fs;
  svn_fs_t *VAR_15 = VAR_13->dst_fs;
  svn_boolean_t VAR_16 = VAR_13->incremental;
  svn_fs_hotcopy_notify_t VAR_17 = VAR_13->notify_func;
  void* VAR_18 = VAR_13->notify_baton;
  svn_cancel_func_t VAR_19 = VAR_13->cancel_func;
  void* VAR_20 = VAR_13->cancel_baton;
  svn_revnum_t VAR_21;
  svn_revnum_t VAR_22;
  const char *VAR_23;
  const char *VAR_24;
  const char *VAR_25;
  const char *VAR_26;
  svn_node_kind_t VAR_27;







  FUNC_0(FUNC_13(VAR_14->path, VAR_15->path, VAR_1,
                               VAR_12));

  if (VAR_19)
    FUNC_0(VAR_19(VAR_20));






  FUNC_0(FUNC_6(&VAR_21, VAR_14, VAR_12));
  if (VAR_16)
    {
      FUNC_0(FUNC_10(&VAR_22, VAR_15, VAR_12));
      if (VAR_21 < VAR_22)
        return FUNC_4(VAR_6, ((void*)0),
                 FUNC_1("The hotcopy destination already contains more revisions "
                   "(%lu) than the hotcopy source contains (%lu); are source "
                   "and destination swapped?"),
                   VAR_22, VAR_21);
    }
  else
    VAR_22 = 0;

  VAR_23 = FUNC_3(VAR_14->path, VAR_3, VAR_12);
  VAR_24 = FUNC_3(VAR_15->path, VAR_3, VAR_12);



  FUNC_0(FUNC_14(VAR_24, VAR_12));
  if (VAR_19)
    FUNC_0(VAR_19(VAR_20));





  FUNC_0(FUNC_2(VAR_14, VAR_15, VAR_21, VAR_22,
                            VAR_16, VAR_23, VAR_24,
                            VAR_17, VAR_18,
                            VAR_19, VAR_20, VAR_12));
  FUNC_0(FUNC_8(VAR_15, VAR_21, VAR_12));





  VAR_26 = FUNC_3(VAR_15->path, VAR_2, VAR_12);
  FUNC_0(FUNC_15(VAR_26, VAR_8, VAR_19, VAR_20,
                             VAR_12));
  VAR_25 = FUNC_3(VAR_14->path, VAR_2, VAR_12);
  FUNC_0(FUNC_11(VAR_25, &VAR_27, VAR_12));
  if (VAR_27 == VAR_9)
    FUNC_0(FUNC_12(VAR_25, VAR_15->path,
                                        VAR_2, VAR_8,
                                        VAR_19, VAR_20,
                                        VAR_12));
  VAR_25 = FUNC_3(VAR_14->path, VAR_5, VAR_12);
  VAR_26 = FUNC_3(VAR_15->path, VAR_5, VAR_12);
  FUNC_0(FUNC_11(VAR_25, &VAR_27, VAR_12));
  if (VAR_27 == VAR_10)
    {


      FUNC_0(FUNC_17(VAR_25, VAR_26, VAR_12));



      FUNC_0(FUNC_16(VAR_26, VAR_0, VAR_12));
      FUNC_0(FUNC_5(VAR_15, VAR_21,
                                          VAR_12));
    }


  FUNC_0(FUNC_13(VAR_14->path, VAR_15->path,
                                VAR_4, VAR_12));





  FUNC_0(FUNC_7(VAR_15, VAR_12));


  FUNC_0(FUNC_9(VAR_15, VAR_8, VAR_12));

  return VAR_7;
}
