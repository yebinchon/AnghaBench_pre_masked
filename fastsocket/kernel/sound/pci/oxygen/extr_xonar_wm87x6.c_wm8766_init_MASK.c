
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {int* wm8766_regs; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_3)
{
 struct xonar_wm87x6 *VAR_4 = VAR_3->model_data;

 VAR_4->wm8766_regs[VAR_0] =
  VAR_1 | VAR_2;
 FUNC_0(VAR_3);
}
