
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* value; } ;
typedef TYPE_3__ svn_sort__item_t ;
struct TYPE_7__ {scalar_t__ count; } ;
struct TYPE_8__ {TYPE_1__ total; } ;
struct TYPE_10__ {TYPE_2__ node_histogram; } ;
typedef TYPE_4__ svn_fs_fs__extension_info_t ;
typedef scalar_t__ apr_int64_t ;



__attribute__((used)) static int
FUNC_0(const svn_sort__item_t *VAR_0,
              const svn_sort__item_t *VAR_1)
{
  const svn_fs_fs__extension_info_t *VAR_2 = VAR_0->value;
  const svn_fs_fs__extension_info_t *VAR_3 = VAR_1->value;
  apr_int64_t VAR_4 = VAR_2->node_histogram.total.count
                   - VAR_3->node_histogram.total.count;

  return VAR_4 > 0 ? -1 : (VAR_4 < 0 ? 1 : 0);
}
