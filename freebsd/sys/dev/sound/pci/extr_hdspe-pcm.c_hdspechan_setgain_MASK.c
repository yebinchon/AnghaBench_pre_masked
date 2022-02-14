
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_chinfo {int lvol; int rvol; int rslot; int lslot; } ;


 int VAR_0 ;
 int FUNC_0 (struct sc_chinfo*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sc_chinfo *VAR_1)
{

 FUNC_0(VAR_1, VAR_1->lslot, VAR_1->lslot,
     VAR_1->lvol * VAR_0 / 100);
 FUNC_0(VAR_1, VAR_1->rslot, VAR_1->rslot,
     VAR_1->rvol * VAR_0 / 100);

 return (0);
}
