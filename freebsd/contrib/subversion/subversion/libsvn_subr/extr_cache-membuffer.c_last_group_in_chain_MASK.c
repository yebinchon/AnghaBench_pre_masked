
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* directory; } ;
typedef TYPE_2__ svn_membuffer_t ;
struct TYPE_7__ {size_t next; } ;
struct TYPE_9__ {TYPE_1__ header; } ;
typedef TYPE_3__ entry_group_t ;


 size_t VAR_0 ;

__attribute__((used)) static entry_group_t *
FUNC_0(svn_membuffer_t *VAR_1,
                    entry_group_t *VAR_2)
{
  while (VAR_2->header.next != VAR_0)
    VAR_2 = &VAR_1->directory[VAR_2->header.next];

  return VAR_2;
}
