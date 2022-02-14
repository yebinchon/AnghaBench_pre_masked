
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (char*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_2(apr_pool_t *VAR_0)
{
  svn_stringbuf_t *VAR_1 = FUNC_0("/etc/redhat-release", VAR_0);
  if (VAR_1)
    {
      FUNC_1(VAR_1);
      return VAR_1->data;
    }
  return ((void*)0);
}
