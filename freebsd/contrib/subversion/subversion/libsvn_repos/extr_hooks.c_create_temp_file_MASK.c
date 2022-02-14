
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ,int *,int *) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;
 int FUNC_3 (int **,int *,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_file_t **VAR_2, const svn_string_t *VAR_3, apr_pool_t *VAR_4)
{
  apr_off_t VAR_5 = 0;

  FUNC_0(FUNC_3(VAR_2, ((void*)0), ((void*)0),
                                   VAR_1,
                                   VAR_4, VAR_4));
  FUNC_0(FUNC_2(*VAR_2, VAR_3->data, VAR_3->len, ((void*)0), VAR_4));
  return FUNC_1(*VAR_2, VAR_0, &VAR_5, VAR_4);
}
