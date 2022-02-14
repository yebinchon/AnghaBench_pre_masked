
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sum; int count; } ;
struct TYPE_7__ {TYPE_2__ total; TYPE_1__* lines; } ;
typedef TYPE_3__ svn_fs_fs__histogram_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int count; int sum; } ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (int,int *) ;
 int FUNC_2 (char*,char*,char*,char*,int,char*,int) ;
 char* FUNC_3 (int,char,int *) ;

__attribute__((used)) static void
FUNC_4(svn_fs_fs__histogram_t *VAR_0,
                apr_pool_t *VAR_1)
{
  int VAR_2 = 0;
  int VAR_3 = 63;
  int VAR_4;


  while (VAR_3 > 0 && VAR_0->lines[VAR_3].count == 0)
    --VAR_3;

  while (VAR_2 <= VAR_3 && VAR_0->lines[VAR_2].count == 0)
    ++VAR_2;


  for (VAR_4 = VAR_3; VAR_4 >= VAR_2; --VAR_4)
    FUNC_2(FUNC_0("  %4s .. < %-4s %19s (%2d%%) bytes in %12s (%2d%%) items\n"),
           FUNC_1(VAR_4-1, VAR_1), FUNC_1(VAR_4, VAR_1),
           FUNC_3(VAR_0->lines[VAR_4].sum, ',', VAR_1),
           (int)(VAR_0->lines[VAR_4].sum * 100 / VAR_0->total.sum),
           FUNC_3(VAR_0->lines[VAR_4].count, ',', VAR_1),
           (int)(VAR_0->lines[VAR_4].count * 100 / VAR_0->total.count));
}
