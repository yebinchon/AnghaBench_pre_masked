
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int card; struct dg* model_data; } ;
struct dg {int* cs4245_regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_17)
{
 struct dg *VAR_18 = VAR_17->model_data;

 VAR_18->cs4245_regs[VAR_8] =
  VAR_10 | VAR_9;
 VAR_18->cs4245_regs[VAR_0] =
  VAR_2 | VAR_1;
 VAR_18->cs4245_regs[VAR_16] =
  VAR_5 | VAR_4;
 VAR_18->cs4245_regs[VAR_12] = 0;
 VAR_18->cs4245_regs[VAR_11] = 0;
 VAR_18->cs4245_regs[VAR_3] =
  VAR_13 | VAR_14 | VAR_15;
 VAR_18->cs4245_regs[VAR_6] = 0;
 VAR_18->cs4245_regs[VAR_7] = 0;
 FUNC_0(VAR_17);
 FUNC_1(VAR_17->card, "CS4245");
}
