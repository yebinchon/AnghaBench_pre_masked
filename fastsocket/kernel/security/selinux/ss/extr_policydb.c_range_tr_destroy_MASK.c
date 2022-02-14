
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mls_range {TYPE_1__* level; } ;
struct TYPE_2__ {int cat; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, void *VAR_1, void *VAR_2)
{
 struct mls_range *VAR_3 = VAR_1;
 FUNC_2(VAR_0);
 FUNC_1(&VAR_3->level[0].cat);
 FUNC_1(&VAR_3->level[1].cat);
 FUNC_2(VAR_1);
 FUNC_0();
 return 0;
}
