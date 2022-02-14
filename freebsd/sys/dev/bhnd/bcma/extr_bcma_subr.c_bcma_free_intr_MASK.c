
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcma_intr {int i_sel; int i_mapped; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bcma_intr*,int ) ;

void
FUNC_2(struct bcma_intr *VAR_1)
{
 FUNC_0(!VAR_1->i_mapped, ("interrupt %u still mapped", VAR_1->i_sel));

 FUNC_1(VAR_1, VAR_0);
}
