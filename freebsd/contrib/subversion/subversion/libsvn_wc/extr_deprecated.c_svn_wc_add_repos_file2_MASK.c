
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int **,char const*,int *,int *) ;
 int FUNC_6 (int **,int ,char*,char*,int ,char*,int *) ;
 int FUNC_7 (int *,char const**,TYPE_1__*) ;
 int FUNC_8 (int **,char const*,int ,char const*,int ,int *,int ,int *) ;
 scalar_t__ FUNC_9 (int ,char const*,int *,int ,int ) ;
 int FUNC_10 (char const*,int *,int *,int *,int *,int *,char const*,int ,int *,int *,int *,int *,int *) ;

svn_error_t *
FUNC_11(const char *VAR_5,
                       svn_wc_adm_access_t *VAR_6,
                       const char *VAR_7,
                       const char *VAR_8,
                       apr_hash_t *VAR_9,
                       apr_hash_t *VAR_10,
                       const char *VAR_11,
                       svn_revnum_t VAR_12,
                       apr_pool_t *VAR_13)
{
  svn_stream_t *VAR_14;
  svn_stream_t *VAR_15 = ((void*)0);

  FUNC_0(FUNC_5(&VAR_14, VAR_7,
                                   VAR_13, VAR_13));

  if (VAR_8)
    {







      if (FUNC_3(VAR_10, VAR_4) != ((void*)0))
        {
          FUNC_0(FUNC_5(&VAR_15, VAR_8,
                                           VAR_13, VAR_13));
        }
      else
        {

          svn_subst_eol_style_t VAR_16;
          const char *VAR_17;
          apr_hash_t *VAR_18 = ((void*)0);
          svn_string_t *VAR_19;

          VAR_19 = FUNC_3(VAR_10, VAR_3);
          if (VAR_19 != ((void*)0))
            {


              FUNC_0(FUNC_6(&VAR_18,
                                                VAR_19->data,
                                                "", "", 0, "",
                                                VAR_13));
              if (FUNC_1(VAR_18) == 0)
                VAR_18 = ((void*)0);
            }

          FUNC_7(&VAR_16, &VAR_17,
                                         FUNC_3(VAR_10,
                                                       VAR_2));

          if (FUNC_9(VAR_16, VAR_17, VAR_18,
                                             VAR_0, VAR_0))
            {
              FUNC_0(FUNC_8(&VAR_15,
                                                    VAR_8,
                                                    VAR_16, VAR_17,
                                                    VAR_0,
                                                    VAR_18,
                                                    VAR_0,
                                                    VAR_13));
            }
          else
            {
              FUNC_0(FUNC_5(&VAR_15, VAR_8,
                                               VAR_13, VAR_13));
            }
        }
    }

  FUNC_0(FUNC_10(VAR_5, VAR_6,
                                 VAR_14, VAR_15,
                                 VAR_9, VAR_10,
                                 VAR_11, VAR_12,
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                 VAR_13));




  FUNC_2(FUNC_4(VAR_7, VAR_13));
  if (VAR_8)
    FUNC_2(FUNC_4(VAR_8, VAR_13));

  return VAR_1;
}
