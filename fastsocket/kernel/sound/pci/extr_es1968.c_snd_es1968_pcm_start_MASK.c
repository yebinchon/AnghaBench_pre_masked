
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esschan {scalar_t__ mode; int fmt; int * apu_mode; int * apu; int * base; } ;
struct es1968 {int reg_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1968*,int ,int,int ) ;
 int FUNC_1 (struct es1968*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct es1968 *VAR_2, struct esschan *VAR_3)
{
 FUNC_2(&VAR_2->reg_lock);
 FUNC_0(VAR_2, VAR_3->apu[0], 5, VAR_3->base[0]);
 FUNC_1(VAR_2, VAR_3->apu[0], VAR_3->apu_mode[0]);
 if (VAR_3->mode == VAR_0) {
  FUNC_0(VAR_2, VAR_3->apu[2], 5, VAR_3->base[2]);
  FUNC_1(VAR_2, VAR_3->apu[2], VAR_3->apu_mode[2]);
 }
 if (VAR_3->fmt & VAR_1) {
  FUNC_0(VAR_2, VAR_3->apu[1], 5, VAR_3->base[1]);
  FUNC_1(VAR_2, VAR_3->apu[1], VAR_3->apu_mode[1]);
  if (VAR_3->mode == VAR_0) {
   FUNC_0(VAR_2, VAR_3->apu[3], 5, VAR_3->base[3]);
   FUNC_1(VAR_2, VAR_3->apu[3], VAR_3->apu_mode[3]);
  }
 }
 FUNC_3(&VAR_2->reg_lock);
}
