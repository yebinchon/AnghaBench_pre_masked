
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_chinfo {scalar_t__ dir; scalar_t__ dma_active; int speed; struct sc_info* parent; } ;
struct sc_info {struct sc_chinfo pch; struct sc_chinfo rch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sc_info*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct sc_chinfo *VAR_2)
{
 struct sc_info *VAR_3 = VAR_2->parent;
 struct sc_chinfo *VAR_4;

 VAR_4 = (VAR_2->dir == VAR_1) ? &VAR_3->rch : &VAR_3->pch;
 if (VAR_4->dma_active == 0) {
  FUNC_1(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_2->speed >> 8);
  FUNC_1(VAR_3, VAR_2->speed & 0xff);
 } else {
  FUNC_0(FUNC_2("speed locked at %d (tried %d)\n",
      VAR_4->speed, VAR_2->speed));
 }
}
