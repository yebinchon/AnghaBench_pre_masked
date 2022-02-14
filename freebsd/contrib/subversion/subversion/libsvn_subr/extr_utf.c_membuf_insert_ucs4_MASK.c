
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_membuf_t ;
typedef int apr_size_t ;
typedef int apr_int32_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(svn_membuf_t *VAR_0, apr_size_t VAR_1, apr_int32_t VAR_2)
{
  FUNC_0(VAR_0, (VAR_1 + 1) * sizeof(VAR_2));
  ((apr_int32_t*)VAR_0->data)[VAR_1] = VAR_2;
}
