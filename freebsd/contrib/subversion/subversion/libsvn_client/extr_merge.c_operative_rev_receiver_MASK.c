
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_3__ {int revision; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1,
                       svn_log_entry_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  svn_revnum_t *VAR_4 = VAR_1;

  *VAR_4 = VAR_2->revision;
  return FUNC_0(VAR_0, ((void*)0), ((void*)0));
}
