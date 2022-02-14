
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 char const* FUNC_0 (int *,char*,int ,int ) ;
 TYPE_1__* FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static const char *
FUNC_3(apr_pool_t *VAR_1)
{
  svn_stringbuf_t *VAR_2 = FUNC_1("/etc/debian_version", VAR_1);
  if (!VAR_2)
      return ((void*)0);

  FUNC_2(VAR_2);
  return FUNC_0(VAR_1, "Debian ", VAR_2->data, VAR_0);
}
