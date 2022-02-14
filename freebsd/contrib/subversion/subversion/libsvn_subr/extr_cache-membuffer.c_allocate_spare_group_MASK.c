
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t first_spare_group; scalar_t__ max_spare_used; scalar_t__ spare_group_count; size_t group_count; TYPE_3__* directory; } ;
typedef TYPE_2__ svn_membuffer_t ;
struct TYPE_8__ {size_t next; int used; } ;
struct TYPE_10__ {TYPE_1__ header; } ;
typedef TYPE_3__ entry_group_t ;
typedef size_t apr_uint32_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static entry_group_t *
FUNC_3(svn_membuffer_t *VAR_1)
{
  entry_group_t *VAR_2 = ((void*)0);


  if (VAR_1->first_spare_group != VAR_0)
    {
      VAR_2 = &VAR_1->directory[VAR_1->first_spare_group];
      VAR_1->first_spare_group = VAR_2->header.next;
    }


  else if (VAR_1->max_spare_used < VAR_1->spare_group_count)
    {
      apr_uint32_t VAR_3 = VAR_1->group_count + VAR_1->max_spare_used;
      ++VAR_1->max_spare_used;

      if (!FUNC_2(VAR_1, VAR_3))
        FUNC_1(VAR_1, VAR_3);

      VAR_2 = &VAR_1->directory[VAR_3];
    }


  FUNC_0(!VAR_2 || !VAR_2->header.used);
  return VAR_2;
}
