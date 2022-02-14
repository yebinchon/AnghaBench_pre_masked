
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int ctor_baton_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,char const*,int ) ;

__attribute__((used)) static void
FUNC_1(ctor_baton_t *VAR_0,
               svn_string_t *VAR_1,
               const char *VAR_2,
               apr_size_t VAR_3)
{
  VAR_1->data = FUNC_0(VAR_0, VAR_2, VAR_3);
  VAR_1->len = VAR_3;
}
