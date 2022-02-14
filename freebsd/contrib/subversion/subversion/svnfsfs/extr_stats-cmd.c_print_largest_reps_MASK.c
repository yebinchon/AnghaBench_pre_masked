
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t count; TYPE_2__** changes; } ;
typedef TYPE_3__ svn_fs_fs__largest_changes_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {scalar_t__ size; TYPE_1__* path; int revision; } ;
struct TYPE_5__ {int data; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int ,int ) ;
 char* FUNC_2 (scalar_t__,char,int *) ;

__attribute__((used)) static void
FUNC_3(svn_fs_fs__largest_changes_t *VAR_0,
                   apr_pool_t *VAR_1)
{
  apr_size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->count && VAR_0->changes[VAR_2]->size; ++VAR_2)
    FUNC_1(FUNC_0("%12s r%-8ld %s\n"),
           FUNC_2(VAR_0->changes[VAR_2]->size, ',', VAR_1),
           VAR_0->changes[VAR_2]->revision,
           VAR_0->changes[VAR_2]->path->data);
}
