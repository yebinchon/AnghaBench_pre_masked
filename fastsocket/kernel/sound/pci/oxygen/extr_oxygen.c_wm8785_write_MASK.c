
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {unsigned int* wm8785_regs; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct oxygen*,int,int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_5, u8 VAR_6, unsigned int VAR_7)
{
 struct generic_data *VAR_8 = VAR_5->model_data;

 FUNC_1(VAR_5, VAR_4 |
    VAR_3 |
    VAR_1 |
    (3 << VAR_2) |
    VAR_0,
    (VAR_6 << 9) | VAR_7);
 if (VAR_6 < FUNC_0(VAR_8->wm8785_regs))
  VAR_8->wm8785_regs[VAR_6] = VAR_7;
}
