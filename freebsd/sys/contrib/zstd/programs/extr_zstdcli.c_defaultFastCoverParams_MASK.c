
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int params ;
struct TYPE_4__ {int d; int f; int steps; double splitPoint; int shrinkDictMaxRegression; scalar_t__ shrinkDict; int accel; } ;
typedef TYPE_1__ ZDICT_fastCover_params_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ZDICT_fastCover_params_t FUNC_1(void)
{
    ZDICT_fastCover_params_t VAR_2;
    FUNC_0(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.d = 8;
    VAR_2.f = 20;
    VAR_2.steps = 4;
    VAR_2.splitPoint = 0.75;
    VAR_2.accel = VAR_0;
    VAR_2.shrinkDict = 0;
    VAR_2.shrinkDictMaxRegression = VAR_1;
    return VAR_2;
}
