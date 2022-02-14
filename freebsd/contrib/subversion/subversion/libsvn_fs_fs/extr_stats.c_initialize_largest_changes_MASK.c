
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* largest_changes; } ;
typedef TYPE_2__ svn_fs_fs__stats_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int count; int min_size; TYPE_1__** changes; } ;
struct TYPE_5__ {int path; int revision; scalar_t__ size; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void
FUNC_3(svn_fs_fs__stats_t *VAR_1,
                           apr_size_t VAR_2,
                           apr_pool_t *VAR_3)
{
  apr_size_t VAR_4;

  VAR_1->largest_changes = FUNC_1(VAR_3,
                                       sizeof(*VAR_1->largest_changes));
  VAR_1->largest_changes->count = VAR_2;
  VAR_1->largest_changes->min_size = 1;
  VAR_1->largest_changes->changes
    = FUNC_0(VAR_3, VAR_2 * sizeof(*VAR_1->largest_changes->changes));



  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    VAR_1->largest_changes->changes[VAR_4]
      = FUNC_0(VAR_3, sizeof(**VAR_1->largest_changes->changes));


  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    {
      VAR_1->largest_changes->changes[VAR_4]->size = 0;
      VAR_1->largest_changes->changes[VAR_4]->revision = VAR_0;
      VAR_1->largest_changes->changes[VAR_4]->path
        = FUNC_2(1024, VAR_3);
    }
}
