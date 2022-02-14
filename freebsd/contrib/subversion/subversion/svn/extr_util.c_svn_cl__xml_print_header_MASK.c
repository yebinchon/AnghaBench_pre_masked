
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**,char*,int *) ;
 int FUNC_3 (TYPE_1__**,int *,int ,char const*,int ) ;
 int VAR_2 ;

svn_error_t *
FUNC_4(const char *VAR_3,
                         apr_pool_t *VAR_4)
{
  svn_stringbuf_t *VAR_5 = FUNC_1(VAR_4);


  FUNC_2(&VAR_5, "UTF-8", VAR_4);


  FUNC_3(&VAR_5, VAR_4, VAR_2, VAR_3, VAR_0);

  return FUNC_0(VAR_5->data, VAR_1);
}
