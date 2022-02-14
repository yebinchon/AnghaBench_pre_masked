
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_location_segment_receiver_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int **,int *,char const*,int ,int ,int ,int ,void*,int *) ;
 char* FUNC_1 (int *,char const*,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t *VAR_1,
                             const char *VAR_2,
                             svn_revnum_t VAR_3,
                             svn_revnum_t VAR_4,
                             svn_revnum_t VAR_5,
                             svn_location_segment_receiver_t VAR_6,
                             void *VAR_7,
                             apr_pool_t *VAR_8)
{
  svn_error_t *VAR_9 = VAR_0;
  svn_error_t *VAR_10;

  VAR_2 = FUNC_1(VAR_1, VAR_2, VAR_8);
  VAR_10 = FUNC_3(
            FUNC_0(&VAR_9, VAR_1, VAR_2,
                                          VAR_3, VAR_4, VAR_5,
                                          VAR_6, VAR_7, VAR_8));
  return FUNC_2(VAR_9, VAR_10);
}
