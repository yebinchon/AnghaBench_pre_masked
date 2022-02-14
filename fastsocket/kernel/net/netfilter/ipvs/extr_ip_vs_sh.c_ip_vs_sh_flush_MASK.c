
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_sh_bucket {TYPE_1__* dest; } ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_sh_bucket *VAR_1)
{
 int VAR_2;
 struct ip_vs_sh_bucket *VAR_3;

 VAR_3 = VAR_1;
 for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if (VAR_3->dest) {
   FUNC_0(&VAR_3->dest->refcnt);
   VAR_3->dest = ((void*)0);
  }
  VAR_3++;
 }
}
