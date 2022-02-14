
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pruss_irqsc {long last; } ;
struct knote {long kn_data; struct ti_pruss_irqsc* kn_hook; } ;



__attribute__((used)) static int
FUNC_0(struct knote *VAR_0, long VAR_1)
{
    struct ti_pruss_irqsc* VAR_2;
    int VAR_3;

    VAR_2 = VAR_0->kn_hook;

    if (VAR_1 > 0)
        VAR_0->kn_data = VAR_1 - 2;

    if (VAR_1 > 0 || VAR_2->last > 0)
        VAR_3 = 1;
    else
        VAR_3 = 0;

    VAR_2->last = VAR_1;

    return (VAR_3);
}
