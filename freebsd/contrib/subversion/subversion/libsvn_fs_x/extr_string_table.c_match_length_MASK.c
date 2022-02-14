
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int len; } ;
typedef TYPE_1__ svn_string_t ;
typedef int apr_uint16_t ;
typedef int apr_size_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static apr_uint16_t
FUNC_2(const svn_string_t *VAR_0,
             const svn_string_t *VAR_1)
{
  apr_size_t VAR_2 = FUNC_0(VAR_0->len, VAR_1->len);
  return (apr_uint16_t)FUNC_1(VAR_0->data, VAR_1->data, VAR_2);
}
