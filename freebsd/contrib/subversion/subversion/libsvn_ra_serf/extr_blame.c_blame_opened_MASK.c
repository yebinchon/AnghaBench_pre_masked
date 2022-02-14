
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_ra_serf__dav_props_t ;
typedef int svn_prop_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int * stream; int prop_diffs; int rev_props; int file_rev_baton; int (* file_rev ) (int ,char const*,int ,int ,int ,int *,void**,int ,int *) ;int * state_pool; } ;
typedef TYPE_1__ blame_context_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int ,int ,int ,int *,void**,int ,int *) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (scalar_t__*,char const*) ;
 char* FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,void*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_ra_serf__xml_estate_t *VAR_4,
             void *VAR_5,
             int VAR_6,
             const svn_ra_serf__dav_props_t *VAR_7,
             apr_pool_t *VAR_8)
{
  blame_context_t *VAR_9 = VAR_5;

  if (VAR_6 == VAR_0)
    {
      apr_pool_t *VAR_10 = FUNC_8(VAR_4);


      VAR_9->rev_props = FUNC_2(VAR_10);
      VAR_9->prop_diffs = FUNC_1(VAR_10,
                                             5, sizeof(svn_prop_t));
      VAR_9->state_pool = VAR_10;


      VAR_9->stream = ((void*)0);
    }
  else if (VAR_6 == VAR_3)
    {
      apr_pool_t *VAR_11 = FUNC_8(VAR_4);
      apr_hash_t *VAR_12 = FUNC_7(VAR_4, VAR_0);
      const char *VAR_13;
      const char *VAR_14;
      const char *VAR_15;
      svn_txdelta_window_handler_t VAR_16;
      void *VAR_17;
      apr_int64_t VAR_18;

      VAR_13 = FUNC_6(VAR_12, "path");
      VAR_14 = FUNC_6(VAR_12, "rev");

      FUNC_0(FUNC_5(&VAR_18, VAR_14));
      VAR_15 = FUNC_6(VAR_12, "merged-revision");

      FUNC_0(VAR_9->file_rev(VAR_9->file_rev_baton,
                                  VAR_13, (svn_revnum_t)VAR_18,
                                  VAR_9->rev_props,
                                  VAR_15 != ((void*)0),
                                  &VAR_16, &VAR_17,
                                  VAR_9->prop_diffs,
                                  VAR_11));

      VAR_9->stream = FUNC_4(FUNC_9(
                                              VAR_16, VAR_17,
                                              VAR_2 ,
                                              VAR_11),
                                            VAR_11);
    }

  return VAR_1;
}
