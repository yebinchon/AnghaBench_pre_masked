
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_10__ {int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_11__ {int path; TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int (* svn_fs_hotcopy_notify_t ) (void*,scalar_t__,scalar_t__,int *) ;
typedef int svn_error_t ;
typedef int (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,scalar_t__*,TYPE_2__*,TYPE_2__*,scalar_t__,int,int *) ;
 int FUNC_4 (int *,char const*,char const*,scalar_t__,int,int ,int *) ;
 int * FUNC_5 (int ,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__*,TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int (*) (void*),void*,int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_fs_t *VAR_5,
                  svn_fs_t *VAR_6,
                  svn_revnum_t VAR_7,
                  svn_revnum_t VAR_8,
                  svn_boolean_t VAR_9,
                  const char *VAR_10,
                  const char *VAR_11,
                  svn_fs_hotcopy_notify_t VAR_12,
                  void* VAR_13,
                  svn_cancel_func_t VAR_14,
                  void* VAR_15,
                  apr_pool_t *VAR_16)
{
  svn_fs_x__data_t *VAR_17 = VAR_5->fsap_data;
  int VAR_18 = VAR_17->max_files_per_dir;
  svn_revnum_t VAR_19;
  svn_revnum_t VAR_20;
  svn_revnum_t VAR_21;
  apr_pool_t *VAR_22;


  FUNC_0(FUNC_7(&VAR_19, VAR_5,
                                          VAR_16));
  FUNC_0(FUNC_7(&VAR_20, VAR_6,
                                          VAR_16));





  if (VAR_19 < VAR_20)
    return FUNC_5(VAR_2, ((void*)0),
                             FUNC_2("The hotcopy destination already contains "
                               "more packed revisions (%lu) than the "
                               "hotcopy source contains (%lu)"),
                             VAR_20 - 1,
                             VAR_19 - 1);

  FUNC_0(FUNC_9(VAR_5->path, VAR_6->path,
                               VAR_1, VAR_16));

  if (VAR_14)
    FUNC_0(VAR_14(VAR_15));





  VAR_22 = FUNC_12(VAR_16);

  for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21 += VAR_18)
    {
      svn_boolean_t VAR_23 = VAR_4;
      svn_revnum_t VAR_24;

      FUNC_11(VAR_22);

      if (VAR_14)
        FUNC_0(VAR_14(VAR_15));


      FUNC_0(FUNC_3(&VAR_23, &VAR_20,
                                        VAR_5, VAR_6,
                                        VAR_21, VAR_18,
                                        VAR_22));

      VAR_24 = VAR_21 + VAR_18 - 1;




      if (VAR_24 > VAR_8)
        {
          FUNC_0(FUNC_8(VAR_6, VAR_24, VAR_22));
        }






      if (VAR_12 && !VAR_23)
        VAR_12(VAR_13, VAR_21, VAR_24, VAR_22);



      FUNC_0(FUNC_10(FUNC_6(VAR_6, VAR_21, VAR_22),
                                 VAR_4, VAR_14, VAR_15, VAR_22));
    }

  if (VAR_14)
    FUNC_0(VAR_14(VAR_15));

  FUNC_1(VAR_21 == VAR_19);
  FUNC_1(VAR_19 == VAR_20);



  for (; VAR_21 <= VAR_7; VAR_21++)
    {
      svn_boolean_t VAR_25 = VAR_4;

      FUNC_11(VAR_22);

      if (VAR_14)
        FUNC_0(VAR_14(VAR_15));
      FUNC_0(FUNC_4(&VAR_25, VAR_10, VAR_11,
                                      VAR_21, VAR_18, VAR_0,
                                      VAR_22));


      FUNC_0(FUNC_4(&VAR_25, VAR_10, VAR_11,
                                      VAR_21, VAR_18, VAR_4,
                                      VAR_22));




      if (VAR_21 > VAR_8)
        {
          if (VAR_18 && (VAR_21 % VAR_18 == 0))
            {
              FUNC_0(FUNC_8(VAR_6, VAR_21, VAR_22));
            }
        }

      if (VAR_12 && !VAR_25)
        VAR_12(VAR_13, VAR_21, VAR_21, VAR_22);
    }
  FUNC_13(VAR_22);



  FUNC_1(VAR_21 == VAR_7 + 1);

  return VAR_3;
}
