
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_46__ {int path; TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_fs_hotcopy_notify_t ;
struct TYPE_47__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef TYPE_2__* (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
struct hotcopy_body_baton {void* cancel_baton; TYPE_2__* (* cancel_func ) (void*) ;void* notify_baton; int notify_func; scalar_t__ incremental; TYPE_1__* dst_fs; TYPE_1__* src_fs; } ;
struct TYPE_48__ {scalar_t__ format; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *,char const*,int ,int ,int ,TYPE_2__* (*) (void*),void*,int *) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,char const*,char const*,char const*,char const*,int ,void*,TYPE_2__* (*) (void*),void*,int *) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,TYPE_1__*,scalar_t__,char const*,char const*,char const*,char const*,int ,void*,TYPE_2__* (*) (void*),void*,int *) ;
 char* FUNC_6 (char const*,int *) ;
 TYPE_2__* FUNC_7 (char const**,int ,int *) ;
 char* FUNC_8 (int ,int ,int *) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int ,int *,int ,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_11 (TYPE_2__*,int ,char const*,char const*,char const*) ;
 TYPE_2__* FUNC_12 (TYPE_2__*) ;
 TYPE_2__* FUNC_13 (TYPE_1__*,scalar_t__,int *) ;
 TYPE_2__* FUNC_14 (scalar_t__*,int *,int *,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_15 (TYPE_1__*,scalar_t__,int ,int ,int *) ;
 TYPE_2__* FUNC_16 (TYPE_1__*,int ,int *) ;
 TYPE_2__* FUNC_17 (scalar_t__*,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_18 (char const*,scalar_t__*,int *) ;
 TYPE_2__* FUNC_19 (char const*,int ,int ,int ,TYPE_2__* (*) (void*),void*,int *) ;
 TYPE_2__* FUNC_20 (int ,int ,int ,int *) ;
 TYPE_2__* FUNC_21 (char const*,int *) ;
 TYPE_2__* FUNC_22 (char const*,int ,TYPE_2__* (*) (void*),void*,int *) ;
 TYPE_2__* FUNC_23 (char const*,int ,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_2__* FUNC_24 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_25(void *VAR_17, apr_pool_t *VAR_18)
{
  struct hotcopy_body_baton *VAR_19 = VAR_17;
  svn_fs_t *VAR_20 = VAR_19->src_fs;
  fs_fs_data_t *VAR_21 = VAR_20->fsap_data;
  svn_fs_t *VAR_22 = VAR_19->dst_fs;
  fs_fs_data_t *VAR_23 = VAR_22->fsap_data;
  svn_boolean_t VAR_24 = VAR_19->incremental;
  svn_fs_hotcopy_notify_t VAR_25 = VAR_19->notify_func;
  void* VAR_26 = VAR_19->notify_baton;
  svn_cancel_func_t VAR_27 = VAR_19->cancel_func;
  void* VAR_28 = VAR_19->cancel_baton;
  svn_revnum_t VAR_29;
  apr_uint64_t VAR_30;
  apr_uint64_t VAR_31;
  svn_revnum_t VAR_32;
  const char *VAR_33;
  const char *VAR_34;
  const char *VAR_35;
  const char *VAR_36;
  const char *VAR_37;
  const char *VAR_38;
  svn_node_kind_t VAR_39;







  if (VAR_21->format >= VAR_9)
    {
      svn_error_t *VAR_40;

      VAR_40 = FUNC_20(VAR_20->path, VAR_22->path, VAR_1,
                                 VAR_18);
      if (VAR_40)
        {
          if (FUNC_0(VAR_40->apr_err))
            {
              const char *VAR_41;
              const char *VAR_42;
              const char *VAR_43;
              svn_error_t *VAR_44;

              VAR_43 = FUNC_8(VAR_20->path, VAR_1, VAR_18);
              VAR_44 = FUNC_7(&VAR_41, VAR_20->path, VAR_18);
              if (VAR_44)
                return FUNC_12(FUNC_9(VAR_40, VAR_44));
              VAR_44 = FUNC_7(&VAR_42, VAR_22->path, VAR_18);
              if (VAR_44)
                return FUNC_12(FUNC_9(VAR_40, VAR_44));



              VAR_41 = FUNC_6(VAR_41, VAR_18);
              VAR_42 = FUNC_6(VAR_42, VAR_18);

              return FUNC_11(VAR_40,
                                 FUNC_2("Failed to create hotcopy at '%s'. "
                                   "The file '%s' is missing from the source "
                                   "repository. Please create this file, for "
                                   "instance by running 'svnadmin upgrade %s'"),
                                 VAR_42, VAR_43, VAR_41);
            }
          else
            return FUNC_12(VAR_40);
        }
    }

  if (VAR_27)
    FUNC_1(VAR_27(VAR_28));






  FUNC_1(FUNC_14(&VAR_29, &VAR_30,
                                  &VAR_31, VAR_20, VAR_18));
  if (VAR_24)
    {
      FUNC_1(FUNC_17(&VAR_32, VAR_22, VAR_18));
      if (VAR_29 < VAR_32)
        return FUNC_10(VAR_8, ((void*)0),
                 FUNC_2("The hotcopy destination already contains more revisions "
                   "(%lu) than the hotcopy source contains (%lu); are source "
                   "and destination swapped?"),
                   VAR_32, VAR_29);
    }
  else
    VAR_32 = 0;

  VAR_35 = FUNC_8(VAR_20->path, VAR_5, VAR_18);
  VAR_36 = FUNC_8(VAR_22->path, VAR_5, VAR_18);
  VAR_33 = FUNC_8(VAR_20->path, VAR_4, VAR_18);
  VAR_34 = FUNC_8(VAR_22->path, VAR_4, VAR_18);



  FUNC_1(FUNC_21(VAR_36, VAR_18));
  FUNC_1(FUNC_21(VAR_34, VAR_18));

  if (VAR_27)
    FUNC_1(VAR_27(VAR_28));





  if (VAR_21->format >= VAR_10)
    {
      FUNC_1(FUNC_4(VAR_20, VAR_22, VAR_29, VAR_32,
                                VAR_24, VAR_35, VAR_36,
                                VAR_33, VAR_34,
                                VAR_25, VAR_26,
                                VAR_27, VAR_28, VAR_18));
      FUNC_1(FUNC_15(VAR_22, VAR_29, 0, 0, VAR_18));
    }
  else
    {
      FUNC_1(FUNC_5(VAR_20, VAR_22, VAR_29,
                                    VAR_35, VAR_36,
                                    VAR_33, VAR_34,
                                    VAR_25, VAR_26,
                                    VAR_27, VAR_28, VAR_18));
      FUNC_1(FUNC_15(VAR_22, VAR_29, VAR_30,
                                       VAR_31, VAR_18));
    }





  VAR_38 = FUNC_8(VAR_22->path, VAR_2, VAR_18);
  FUNC_1(FUNC_22(VAR_38, VAR_14, VAR_27, VAR_28,
                             VAR_18));
  VAR_37 = FUNC_8(VAR_20->path, VAR_2, VAR_18);
  FUNC_1(FUNC_18(VAR_37, &VAR_39, VAR_18));
  if (VAR_39 == VAR_15)
    FUNC_1(FUNC_19(VAR_37, VAR_22->path,
                                        VAR_2, VAR_14,
                                        VAR_27, VAR_28, VAR_18));


  VAR_37 = FUNC_8(VAR_20->path, VAR_3, VAR_18);
  FUNC_1(FUNC_18(VAR_37, &VAR_39, VAR_18));
  if (VAR_39 == VAR_15)
    FUNC_1(FUNC_3(((void*)0), VAR_37, VAR_22->path,
                                            VAR_3, VAR_14,
                                            VAR_27, VAR_28, VAR_18));






  if (VAR_23->format >= VAR_11)
    {


      VAR_37 = FUNC_8(VAR_20->path, VAR_7, VAR_18);
      VAR_38 = FUNC_8(VAR_22->path, VAR_7, VAR_18);
      FUNC_1(FUNC_18(VAR_37, &VAR_39, VAR_18));
      if (VAR_39 == VAR_16)
        {
          FUNC_1(FUNC_24(VAR_37, VAR_38, VAR_18));



          FUNC_1(FUNC_23(VAR_38, VAR_0, VAR_18));
          FUNC_1(FUNC_13(VAR_22, VAR_29, VAR_18));
        }
    }


  if (VAR_23->format >= VAR_12)
    FUNC_1(FUNC_20(VAR_20->path, VAR_22->path,
                                 VAR_6, VAR_18));


  FUNC_1(FUNC_16(VAR_22, VAR_14, VAR_18));

  return VAR_13;
}
