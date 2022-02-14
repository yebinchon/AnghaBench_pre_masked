
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,char const*,int) ;

svn_string_t *
FUNC_2(const char *VAR_0, apr_size_t VAR_1, apr_pool_t *VAR_2)
{
  void *VAR_3;
  char *VAR_4;
  svn_string_t *VAR_5;


  VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_5) + VAR_1 + 1);
  VAR_4 = (char*)VAR_3 + sizeof(*VAR_5);

  VAR_5 = VAR_3;
  VAR_5->data = VAR_4;
  VAR_5->len = VAR_1;


  if (VAR_1)
    FUNC_1(VAR_4, VAR_0, VAR_1);




  VAR_4[VAR_1] = '\0';

  return VAR_5;
}
