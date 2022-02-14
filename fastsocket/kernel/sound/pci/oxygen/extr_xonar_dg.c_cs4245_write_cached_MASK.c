
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct oxygen {struct dg* model_data; } ;
struct dg {scalar_t__* cs4245_regs; } ;


 int FUNC_0 (struct oxygen*,unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0, unsigned int VAR_1, u8 VAR_2)
{
 struct dg *VAR_3 = VAR_0->model_data;

 if (VAR_2 != VAR_3->cs4245_regs[VAR_1])
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
