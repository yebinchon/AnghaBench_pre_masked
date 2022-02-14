
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
struct TYPE_6__ {int len; int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_boolean_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

svn_boolean_t
FUNC_1(const svn_string_t *VAR_0,
                             const svn_stringbuf_t *VAR_1)
{
  return FUNC_0(VAR_0->data, VAR_1->data, VAR_0->len, VAR_1->len);
}
