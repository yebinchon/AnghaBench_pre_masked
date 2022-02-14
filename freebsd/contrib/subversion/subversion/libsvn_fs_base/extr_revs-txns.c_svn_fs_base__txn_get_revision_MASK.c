
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__**,int *,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_2,
                              svn_fs_t *VAR_3,
                              const char *VAR_4,
                              trail_t *VAR_5,
                              apr_pool_t *VAR_6)
{
  transaction_t *VAR_7;
  FUNC_0(FUNC_1(&VAR_7, VAR_3, VAR_4, VAR_0, VAR_5, VAR_6));
  *VAR_2 = VAR_7->revision;
  return VAR_1;
}
