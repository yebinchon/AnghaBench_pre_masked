
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_3__ {int (* finish_report ) (void*,int *) ;int (* set_path ) (void*,char*,int ,int ,int ,int *,int *) ;} ;
typedef TYPE_1__ svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (void*,char*,int ,int ,int ,int *,int *) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (int ,int *,char*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,TYPE_1__ const**,void**,int ,char*,int ,int ,int ,int const*,void*,int *,int *) ;
 int FUNC_6 (int *,char const**,char const*,int *) ;
 int FUNC_7 (int *,char const**,int *) ;
 int FUNC_8 (int const**,void**,int ,int *,int *,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_ra_session_t *VAR_6,
                           svn_ra_session_t *VAR_7,
                           svn_stream_t *VAR_8,
                           svn_revnum_t VAR_9,
                           svn_boolean_t VAR_10,
                           apr_pool_t *VAR_11)
{
  const svn_ra_reporter3_t *VAR_12;
  void *VAR_13;
  const svn_delta_editor_t *VAR_14;
  void *VAR_15;
  const char *VAR_16, *VAR_17;
  FUNC_0(FUNC_7(VAR_6, &VAR_16, VAR_11));
  FUNC_0(FUNC_6(VAR_6, &VAR_17,
                                           VAR_16, VAR_11));


  FUNC_0(FUNC_1(VAR_6, VAR_8, VAR_9, VAR_11));







  FUNC_0(FUNC_8(&VAR_14, &VAR_15, VAR_9,
                                     VAR_8, VAR_7,
                                     VAR_17, VAR_3, ((void*)0), VAR_11));
  FUNC_0(FUNC_5(VAR_6, &VAR_12, &VAR_13, VAR_9,
                            "", VAR_5, VAR_0, VAR_0,
                            VAR_14, VAR_15, VAR_11, VAR_11));
  FUNC_0(VAR_12->set_path(VAR_13, "", VAR_9,
                             VAR_5, VAR_2, ((void*)0), VAR_11));
  FUNC_0(VAR_12->finish_report(VAR_13, VAR_11));


  if (! VAR_10)
    FUNC_0(FUNC_4(VAR_4, VAR_11, "* Dumped revision %lu.\n",
                                VAR_9));

  return VAR_1;
}
