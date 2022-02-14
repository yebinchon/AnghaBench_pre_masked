
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esschan {int fmt; int* apu; int* wc_map; } ;
struct es1968 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es1968*,int,int) ;

__attribute__((used)) static void FUNC_1(struct es1968 *VAR_2, struct esschan *VAR_3,
      int VAR_4, u32 VAR_5, int VAR_6)
{
 u32 VAR_7 = (VAR_5 - 0x10) & 0xFFF8;

 if (! VAR_6) {
  if (!(VAR_3->fmt & VAR_0))
   VAR_7 |= 4;
  if (VAR_3->fmt & VAR_1)
   VAR_7 |= 2;
 }


 FUNC_0(VAR_2, VAR_3->apu[VAR_4] << 3, VAR_7);




}
