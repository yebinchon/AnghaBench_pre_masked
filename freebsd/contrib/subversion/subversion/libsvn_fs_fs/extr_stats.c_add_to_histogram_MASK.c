
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sum; int count; } ;
struct TYPE_7__ {TYPE_2__* lines; TYPE_1__ total; } ;
typedef TYPE_3__ svn_fs_fs__histogram_t ;
typedef size_t apr_size_t ;
typedef int apr_int64_t ;
struct TYPE_6__ {int sum; int count; } ;



__attribute__((used)) static void
FUNC_0(svn_fs_fs__histogram_t *VAR_0,
                 apr_int64_t VAR_1)
{
  apr_int64_t VAR_2 = 0;

  while (((apr_int64_t)(1) << VAR_2) <= VAR_1)
    VAR_2++;

  VAR_0->total.count++;
  VAR_0->total.sum += VAR_1;
  VAR_0->lines[(apr_size_t)VAR_2].count++;
  VAR_0->lines[(apr_size_t)VAR_2].sum += VAR_1;
}
