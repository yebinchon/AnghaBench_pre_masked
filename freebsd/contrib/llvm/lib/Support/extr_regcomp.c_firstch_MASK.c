
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {TYPE_1__* g; } ;
typedef int cset ;
struct TYPE_2__ {int csetsize; } ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct parse *VAR_1, cset *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4 = (size_t)VAR_1->g->csetsize;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  if (FUNC_0(VAR_2, VAR_3))
   return((char)VAR_3);
 FUNC_1(VAR_0);
 return(0);
}
