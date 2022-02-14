
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tv_sec; } ;
struct TYPE_6__ {TYPE_1__ c_tv; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(int VAR_4)
{
 FUNC_1(&VAR_3, &VAR_1[VAR_4], VAR_0);
 FUNC_2(&VAR_1[VAR_4].c_tv);
 VAR_1[VAR_4].c_tv.tv_sec += VAR_2;
 FUNC_0(&VAR_3, &VAR_1[VAR_4], VAR_0);
}
