
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_4__ {int rc_error; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(raidz_map_t *VAR_0)
{
 int VAR_1 = 0;

 for (int VAR_2 = 0; VAR_2 < VAR_0->rm_cols; VAR_2++)
  VAR_1 = FUNC_0(VAR_1, VAR_0->rm_col[VAR_2].rc_error);

 return (VAR_1);
}
