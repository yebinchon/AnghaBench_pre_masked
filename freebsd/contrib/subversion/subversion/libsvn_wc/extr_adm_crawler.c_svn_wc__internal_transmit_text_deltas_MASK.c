
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc__db_t ;
typedef int svn_wc__db_install_data_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int (* close_file ) (void*,int ,int *) ;int * (* apply_textdelta_stream ) (TYPE_1__ const*,void*,char const*,int ,TYPE_2__*,int *) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {void* local_stream; void* base_stream; int need_reset; int member_0; } ;
typedef TYPE_2__ open_txdelta_stream_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int *,int *) ;
 int VAR_4 ;
 int FUNC_5 (int **,int const**,int **,int *,char const*,int *,int *) ;
 int * FUNC_6 (TYPE_1__ const*,void*,char const*,int ,TYPE_2__*,int *) ;
 int FUNC_7 (void*,int ,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int const*,int *) ;
 int VAR_5 ;
 int * FUNC_10 (int const*,int *,int *,int ,int ) ;
 int FUNC_11 (int *,int *) ;
 char* FUNC_12 (int const*,int *) ;
 int FUNC_13 (char const*,int *) ;
 int * FUNC_14 (int *,int *) ;
 int * FUNC_15 (int ,int *,int *) ;
 int * FUNC_16 (int ) ;
 int * FUNC_17 (int *,int **,int *,int ,int ,int *) ;
 int * FUNC_18 (int *) ;
 void* FUNC_19 (int *,int *) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *,int *,int *,int *) ;
 int FUNC_22 (int **,int **,int **,int *,int *,char const*,int *,int *) ;
 int FUNC_23 (int **,int *,char const*,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_24(svn_stream_t *VAR_6,
                                      const svn_checksum_t **VAR_7,
                                      const svn_checksum_t **VAR_8,
                                      svn_wc__db_t *VAR_9,
                                      const char *VAR_10,
                                      svn_boolean_t VAR_11,
                                      const svn_delta_editor_t *VAR_12,
                                      void *VAR_13,
                                      apr_pool_t *VAR_14,
                                      apr_pool_t *VAR_15)
{
  const svn_checksum_t *VAR_16;
  svn_checksum_t *VAR_17;
  svn_checksum_t *VAR_18;
  svn_checksum_t *VAR_19;
  svn_wc__db_install_data_t *VAR_20 = ((void*)0);
  svn_error_t *VAR_21;
  svn_error_t *VAR_22;
  svn_stream_t *VAR_23;
  svn_stream_t *VAR_24;


  FUNC_0(FUNC_23(&VAR_24, VAR_9,
                                             VAR_10, VAR_10,
                                             VAR_2,
                                             VAR_15, VAR_15));







  if (VAR_6)
    {




      VAR_24 = FUNC_4(VAR_24, VAR_6, VAR_15);
    }
  if (VAR_8)
    {
      svn_stream_t *VAR_25;

      FUNC_0(FUNC_22(&VAR_25,
                                                  &VAR_20,
                                                  &VAR_19, ((void*)0),
                                                  VAR_9, VAR_10,
                                                  VAR_15, VAR_15));
      VAR_24 = FUNC_4(VAR_24, VAR_25,
                                    VAR_15);
    }
  if (! VAR_11)
    {



      FUNC_0(FUNC_5(&VAR_23,
                                              &VAR_16,
                                              &VAR_17,
                                              VAR_9, VAR_10,
                                              VAR_15, VAR_15));
    }
  else
    {

      VAR_23 = FUNC_20(VAR_15);
      VAR_16 = ((void*)0);
      VAR_17 = ((void*)0);
    }


  VAR_24 = FUNC_17(VAR_24, &VAR_18,
                                         ((void*)0), VAR_5, VAR_3,
                                         VAR_15);


  {
    open_txdelta_stream_baton_t VAR_26 = { 0 };


    const char *VAR_27 = ((void*)0);

    if (VAR_16)



      VAR_27 = FUNC_12(VAR_16,
                                                        VAR_15);

    VAR_26.need_reset = VAR_0;
    VAR_26.base_stream = FUNC_19(VAR_23, VAR_15);
    VAR_26.local_stream = FUNC_19(VAR_24, VAR_15);
    VAR_21 = VAR_12->apply_textdelta_stream(VAR_12, VAR_13, VAR_27,
                                         VAR_4, &VAR_26,
                                         VAR_15);
  }


  VAR_22 = FUNC_18(VAR_23);
  if (VAR_22)
    {


      VAR_17 = ((void*)0);
      VAR_21 = FUNC_14(VAR_21, VAR_22);
    }

  VAR_21 = FUNC_14(VAR_21, FUNC_18(VAR_24));



  if (VAR_16 && VAR_17
      && !FUNC_9(VAR_16, VAR_17))
    {
      VAR_21 = FUNC_14(
              FUNC_10(VAR_16, VAR_17,
                            VAR_15,
                            FUNC_2("Checksum mismatch for text base of '%s'"),
                            FUNC_13(VAR_10,
                                                   VAR_15)),
              VAR_21);

      return FUNC_15(VAR_1, VAR_21, ((void*)0));
    }



  FUNC_1(VAR_21, FUNC_3(VAR_15,
                              FUNC_2("While preparing '%s' for commit"),
                              FUNC_13(VAR_10,
                                                     VAR_15)));

  if (VAR_7)
    *VAR_7 = FUNC_8(VAR_18,
                                                   VAR_14);
  if (VAR_8)
    {
      FUNC_0(FUNC_21(VAR_20,
                                          VAR_19,
                                          VAR_18,
                                          VAR_15));
      *VAR_8 = FUNC_8(VAR_19,
                                                      VAR_14);
    }


  return FUNC_16(
             VAR_12->close_file(VAR_13,
                                FUNC_11(VAR_18,
                                                        VAR_15),
                                VAR_15));
}
