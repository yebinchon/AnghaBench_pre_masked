
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tfrc_loss_hist {int i_mean; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct tfrc_loss_hist*,int) ;
 int FUNC_2 (struct tfrc_loss_hist*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct tfrc_loss_hist *VAR_1)
{
 u32 VAR_2, VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 int VAR_6, VAR_7 = FUNC_2(VAR_1) - 1;

 if (VAR_7 <= 0)
  return;

 for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++) {
  VAR_2 = FUNC_1(VAR_1, VAR_6);

  if (VAR_6 < VAR_7) {
   VAR_3 += VAR_2 * VAR_0[VAR_6];
   VAR_5 += VAR_0[VAR_6];
  }
  if (VAR_6 > 0)
   VAR_4 += VAR_2 * VAR_0[VAR_6-1];
 }

 VAR_1->i_mean = FUNC_0(VAR_3, VAR_4) / VAR_5;
}
