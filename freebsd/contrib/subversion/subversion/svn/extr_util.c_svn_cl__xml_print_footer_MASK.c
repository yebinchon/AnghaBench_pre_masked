
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__**,int *,char const*) ;

svn_error_t *
FUNC_3(const char *VAR_1,
                         apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_1(VAR_2);


  FUNC_2(&VAR_3, VAR_2, VAR_1);
  return FUNC_0(VAR_3->data, VAR_0);
}
