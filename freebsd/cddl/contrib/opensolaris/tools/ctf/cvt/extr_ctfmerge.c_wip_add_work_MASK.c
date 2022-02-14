
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wip_nmerged; int * wip_td; } ;
typedef TYPE_1__ wip_t ;
typedef int tdata_t ;


 int FUNC_0 (int,char*,int ,void*,void*) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(wip_t *VAR_0, tdata_t *VAR_1)
{
 if (VAR_0->wip_td == ((void*)0)) {
  VAR_0->wip_td = VAR_1;
  VAR_0->wip_nmerged = 1;
 } else {
  FUNC_0(2, "%d: merging %p into %p\n", FUNC_2(),
      (void *)VAR_1, (void *)VAR_0->wip_td);

  FUNC_1(VAR_1, VAR_0->wip_td, ((void*)0), 0);
  FUNC_3(VAR_1);

  VAR_0->wip_nmerged++;
 }
}
