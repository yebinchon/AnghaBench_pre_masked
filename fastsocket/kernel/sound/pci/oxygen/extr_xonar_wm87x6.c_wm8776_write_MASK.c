
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xonar_wm87x6 {unsigned int* wm8776_regs; } ;
struct TYPE_2__ {int function_flags; } ;
struct oxygen {TYPE_1__ model; struct xonar_wm87x6* model_data; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct oxygen*,unsigned int,unsigned int) ;
 int FUNC_2 (struct oxygen*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 struct xonar_wm87x6 *VAR_8 = VAR_5->model_data;

 if ((VAR_5->model.function_flags & VAR_0) ==
     VAR_1)
  FUNC_2(VAR_5, VAR_6, VAR_7);
 else
  FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_6 < FUNC_0(VAR_8->wm8776_regs)) {
  if (VAR_6 >= VAR_3 && VAR_6 <= VAR_2)
   VAR_7 &= ~VAR_4;
  VAR_8->wm8776_regs[VAR_6] = VAR_7;
 }
}
