
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage_ext {scalar_t__ rux_tu; scalar_t__ rux_su; scalar_t__ rux_uu; scalar_t__ rux_iticks; scalar_t__ rux_sticks; scalar_t__ rux_uticks; scalar_t__ rux_runtime; } ;
struct rusage {int dummy; } ;


 int FUNC_0 (struct rusage*,struct rusage*) ;

void
FUNC_1(struct rusage *VAR_0, struct rusage_ext *VAR_1, struct rusage *VAR_2,
    struct rusage_ext *VAR_3)
{

 VAR_1->rux_runtime += VAR_3->rux_runtime;
 VAR_1->rux_uticks += VAR_3->rux_uticks;
 VAR_1->rux_sticks += VAR_3->rux_sticks;
 VAR_1->rux_iticks += VAR_3->rux_iticks;
 VAR_1->rux_uu += VAR_3->rux_uu;
 VAR_1->rux_su += VAR_3->rux_su;
 VAR_1->rux_tu += VAR_3->rux_tu;
 FUNC_0(VAR_0, VAR_2);
}
