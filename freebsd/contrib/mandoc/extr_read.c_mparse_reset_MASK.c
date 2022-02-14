
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mparse {scalar_t__ gzip; int * secondary; int man; int roff; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct mparse *VAR_0)
{
 FUNC_2(VAR_0->roff);
 FUNC_1(VAR_0->man);
 FUNC_0(VAR_0->secondary);
 VAR_0->secondary = ((void*)0);
 VAR_0->gzip = 0;
}
