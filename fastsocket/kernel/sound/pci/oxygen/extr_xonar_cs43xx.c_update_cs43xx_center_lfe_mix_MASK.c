
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_cs43xx {int* cs4362a_regs; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,int,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_5, bool VAR_6)
{
 struct xonar_cs43xx *VAR_7 = VAR_5->model_data;
 u8 VAR_8;

 VAR_8 = VAR_7->cs4362a_regs[9] & ~VAR_4;
 if (VAR_6)
  VAR_8 |= VAR_2 | VAR_1;
 else
  VAR_8 |= VAR_3 | VAR_0;
 FUNC_0(VAR_5, 9, VAR_8);
}
