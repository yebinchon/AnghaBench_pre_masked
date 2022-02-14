
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_location_segment_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct gls_receiver_baton_t {int * pool; int * ctx; int * segments; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char const**,int *,char const*,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,char*,int ,int ,int ,int ,struct gls_receiver_baton_t*,int *) ;
 int FUNC_5 (int *,char const*,int *) ;
 int FUNC_6 (int *,int ) ;

svn_error_t *
FUNC_7(apr_array_header_t **VAR_3,
                                    svn_ra_session_t *VAR_4,
                                    const char *VAR_5,
                                    svn_revnum_t VAR_6,
                                    svn_revnum_t VAR_7,
                                    svn_revnum_t VAR_8,
                                    svn_client_ctx_t *VAR_9,
                                    apr_pool_t *VAR_10)
{
  struct gls_receiver_baton_t VAR_11;
  const char *VAR_12;
  svn_error_t *VAR_13;

  *VAR_3 = FUNC_1(VAR_10, 8, sizeof(svn_location_segment_t *));
  VAR_11.segments = *VAR_3;
  VAR_11.ctx = VAR_9;
  VAR_11.pool = VAR_10;
  FUNC_0(FUNC_2(&VAR_12, VAR_4,
                                            VAR_5, VAR_10));
  VAR_13 = FUNC_4(VAR_4, "", VAR_6,
                                     VAR_7, VAR_8,
                                     VAR_2, &VAR_11,
                                     VAR_10);
  FUNC_0(FUNC_3(
            VAR_13, FUNC_5(VAR_4, VAR_12, VAR_10)));
  FUNC_6(*VAR_3, VAR_1);
  return VAR_0;
}
