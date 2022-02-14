
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_1__**,int *,int ,int ,int ,int *,int *) ;
 int * FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_time_t *VAR_3,
         svn_fs_t *VAR_4,
         svn_revnum_t VAR_5,
         apr_pool_t *VAR_6)
{
  svn_string_t *VAR_7;

  FUNC_0(FUNC_3(&VAR_7, VAR_4, VAR_5, VAR_2,
                                VAR_0, VAR_6, VAR_6));
  if (! VAR_7)
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_1("Failed to find time on revision %ld"), VAR_5);

  return FUNC_4(VAR_3, VAR_7->data, VAR_6);
}
