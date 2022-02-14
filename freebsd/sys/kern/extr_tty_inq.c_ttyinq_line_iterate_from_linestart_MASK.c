
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ttyinq_line_iterator_t ;
struct ttyinq {int ti_startblock; int ti_linestart; } ;


 int FUNC_0 (struct ttyinq*,int *,void*,int ,int ) ;

void
FUNC_1(struct ttyinq *VAR_0,
    ttyinq_line_iterator_t *VAR_1, void *VAR_2)
{

 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_0->ti_linestart, VAR_0->ti_startblock);
}
