
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_reporter_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {int (* do_status ) (void*,int const**,void**,char const*,int ,int ,int const*,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int const**,void**,int const*,void*,int *) ;
 int FUNC_3 (void*,int const**,void**,char const*,int ,int ,int const*,void*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_4(void *VAR_2,
                                     const svn_ra_reporter_t **VAR_3,
                                     void **VAR_4,
                                     const char *VAR_5,
                                     svn_revnum_t VAR_6,
                                     svn_boolean_t VAR_7,
                                     const svn_delta_editor_t *VAR_8,
                                     void *VAR_9,
                                     apr_pool_t *VAR_10)
{
  const svn_ra_reporter3_t *VAR_11;
  void *VAR_12;
  svn_depth_t VAR_13 = FUNC_0(VAR_7);

  FUNC_1(VAR_1.do_status(VAR_2, &VAR_11, &VAR_12, VAR_5,
                         VAR_6, VAR_13, VAR_8, VAR_9, VAR_10));

  FUNC_2(VAR_3, VAR_4, VAR_11, VAR_12, VAR_10);

  return VAR_0;
}
