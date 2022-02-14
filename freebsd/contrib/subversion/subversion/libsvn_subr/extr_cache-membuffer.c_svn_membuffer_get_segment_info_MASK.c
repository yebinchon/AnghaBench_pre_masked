
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_15__ {int group_count; int * directory; scalar_t__ used_entries; TYPE_2__ l2; TYPE_1__ l1; scalar_t__ data_used; } ;
typedef TYPE_4__ svn_membuffer_t ;
typedef int svn_error_t ;
struct TYPE_16__ {int total_entries; int * histogram; int used_entries; int total_size; int used_size; int data_size; } ;
typedef TYPE_5__ svn_cache__info_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int entry_t ;
struct TYPE_14__ {int used; } ;
struct TYPE_17__ {TYPE_3__ header; } ;
typedef TYPE_6__ entry_group_t ;
typedef size_t apr_uint32_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__*,size_t) ;
 TYPE_6__* FUNC_2 (TYPE_4__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_membuffer_t *VAR_2,
                               svn_cache__info_t *VAR_3,
                               svn_boolean_t VAR_4)
{
  apr_uint32_t VAR_5;

  VAR_3->data_size += VAR_2->l1.size + VAR_2->l2.size;
  VAR_3->used_size += VAR_2->data_used;
  VAR_3->total_size += VAR_2->l1.size + VAR_2->l2.size +
      VAR_2->group_count * VAR_0 * sizeof(entry_t);

  VAR_3->used_entries += VAR_2->used_entries;
  VAR_3->total_entries += VAR_2->group_count * VAR_0;

  if (VAR_4)
    for (VAR_5 = 0; VAR_5 < VAR_2->group_count; ++VAR_5)
      if (FUNC_1(VAR_2, VAR_5))
        {
          entry_group_t *VAR_6
            = FUNC_2(VAR_2, &VAR_2->directory[VAR_5]);
          apr_size_t VAR_7
            = FUNC_0(VAR_6->header.used,
                  sizeof(VAR_3->histogram) / sizeof(VAR_3->histogram[0]) - 1);
          VAR_3->histogram[VAR_7]++;
        }

  return VAR_1;
}
