
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {struct generic_data* model_data; } ;
struct generic_data {int * wm8785_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_3)
{
 struct generic_data *VAR_4 = VAR_3->model_data;

 FUNC_0(VAR_3, VAR_2, 0);
 FUNC_0(VAR_3, VAR_0, VAR_4->wm8785_regs[0]);
 FUNC_0(VAR_3, VAR_1, VAR_4->wm8785_regs[2]);
}
