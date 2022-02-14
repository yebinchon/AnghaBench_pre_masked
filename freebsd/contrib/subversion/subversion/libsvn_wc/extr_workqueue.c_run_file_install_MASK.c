
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int work_item_baton_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_wc__db_lock_t ;
typedef int svn_subst_eol_style_t ;
typedef int svn_stream_t ;
struct TYPE_6__ {int len; int data; struct TYPE_6__* next; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {TYPE_2__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char const*,int ,int *) ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (scalar_t__,char const*,int *) ;
 int FUNC_8 (char const*,int ,int ,int *) ;
 int FUNC_9 (char const*,int ,int *) ;
 int FUNC_10 (scalar_t__*,TYPE_2__*,int *) ;
 int FUNC_11 (int **,char const*,int *,int *) ;
 int FUNC_12 (int *,char const*,int ,int *) ;
 int FUNC_13 (int *,int *,int ,void*,int *) ;
 int FUNC_14 (int **,char const*,int *,int *) ;
 int FUNC_15 (int **,char const*,int *,int *) ;
 int * FUNC_16 (int *,char const*,int ,int *,int ,int *) ;
 scalar_t__ FUNC_17 (int ,char const*,int *,int ,int ) ;
 int FUNC_18 (char const**,int *,char const*,char const*,int *,int *) ;
 int FUNC_19 (char const**,char const*,int const*,int *,int *) ;
 int FUNC_20 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int **,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_21 (char const**,int const**,int **,scalar_t__*,int *,char const*,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_22 (char const**,int *,char const*,int *,int *) ;
 int FUNC_23 (int *,char const**,int **,int*,int *,char const*,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(work_item_baton_t *VAR_7,
                 svn_wc__db_t *VAR_8,
                 const svn_skel_t *VAR_9,
                 const char *VAR_10,
                 svn_cancel_func_t VAR_11,
                 void *VAR_12,
                 apr_pool_t *VAR_13)
{
  const svn_skel_t *VAR_14 = VAR_9->children->next;
  const svn_skel_t *VAR_15 = VAR_14->next->next->next;
  const char *VAR_16;
  const char *VAR_17;
  svn_boolean_t VAR_18;
  svn_boolean_t VAR_19;
  svn_boolean_t VAR_20;
  svn_stream_t *VAR_21;
  svn_subst_eol_style_t VAR_22;
  const char *VAR_23;
  apr_hash_t *VAR_24;
  const char *VAR_25;
  svn_stream_t *VAR_26;
  apr_int64_t VAR_27;
  const char *VAR_28;
  const char *VAR_29;
  const svn_checksum_t *VAR_30;
  apr_hash_t *VAR_31;
  apr_time_t VAR_32;

  VAR_16 = FUNC_2(VAR_13, VAR_14->data, VAR_14->len);
  FUNC_0(FUNC_18(&VAR_17, VAR_8, VAR_10,
                                  VAR_16, VAR_13, VAR_13));

  FUNC_0(FUNC_10(&VAR_27, VAR_14->next, VAR_13));
  VAR_18 = (VAR_27 != 0);
  FUNC_0(FUNC_10(&VAR_27, VAR_14->next->next, VAR_13));
  VAR_19 = (VAR_27 != 0);

  FUNC_0(FUNC_21(&VAR_28,
                                            &VAR_30, &VAR_31,
                                            &VAR_32,
                                            VAR_8, VAR_17, VAR_10,
                                            VAR_13, VAR_13));

  if (VAR_15 != ((void*)0))
    {

      VAR_16 = FUNC_2(VAR_13, VAR_15->data, VAR_15->len);
      FUNC_0(FUNC_18(&VAR_29, VAR_8, VAR_10,
                                      VAR_16,
                                      VAR_13, VAR_13));
    }
  else if (! VAR_30)
    {







      return FUNC_5(VAR_1, ((void*)0),
                               FUNC_1("Can't install '%s' from pristine store, "
                                 "because no checksum is recorded for this "
                                 "file"),
                               FUNC_4(VAR_17,
                                                      VAR_13));
    }
  else
    {
      FUNC_0(FUNC_19(&VAR_29,
                                                  VAR_28,
                                                  VAR_30,
                                                  VAR_13, VAR_13));
    }

  FUNC_0(FUNC_14(&VAR_21, VAR_29,
                                   VAR_13, VAR_13));


  FUNC_0(FUNC_23(&VAR_22, &VAR_23,
                                     &VAR_24,
                                     &VAR_20, VAR_8, VAR_17,
                                     VAR_31, VAR_0,
                                     VAR_13, VAR_13));
  if (VAR_20)
    {


      FUNC_0(FUNC_15(&VAR_26, VAR_17,
                                           VAR_13, VAR_13));



      FUNC_0(FUNC_13(VAR_21, VAR_26,
                               VAR_11, VAR_12,
                               VAR_13));




      return VAR_2;
    }

  if (FUNC_17(VAR_22, VAR_23, VAR_24,
                                     VAR_0 ,
                                     VAR_5 ))
    {

      VAR_21 = FUNC_16(VAR_21, VAR_23,
                                               VAR_5 ,
                                               VAR_24,
                                               VAR_5 ,
                                               VAR_13);
    }


  FUNC_0(FUNC_22(&VAR_25,
                                         VAR_8, VAR_28,
                                         VAR_13, VAR_13));




  FUNC_0(FUNC_11(&VAR_26, VAR_25,
                                         VAR_13, VAR_13));



  FUNC_0(FUNC_13(VAR_21, VAR_26,
                           VAR_11, VAR_12,
                           VAR_13));





  FUNC_0(FUNC_12(VAR_26, VAR_17,
                                     VAR_5 , VAR_13));



  if (VAR_31 && FUNC_6(VAR_31, VAR_3))
    FUNC_0(FUNC_8(VAR_17, VAR_5, VAR_0,
                                       VAR_13));




  if (VAR_31 && FUNC_6(VAR_31, VAR_4))
    {
      svn_wc__db_status_t VAR_33;
      svn_wc__db_lock_t *VAR_34;
      FUNC_0(FUNC_20(&VAR_33, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), &VAR_34, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                   VAR_8, VAR_17,
                                   VAR_13, VAR_13));

      if (!VAR_34 && VAR_33 != VAR_6)
        FUNC_0(FUNC_9(VAR_17, VAR_0, VAR_13));
    }

  if (VAR_18)
    {
      if (VAR_32)
        FUNC_0(FUNC_7(VAR_32,
                                              VAR_17,
                                              VAR_13));
    }


  if (VAR_19)
    {
      FUNC_0(FUNC_3(VAR_7, VAR_17,
                                      VAR_0 ,
                                      VAR_13));
    }

  return VAR_2;
}
