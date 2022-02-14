
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipepair {int pp_mtx; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct pipepair *VAR_2;

 FUNC_0(VAR_1 == sizeof(*VAR_2), ("pipe_zone_fini: wrong size"));

 VAR_2 = (struct pipepair *)VAR_0;

 FUNC_1(&VAR_2->pp_mtx);
}
