
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_13__ {int path; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int (* svn_fs_hotcopy_notify_t ) (void*,scalar_t__,scalar_t__,int *) ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {int max_files_per_dir; scalar_t__ format; } ;
typedef TYPE_2__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,TYPE_1__*,TYPE_1__*,scalar_t__,int,int *) ;
 int FUNC_4 (scalar_t__*,char const*,char const*,scalar_t__,int,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ,int,int *) ;
 int FUNC_7 (int ,int (*) (void*),void*,int *) ;
 int * FUNC_8 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_10 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_11 (scalar_t__*,TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int ,int ,int *) ;
 int FUNC_13 (int ,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_fs_t *VAR_6,
                  svn_fs_t *VAR_7,
                  svn_revnum_t VAR_8,
                  svn_revnum_t VAR_9,
                  svn_boolean_t VAR_10,
                  const char *VAR_11,
                  const char *VAR_12,
                  const char *VAR_13,
                  const char *VAR_14,
                  svn_fs_hotcopy_notify_t VAR_15,
                  void* VAR_16,
                  svn_cancel_func_t VAR_17,
                  void* VAR_18,
                  apr_pool_t *VAR_19)
{
  fs_fs_data_t *VAR_20 = VAR_6->fsap_data;
  fs_fs_data_t *VAR_21 = VAR_7->fsap_data;
  int VAR_22 = VAR_20->max_files_per_dir;
  svn_revnum_t VAR_23;
  svn_revnum_t VAR_24;
  svn_revnum_t VAR_25;
  apr_pool_t *VAR_26;


  if (VAR_20->format >= VAR_2)
    {
      FUNC_0(FUNC_11(&VAR_23,
                                               VAR_6, VAR_19));
      FUNC_0(FUNC_11(&VAR_24,
                                               VAR_7, VAR_19));





      if (VAR_23 < VAR_24)
        return FUNC_8(VAR_1, ((void*)0),
                                 FUNC_2("The hotcopy destination already contains "
                                   "more packed revisions (%lu) than the "
                                   "hotcopy source contains (%lu)"),
                                   VAR_24 - 1,
                                   VAR_23 - 1);

      FUNC_0(FUNC_13(VAR_6->path, VAR_7->path,
                                   VAR_0, VAR_19));
    }
  else
    {
      VAR_23 = 0;
      VAR_24 = 0;
    }

  if (VAR_17)
    FUNC_0(VAR_17(VAR_18));





  VAR_26 = FUNC_15(VAR_19);

  for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25 += VAR_22)
    {
      svn_boolean_t VAR_27 = VAR_5;
      svn_revnum_t VAR_28;

      FUNC_14(VAR_26);

      if (VAR_17)
        FUNC_0(VAR_17(VAR_18));


      FUNC_0(FUNC_3(&VAR_27, &VAR_24,
                                        VAR_6, VAR_7,
                                        VAR_25, VAR_22,
                                        VAR_26));

      VAR_28 = VAR_25 + VAR_22 - 1;




      if (VAR_28 > VAR_9)
        {
          FUNC_0(FUNC_12(VAR_7, VAR_28, 0, 0,
                                           VAR_26));
        }






      if (VAR_15 && !VAR_27)
        VAR_15(VAR_16, VAR_25, VAR_28, VAR_26);


      if (VAR_10)
        {
          FUNC_0(FUNC_5(VAR_7, VAR_25,
                                           VAR_25 + VAR_22,
                                           VAR_22, VAR_26));
          if (VAR_21->format >= VAR_3)
            FUNC_0(FUNC_6(VAR_7, VAR_25,
                                                 VAR_25 + VAR_22,
                                                 VAR_22,
                                                 VAR_26));
        }



      FUNC_0(FUNC_7(FUNC_9(VAR_7, VAR_25, VAR_26),
                            VAR_17, VAR_18, VAR_26));
      if (VAR_25 > 0 && VAR_21->format >= VAR_3)
        FUNC_0(FUNC_7(FUNC_10(VAR_7, VAR_25,
                                                             VAR_26),
                              VAR_17, VAR_18, VAR_26));
    }

  if (VAR_17)
    FUNC_0(VAR_17(VAR_18));

  FUNC_1(VAR_25 == VAR_23);
  FUNC_1(VAR_23 == VAR_24);



  for (; VAR_25 <= VAR_8; VAR_25++)
    {
      svn_boolean_t VAR_29 = VAR_5;

      FUNC_14(VAR_26);

      if (VAR_17)
        FUNC_0(VAR_17(VAR_18));
      FUNC_0(FUNC_4(&VAR_29,
                                      VAR_11, VAR_12, VAR_25,
                                      VAR_22,
                                      VAR_26));

      FUNC_0(FUNC_4(&VAR_29,
                                      VAR_13, VAR_14,
                                      VAR_25, VAR_22,
                                      VAR_26));




      if (VAR_25 > VAR_9)
        {
          if (VAR_22 && (VAR_25 % VAR_22 == 0))
            {
              FUNC_0(FUNC_12(VAR_7, VAR_25, 0, 0,
                                               VAR_26));
            }
        }

      if (VAR_15 && !VAR_29)
        VAR_15(VAR_16, VAR_25, VAR_25, VAR_26);
    }
  FUNC_16(VAR_26);



  FUNC_1(VAR_25 == VAR_8 + 1);

  return VAR_4;
}
