
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
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct AdapterControlBlock*,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_7)
{
 u_int32_t VAR_8;
 u_int16_t VAR_9;






 FUNC_2(VAR_7->srb_dmat, VAR_7->srb_dmamap,
  VAR_1|VAR_2);
 while((VAR_8 = FUNC_0(VAR_4,
  0, VAR_6)) != 0xFFFFFFFF) {

 VAR_9 = (VAR_8 & VAR_0) ? VAR_5 : VAR_3;
  FUNC_1(VAR_7, VAR_8, VAR_9);
 }
}
