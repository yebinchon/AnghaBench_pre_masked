
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
struct TYPE_2__ {int (* do_diff ) (void*,int const**,void**,int ,char const*,int ,int ,int ,char const*,int const*,void*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int const**,void**,int const*,void*,int *) ;
 int FUNC_3 (void*,int const**,void**,int ,char const*,int ,int ,int ,char const*,int const*,void*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_4(void *VAR_3,
                                   const svn_ra_reporter_t **VAR_4,
                                   void **VAR_5,
                                   svn_revnum_t VAR_6,
                                   const char *VAR_7,
                                   svn_boolean_t VAR_8,
                                   svn_boolean_t VAR_9,
                                   const char *VAR_10,
                                   const svn_delta_editor_t *VAR_11,
                                   void *VAR_12,
                                   apr_pool_t *VAR_13)
{
  const svn_ra_reporter3_t *VAR_14;
  void *VAR_15;
  svn_depth_t VAR_16 = FUNC_0(VAR_8);

  FUNC_1(VAR_2.do_diff(VAR_3, &VAR_14, &VAR_15, VAR_6,
                       VAR_7, VAR_16, VAR_9, VAR_1,
                       VAR_10, VAR_11, VAR_12, VAR_13));

  FUNC_2(VAR_4, VAR_5, VAR_14, VAR_15, VAR_13);

  return VAR_0;
}
