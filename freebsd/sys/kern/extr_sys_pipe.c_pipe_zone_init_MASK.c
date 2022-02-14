
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipepair {int pp_mtx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, int VAR_3, int VAR_4)
{
 struct pipepair *VAR_5;

 FUNC_0(VAR_3 == sizeof(*VAR_5), ("pipe_zone_init: wrong size"));

 VAR_5 = (struct pipepair *)VAR_2;

 FUNC_1(&VAR_5->pp_mtx, "pipe mutex", ((void*)0), VAR_0 | VAR_1);
 return (0);
}
