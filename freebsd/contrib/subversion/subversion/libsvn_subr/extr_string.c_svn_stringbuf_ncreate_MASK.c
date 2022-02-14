
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; int len; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*,char const*,int) ;
 TYPE_1__* FUNC_1 (int,int *) ;

svn_stringbuf_t *
FUNC_2(const char *VAR_0, apr_size_t VAR_1, apr_pool_t *VAR_2)
{
  svn_stringbuf_t *VAR_3 = FUNC_1(VAR_1, VAR_2);


  if (VAR_1)
    FUNC_0(VAR_3->data, VAR_0, VAR_1);




  VAR_3->data[VAR_1] = '\0';
  VAR_3->len = VAR_1;

  return VAR_3;
}
