
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct AdapterControlBlock {int srb_dmamap; int srb_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct AdapterControlBlock*,int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_12)
{
 u_int32_t VAR_13,VAR_14 = 0;
 u_int16_t VAR_15;






 FUNC_3(VAR_12->srb_dmat, VAR_12->srb_dmamap, VAR_4|VAR_5);
 do {
  VAR_13 = FUNC_0(VAR_7, 0, VAR_11);
  if (VAR_13 == 0xFFFFFFFF)
   break;

  VAR_15 = (VAR_13 & VAR_3)?VAR_8:VAR_6;
  FUNC_2(VAR_12, VAR_13, VAR_15);
  VAR_14++;
  if(VAR_14 == VAR_2) {
   FUNC_1(VAR_7, 0, VAR_10,VAR_0);
   VAR_14 = 0;
  }
 } while(FUNC_0(VAR_7, 0, VAR_9) & VAR_1);
}
