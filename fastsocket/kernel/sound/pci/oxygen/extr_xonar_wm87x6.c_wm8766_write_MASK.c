
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_wm87x6 {unsigned int* wm8766_regs; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct oxygen*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_10,
    unsigned int VAR_11, unsigned int VAR_12)
{
 struct xonar_wm87x6 *VAR_13 = VAR_10->model_data;

 FUNC_1(VAR_10, VAR_4 |
    VAR_3 |
    VAR_1 |
    (0 << VAR_2) |
    VAR_0,
    (VAR_11 << 9) | VAR_12);
 if (VAR_11 < FUNC_0(VAR_13->wm8766_regs)) {
  if ((VAR_11 >= VAR_5 && VAR_11 <= VAR_8) ||
      (VAR_11 >= VAR_6 && VAR_11 <= VAR_7))
   VAR_12 &= ~VAR_9;
  VAR_13->wm8766_regs[VAR_11] = VAR_12;
 }
}
