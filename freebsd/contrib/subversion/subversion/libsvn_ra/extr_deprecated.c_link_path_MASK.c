
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct reporter_3in2_baton {int reporter3_baton; TYPE_1__* reporter3; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* link_path ) (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;} ;


 int * FUNC_0 (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;
 int VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
          const char *VAR_2,
          const char *VAR_3,
          svn_revnum_t VAR_4,
          svn_boolean_t VAR_5,
          const char *VAR_6,
          apr_pool_t *VAR_7)
{
  struct reporter_3in2_baton *VAR_8 = VAR_1;
  return VAR_8->reporter3->link_path(VAR_8->reporter3_baton,
                                 VAR_2, VAR_3, VAR_4, VAR_0,
                                 VAR_5, VAR_6, VAR_7);

}
