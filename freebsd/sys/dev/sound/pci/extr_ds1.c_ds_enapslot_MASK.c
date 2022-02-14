
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int pbanksize; scalar_t__ pbankbase; int * pbase; } ;


 int FUNC_0 (struct sc_info*,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, &VAR_0->pbase[VAR_1 + 1], VAR_2? (VAR_0->pbankbase + 2 * VAR_1 * VAR_0->pbanksize) : 0);

}
