
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
struct TYPE_2__ {int (* do_update ) (void*,int const**,void**,int ,char const*,int ,int ,int ,int const*,void*,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int const**,void**,int const*,void*,int *) ;
 int FUNC_3 (void*,int const**,void**,int ,char const*,int ,int ,int ,int const*,void*,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_4(void *VAR_3,
                                     const svn_ra_reporter_t **VAR_4,
                                     void **VAR_5,
                                     svn_revnum_t VAR_6,
                                     const char *VAR_7,
                                     svn_boolean_t VAR_8,
                                     const svn_delta_editor_t *VAR_9,
                                     void *VAR_10,
                                     apr_pool_t *VAR_11)
{
  const svn_ra_reporter3_t *VAR_12;
  void *VAR_13;
  svn_depth_t VAR_14 = FUNC_0(VAR_8);

  FUNC_1(VAR_2.do_update(VAR_3, &VAR_12, &VAR_13,
                         VAR_6, VAR_7, VAR_14,
                         VAR_0 ,
                         VAR_0 ,
                         VAR_9, VAR_10,
                         VAR_11, VAR_11));
  FUNC_2(VAR_4, VAR_5, VAR_12, VAR_13, VAR_11);

  return VAR_1;
}
