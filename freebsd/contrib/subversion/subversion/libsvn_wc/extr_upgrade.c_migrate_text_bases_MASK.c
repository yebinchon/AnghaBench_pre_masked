
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* md5_checksum; void* sha1_checksum; } ;
struct TYPE_8__ {TYPE_2__ normal_base; TYPE_2__ revert_base; } ;
typedef TYPE_1__ svn_wc__text_base_info_t ;
typedef TYPE_2__ svn_wc__text_base_file_info_t ;
typedef int svn_stream_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_10__ {int size; } ;
typedef TYPE_3__ apr_finfo_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 char* FUNC_6 (char const*,int ,int *) ;
 void* FUNC_7 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char const*,int *) ;
 char* FUNC_9 (char const*,char const*,int *) ;
 TYPE_1__* FUNC_10 (int *,char const*) ;
 int FUNC_11 (int *,char const*,TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (int **,char const*,scalar_t__,int *,int *) ;
 int FUNC_14 (TYPE_3__*,char const*,int ,int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int,int *,int *) ;
 int FUNC_19 (int *,int,int ) ;
 int FUNC_20 (int **,int *,int ) ;
 int FUNC_21 (int *,int *) ;
 int * FUNC_22 (int *,int **,int *,int ,scalar_t__,int *) ;
 int FUNC_23 (int *,int *,int *,int *,int *) ;
 int FUNC_24 (int **,char const*,int *,int *) ;
 int FUNC_25 (int **,char const**,char const*,int ,int *,int *) ;
 char* FUNC_26 (char const*,int ,int *) ;
 int FUNC_27 (char const**,char const*,int *,int *,int *) ;
 int FUNC_28 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_29(apr_hash_t **VAR_11,
                   const char *VAR_12,
                   const char *VAR_13,
                   svn_sqlite__db_t *VAR_14,
                   apr_pool_t *VAR_15,
                   apr_pool_t *VAR_16)
{
  apr_hash_t *VAR_17;
  apr_pool_t *VAR_18 = FUNC_16(VAR_16);
  apr_hash_index_t *VAR_19;
  const char *VAR_20 = FUNC_26(VAR_12,
                                                VAR_6,
                                                VAR_16);

  *VAR_11 = FUNC_2(VAR_15);


  FUNC_0(FUNC_13(&VAR_17, VAR_20, VAR_7,
                              VAR_16, VAR_16));
  for (VAR_19 = FUNC_1(VAR_16, VAR_17); VAR_19;
       VAR_19 = FUNC_3(VAR_19))
    {
      const char *VAR_21 = FUNC_4(VAR_19);
      svn_checksum_t *VAR_22;
      svn_checksum_t *VAR_23;

      FUNC_15(VAR_18);


      {
        const char *VAR_24;
        const char *VAR_25;
        const char *VAR_26;
        svn_sqlite__stmt_t *VAR_27;
        apr_finfo_t VAR_28;
        svn_stream_t *VAR_29;
        svn_stream_t *VAR_30;

        VAR_25 = FUNC_9(VAR_20, VAR_21,
                                         VAR_18);


        FUNC_0(FUNC_25(&VAR_30, &VAR_26,
                                       VAR_13,
                                       VAR_10,
                                       VAR_18, VAR_18));

        FUNC_0(FUNC_24(&VAR_29, VAR_25,
                                           VAR_18, VAR_18));

        VAR_29 = FUNC_22(VAR_29, &VAR_22,
                                              ((void*)0), VAR_8,
                                              VAR_7, VAR_18);

        VAR_29 = FUNC_22(VAR_29, &VAR_23,
                                              ((void*)0), VAR_9,
                                              VAR_7, VAR_18);


        FUNC_0(FUNC_23(VAR_29, VAR_30,
                                 ((void*)0), ((void*)0), VAR_18));

        FUNC_0(FUNC_14(&VAR_28, VAR_25, VAR_0, VAR_18));


        FUNC_0(FUNC_20(&VAR_27, VAR_14,
                                          VAR_2));
        FUNC_0(FUNC_18(VAR_27, 1, VAR_23, VAR_18));
        FUNC_0(FUNC_18(VAR_27, 2, VAR_22, VAR_18));
        FUNC_0(FUNC_19(VAR_27, 3, VAR_28.size));
        FUNC_0(FUNC_21(((void*)0), VAR_27));

        FUNC_0(FUNC_27(&VAR_24,
                                                    VAR_13,
                                                    VAR_23,
                                                    VAR_18, VAR_18));


        FUNC_0(FUNC_28(FUNC_8(VAR_24,
                                                            VAR_18),
                                         VAR_18));



        FUNC_0(FUNC_12(VAR_26, VAR_24, VAR_18));
      }


      {
        const char *VAR_31;
        svn_boolean_t VAR_32;
        svn_wc__text_base_info_t *VAR_33;
        svn_wc__text_base_file_info_t *VAR_34;



        VAR_31 = FUNC_6(VAR_21,
                                            VAR_5, VAR_15);
        if (VAR_31)
          {
            VAR_32 = VAR_7;
          }
        else
          {
            VAR_31 = FUNC_6(VAR_21,
                                                VAR_4, VAR_15);
            VAR_32 = VAR_1;
          }

        if (! VAR_31)
          {







            continue;
          }



        VAR_33 = FUNC_10(*VAR_11, VAR_31);
        if (VAR_33 == ((void*)0))
          VAR_33 = FUNC_5(VAR_15, sizeof (*VAR_33));
        VAR_34 = (VAR_32 ? &VAR_33->revert_base : &VAR_33->normal_base);

        VAR_34->sha1_checksum = FUNC_7(VAR_23, VAR_15);
        VAR_34->md5_checksum = FUNC_7(VAR_22, VAR_15);
        FUNC_11(*VAR_11, VAR_31, VAR_33);
      }
    }

  FUNC_17(VAR_18);

  return VAR_3;
}
