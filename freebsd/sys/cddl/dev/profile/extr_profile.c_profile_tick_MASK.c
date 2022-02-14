
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prof_expected; int prof_cyclic; scalar_t__ prof_interval; } ;
typedef TYPE_1__ profile_probe_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 profile_probe_t *VAR_3 = VAR_2;

 FUNC_1(VAR_3, 0);
 VAR_3->prof_expected += VAR_3->prof_interval;
 FUNC_0(&VAR_3->prof_cyclic,
     VAR_3->prof_expected, 0, VAR_1 | VAR_0);
}
