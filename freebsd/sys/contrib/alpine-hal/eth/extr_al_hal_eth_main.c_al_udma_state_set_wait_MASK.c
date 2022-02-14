
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_udma {int name; } ;
typedef enum al_udma_state { ____Placeholder_al_udma_state } al_udma_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct al_udma*) ;
 int FUNC_2 (struct al_udma*,int) ;
 int* VAR_4 ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct al_udma *VAR_5, enum al_udma_state VAR_6)
{
 enum al_udma_state VAR_7;
 enum al_udma_state VAR_8 = VAR_6;
 int VAR_9 = 1000;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6);
 if (VAR_10 != 0) {
  FUNC_3("[%s] warn: failed to change state, error %d\n", VAR_5->name, VAR_10);
  return VAR_10;
 }

 if ((VAR_6 == VAR_3) || (VAR_6 == VAR_1))
  VAR_8 = VAR_2;

 do {
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 == VAR_8)
   break;
  FUNC_0(1);
  if (VAR_9-- == 0) {
   FUNC_3("[%s] warn: dma state didn't change to %s\n",
     VAR_5->name, VAR_4[VAR_6]);
   return -VAR_0;
  }
 } while (1);
 return 0;
}
