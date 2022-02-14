
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* directory; } ;
typedef TYPE_2__ svn_membuffer_t ;
struct TYPE_6__ {size_t next; } ;
struct TYPE_8__ {TYPE_1__ header; } ;
typedef TYPE_3__ entry_group_t ;
typedef size_t apr_uint32_t ;



__attribute__((used)) static entry_group_t *
FUNC_0(svn_membuffer_t *VAR_0,
          apr_uint32_t VAR_1,
          apr_uint32_t VAR_2)
{
  entry_group_t *VAR_3 = &VAR_0->directory[VAR_1];
  for (; VAR_2; --VAR_2)
    VAR_3 = &VAR_0->directory[VAR_3->header.next];

  return VAR_3;
}
