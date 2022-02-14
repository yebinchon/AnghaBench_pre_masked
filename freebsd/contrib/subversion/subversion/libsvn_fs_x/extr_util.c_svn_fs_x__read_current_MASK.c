
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__**,int ,int *) ;
 int FUNC_5 (int *,int ,char const**) ;

svn_error_t *
FUNC_6(svn_revnum_t *VAR_2,
                       svn_fs_t *VAR_3,
                       apr_pool_t *VAR_4)
{
  const char *VAR_5;
  svn_stringbuf_t *VAR_6;
  FUNC_0(FUNC_4(&VAR_6,
                                 FUNC_3(VAR_3, VAR_4),
                                 VAR_4));
  FUNC_0(FUNC_5(VAR_2, VAR_6->data, &VAR_5));
  if (*VAR_5 != '\n')
    return FUNC_2(VAR_0, ((void*)0),
                            FUNC_1("Corrupt 'current' file"));

  return VAR_1;
}
