
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_io_dirent2_t ;
typedef int svn_filesize_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (int **,int *,int *,char const*,char const*,char const*,scalar_t__,scalar_t__,int const*,int ,int ,int ,void*,int *,int *) ;
 int FUNC_2 (void*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_5 (char const**,int *,int *,int *,char const*,int *,int *,int *) ;
 TYPE_3__* FUNC_6 (int *,char const*,char const*,char const*,scalar_t__,int *,int *) ;
 TYPE_3__* FUNC_7 (int **,int *,int *,int *,char const*,int *,int *) ;
 TYPE_1__* FUNC_8 (char const*,int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_wc__db_t *VAR_6,
                    const char *VAR_7,
                    const char *VAR_8,
                    const char *VAR_9,
                    const char *VAR_10,
                    svn_boolean_t VAR_11,
                    svn_boolean_t VAR_12,
                    svn_boolean_t VAR_13,
                    const svn_io_dirent2_t *VAR_14,
                    svn_filesize_t VAR_15,
                    apr_time_t VAR_16,
                    svn_cancel_func_t VAR_17,
                    void *VAR_18,
                    svn_wc_notify_func2_t VAR_19,
                    void *VAR_20,
                    apr_pool_t *VAR_21)
{
  svn_skel_t *VAR_22 = ((void*)0);






  if (!VAR_11)
    {
      const char *VAR_23 = ((void*)0);
      svn_boolean_t VAR_24 = VAR_0;


      VAR_23 = VAR_7;

      if (VAR_12)
        {
          svn_skel_t *VAR_25;
          const char *VAR_26;
          svn_error_t *VAR_27;


          FUNC_0(FUNC_7(&VAR_25, ((void*)0), ((void*)0),
                                           VAR_6, VAR_7,
                                           VAR_21, VAR_21));

          VAR_27 = FUNC_5(&VAR_26, ((void*)0), ((void*)0),
                                                    VAR_6, VAR_7, VAR_25,
                                                    VAR_21,
                                                    VAR_21);

          if (VAR_27 && VAR_27->apr_err == VAR_1)
            {

              FUNC_3(VAR_27);
              VAR_26 = ((void*)0);
            }
          else
            FUNC_0(VAR_27);

          if (VAR_26)
            {
              svn_node_kind_t VAR_28;


              FUNC_0(FUNC_4(VAR_26, &VAR_28,
                                        VAR_21));

              if (VAR_28 == VAR_4)
                {

                  VAR_24 = VAR_3;
                  VAR_23 = VAR_26;
                }
            }
        }

      FUNC_0(FUNC_1(&VAR_22, ((void*)0), VAR_6, VAR_23,
                             VAR_8, VAR_10,
                             VAR_3 ,
                             VAR_24 ,
                             VAR_14, VAR_15, VAR_16,
                             VAR_17, VAR_18,
                             VAR_21, VAR_21));
    }



  FUNC_0(FUNC_6(VAR_6, VAR_7, VAR_8,
                             VAR_9, VAR_13, VAR_22,
                             VAR_21));

  if (VAR_19)
    {
      svn_wc_notify_t *VAR_29
        = FUNC_8(VAR_8, VAR_5,
                               VAR_21);
      VAR_29->kind = VAR_4;

      (*VAR_19)(VAR_20, VAR_29, VAR_21);
    }
  return VAR_2;
}
