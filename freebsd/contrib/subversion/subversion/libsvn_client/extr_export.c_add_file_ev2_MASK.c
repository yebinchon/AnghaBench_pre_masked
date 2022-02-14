
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int svn_subst_eol_style_t ;
struct TYPE_7__ {char* data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {int notify_baton; int (* notify_func ) (int ,TYPE_1__*,int *) ;int cancel_baton; int cancel_func; int repos_root_url; int native_eol; int ignore_keywords; int root_url; int root_path; } ;
typedef scalar_t__ apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,char const**,char*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (char const*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 TYPE_2__* FUNC_5 (int *,int ) ;
 int VAR_10 ;
 int FUNC_6 (char const*,char const*,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,char const*,int *) ;
 int FUNC_8 (char const*,scalar_t__,scalar_t__,int *) ;
 int VAR_11 ;
 char* FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (int *,int *,int ,int ,int *) ;
 int FUNC_11 (int **,char const**,int ,int ,int *,int *) ;
 int FUNC_12 (int **,char*,char const*,char const*,int ,scalar_t__,char const*,int *) ;
 int FUNC_13 (int **,char const*,int *,int *) ;
 int * FUNC_14 (int *,char const*,scalar_t__,int *,scalar_t__,int *) ;
 int FUNC_15 (scalar_t__*,char*,int *) ;
 TYPE_1__* FUNC_16 (char const*,int ,int *) ;
 int VAR_12 ;

__attribute__((used)) static svn_error_t *
FUNC_17(void *VAR_13,
             const char *VAR_14,
             const svn_checksum_t *VAR_15,
             svn_stream_t *VAR_16,
             apr_hash_t *VAR_17,
             svn_revnum_t VAR_18,
             apr_pool_t *VAR_19)
{
  struct edit_baton *VAR_20 = VAR_13;
  const char *VAR_21 = FUNC_4(VAR_20->root_path, VAR_14,
                                          VAR_19);


  const char *VAR_22 = FUNC_9(VAR_20->root_url,
                                                     VAR_14,
                                                     VAR_19);
  const svn_string_t *VAR_23;

  const svn_string_t *VAR_24 = ((void*)0);
  const svn_string_t *VAR_25 = ((void*)0);
  const svn_string_t *VAR_26 = ((void*)0);
  svn_boolean_t VAR_27 = VAR_0;

  const char *VAR_28 = ((void*)0);
  const char *VAR_29 = ((void*)0);
  apr_time_t VAR_30 = 0;


  if ( (VAR_23 = FUNC_5(VAR_17, VAR_5)) )
    VAR_24 = VAR_23;

  if ( !VAR_20->ignore_keywords && (VAR_23 = FUNC_5(VAR_17, VAR_7)) )
    VAR_25 = VAR_23;

  if ( (VAR_23 = FUNC_5(VAR_17, VAR_6)) )
    VAR_26 = VAR_23;


  if ( (VAR_23 = FUNC_5(VAR_17, VAR_3)) )
    VAR_28 = VAR_23->data;

  if ( (VAR_23 = FUNC_5(VAR_17, VAR_2)) )
    FUNC_0(FUNC_15(&VAR_30, VAR_23->data, VAR_19));

  if ( (VAR_23 = FUNC_5(VAR_17, VAR_4)) )
    VAR_29 = VAR_23->data;

  if ( (VAR_23 = FUNC_5(VAR_17, VAR_8)) )
    VAR_27 = VAR_9;

  if (VAR_27)
    {
      svn_stream_t *VAR_31;

      FUNC_0(FUNC_13(&VAR_31, VAR_21,
                                           VAR_19, VAR_19));
      FUNC_0(FUNC_10(VAR_16, VAR_31, VAR_20->cancel_func,
                               VAR_20->cancel_baton, VAR_19));
    }
  else
    {
      svn_stream_t *VAR_32;
      const char *VAR_33;



      FUNC_0(FUNC_11(&VAR_32, &VAR_33,
                                     FUNC_3(VAR_21,
                                                        VAR_19),
                                     VAR_10,
                                     VAR_19, VAR_19));



      if (VAR_24 || VAR_25)
        {
          svn_subst_eol_style_t VAR_34;
          const char *VAR_35 = ((void*)0);
          svn_boolean_t VAR_36 = VAR_0;
          apr_hash_t *VAR_37 = ((void*)0);

          if (VAR_24)
            {
              FUNC_0(FUNC_1(&VAR_34, &VAR_35, VAR_24->data,
                                    VAR_20->native_eol));
              VAR_36 = VAR_9;
            }

          if (VAR_25)
            FUNC_0(FUNC_12(&VAR_37, VAR_25->data,
                                              VAR_28, VAR_22,
                                              VAR_20->repos_root_url,
                                              VAR_30, VAR_29, VAR_19));



          VAR_32 = FUNC_14(VAR_32, VAR_35, VAR_36,
                                                   VAR_37, VAR_9,
                                                   VAR_19);
        }

      FUNC_0(FUNC_10(VAR_16, VAR_32, VAR_20->cancel_func,
                               VAR_20->cancel_baton, VAR_19));


      FUNC_0(FUNC_6(VAR_33, VAR_21, VAR_0, VAR_19));
    }

  if (VAR_26)
    FUNC_0(FUNC_8(VAR_21, VAR_9, VAR_0, VAR_19));

  if (VAR_30 && (! VAR_27))
    FUNC_0(FUNC_7(VAR_30, VAR_21, VAR_19));

  if (VAR_20->notify_func)
    {
      svn_wc_notify_t *VAR_38 = FUNC_16(VAR_21,
                                                     VAR_12,
                                                     VAR_19);
      VAR_38->kind = VAR_11;
      (*VAR_20->notify_func)(VAR_20->notify_baton, VAR_38, VAR_19);
    }

  return VAR_1;
}
