
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sdb; int wc_id; int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_sqlite__stmt_t ;
typedef int const svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ kind; scalar_t__ filesize; scalar_t__ mtime; } ;
typedef TYPE_2__ svn_io_dirent2_t ;
typedef scalar_t__ svn_filesize_t ;
typedef int svn_error_t ;
typedef int * (* svn_cancel_func_t ) (void*) ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ,int const*,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int VAR_7 ;
 int * FUNC_4 (scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 char* FUNC_5 (int ,char const*,int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (TYPE_2__ const**,char const*,int,int,int *,int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,char*,int ,char const*) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 char* FUNC_14 (int *,int ,int *) ;
 scalar_t__ FUNC_15 (int *,int,int ) ;
 int * FUNC_16 (int **,int ,int ) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int*,int *) ;
 int * FUNC_19 (int *) ;
 int * FUNC_20 (TYPE_1__*,char const*,int const*,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_21 (int*,int *,char const*,int,int *) ;
 int * FUNC_22 (int const**,int *,int ,char const*,int,int *,int *) ;
 int * FUNC_23 (int const**,int *,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_24(svn_boolean_t *VAR_13,
                svn_wc__db_wcroot_t *VAR_14,
                const char *VAR_15,
                svn_wc__db_t *VAR_16,
                svn_boolean_t VAR_17,
                svn_boolean_t VAR_18,
                const svn_skel_t *VAR_19,
                const svn_skel_t *VAR_20,
                svn_cancel_func_t VAR_21,
                void *VAR_22,
                apr_pool_t *VAR_23)
{
  svn_sqlite__stmt_t *VAR_24;





  FUNC_1(!VAR_17 || VAR_16 != ((void*)0));

  if (VAR_13)
    *VAR_13 = VAR_0;

  if (VAR_17
      && (!VAR_18 || *VAR_15 == '\0'))
    {
      svn_boolean_t VAR_25;
      apr_pool_t *VAR_26;
      svn_error_t *VAR_27 = ((void*)0);


      FUNC_0(FUNC_16(&VAR_24, VAR_14->sdb,
                                        VAR_4));
      FUNC_0(FUNC_11(VAR_24, "is",
                                VAR_14->wc_id, VAR_15));

      FUNC_0(FUNC_18(&VAR_25, VAR_24));

      VAR_26 = FUNC_9(VAR_23);

      while (VAR_25)
        {
          const char *VAR_28;
          const char *VAR_29;
          svn_node_kind_t VAR_30;
          svn_boolean_t VAR_31;
          svn_filesize_t VAR_32;
          apr_int64_t VAR_33;
          const svn_io_dirent2_t *VAR_34;
          svn_boolean_t VAR_35 = VAR_6;
          svn_skel_t *VAR_36 = ((void*)0);

          FUNC_8(VAR_26);

          VAR_28 = FUNC_14(VAR_24, 0, ((void*)0));
          VAR_30 = FUNC_15(VAR_24, 1, VAR_7);

          VAR_29 = FUNC_5(VAR_14->abspath, VAR_28,
                                          VAR_26);

          if (VAR_30 == VAR_9)
            {
              VAR_31 = !FUNC_13(VAR_24, 2);
              VAR_32 = FUNC_3(VAR_24, 3);
              VAR_33 = FUNC_12(VAR_24, 4);
            }

          if (VAR_21)
            VAR_27 = VAR_21(VAR_22);

          if (VAR_27)
            break;

          VAR_27 = FUNC_7(&VAR_34, VAR_29, VAR_0, VAR_6,
                                    VAR_26, VAR_26);

          if (VAR_27)
            break;

          if (VAR_18
              || VAR_34->kind != VAR_9
              || VAR_30 != VAR_9)
            {

              VAR_35 = VAR_0;
            }
          else if (VAR_30 == VAR_9
                   && VAR_34->kind == VAR_9
                   && VAR_34->filesize == VAR_32
                   && VAR_34->mtime == VAR_33)
            {
              VAR_35 = VAR_0;
            }
          else if (VAR_31)
            VAR_27 = FUNC_21(&VAR_35,
                                                   VAR_16, VAR_29,
                                                   VAR_0, VAR_26);

          if (VAR_27)
            break;

          if (VAR_35)
            {
              if (VAR_13)
                *VAR_13 = VAR_6;
            }
          else if (VAR_30 == VAR_8)
            {
              VAR_27 = FUNC_22(&VAR_36,
                                                VAR_16, VAR_14->abspath,
                                                VAR_29, VAR_0,
                                                VAR_26, VAR_26);
            }
          else
            {
              VAR_27 = FUNC_23(&VAR_36,
                                                 VAR_16, VAR_14->abspath,
                                                 VAR_29,
                                                 VAR_26, VAR_26);
            }

          if (VAR_27)
            break;

          if (VAR_36)
            {
              VAR_27 = FUNC_2(VAR_14->sdb, VAR_36, VAR_26);
              if (VAR_27)
                break;
            }

          FUNC_0(FUNC_18(&VAR_25, VAR_24));
        }
      FUNC_10(VAR_26);

      FUNC_0(FUNC_6(VAR_27, FUNC_17(VAR_24)));
    }

  if (VAR_17 && *VAR_15 != '\0')
    {

      svn_wc__db_status_t VAR_37;
      svn_node_kind_t VAR_38;
      FUNC_0(FUNC_4(&VAR_37, &VAR_38, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                        VAR_14, VAR_15,
                        VAR_23, VAR_23));

      if (VAR_37 == VAR_12
          || VAR_37 == VAR_10
          || VAR_37 == VAR_11)
        {
          svn_skel_t *VAR_39 = ((void*)0);
          const char *VAR_40 = FUNC_5(VAR_14->abspath,
                                                          VAR_15,
                                                          VAR_23);

          if (VAR_38 == VAR_8)
            {
              FUNC_0(FUNC_22(&VAR_39,
                                                  VAR_16, VAR_14->abspath,
                                                  VAR_40,
                                                  VAR_18
                                                                     ,
                                                  VAR_23, VAR_23));
            }
          else
            {
              svn_boolean_t VAR_41 = VAR_0;

              if (!VAR_18)
                {
                  FUNC_0(FUNC_21(&VAR_41,
                                                           VAR_16, VAR_40,
                                                           VAR_0,
                                                           VAR_23));
                }

              if (!VAR_41)
                FUNC_0(FUNC_23(&VAR_39,
                                                     VAR_16, VAR_14->abspath,
                                                     VAR_40,
                                                     VAR_23,
                                                     VAR_23));
              else
                {
                  if (VAR_13)
                    *VAR_13 = VAR_6;
                }
            }

          FUNC_0(FUNC_2(VAR_14->sdb, VAR_39, VAR_23));
        }
    }


  FUNC_0(FUNC_16(&VAR_24, VAR_14->sdb,
                                    VAR_3));
  FUNC_0(FUNC_11(VAR_24, "is", VAR_14->wc_id, VAR_15));
  FUNC_0(FUNC_19(VAR_24));


  if (VAR_15[0] != '\0')
    {
      FUNC_0(FUNC_16(&VAR_24, VAR_14->sdb,
                                        VAR_2));
      FUNC_0(FUNC_11(VAR_24, "is", VAR_14->wc_id, VAR_15));
      FUNC_0(FUNC_19(VAR_24));
    }

  FUNC_0(FUNC_16(&VAR_24, VAR_14->sdb,
                                    VAR_1));


  FUNC_0(FUNC_11(VAR_24, "is", VAR_14->wc_id,
                                         VAR_15));
  FUNC_0(FUNC_19(VAR_24));

  FUNC_0(FUNC_2(VAR_14->sdb, VAR_20, VAR_23));
  if (VAR_19)
    FUNC_0(FUNC_20(VAR_14, VAR_15,
                                              VAR_19, VAR_23));

  return VAR_5;
}
