
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {unsigned int* wm8776_regs; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct oxygen*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 struct xonar_wm87x6 *VAR_3 = VAR_0->model_data;

 if (VAR_1 >= FUNC_0(VAR_3->wm8776_regs) ||
     VAR_2 != VAR_3->wm8776_regs[VAR_1])
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
