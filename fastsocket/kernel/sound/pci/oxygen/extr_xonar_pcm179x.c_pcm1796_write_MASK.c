
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct xonar_pcm179x {size_t** pcm1796_regs; } ;
struct TYPE_2__ {int function_flags; } ;
struct oxygen {TYPE_1__ model; struct xonar_pcm179x* model_data; } ;


 unsigned int FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct oxygen*,unsigned int,size_t,size_t) ;
 int FUNC_2 (struct oxygen*,unsigned int,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(struct oxygen *VAR_3, unsigned int VAR_4,
     u8 VAR_5, u8 VAR_6)
{
 struct xonar_pcm179x *VAR_7 = VAR_3->model_data;

 if ((VAR_3->model.function_flags & VAR_0) ==
     VAR_1)
  FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 else
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 if ((unsigned int)(VAR_5 - VAR_2)
     < FUNC_0(VAR_7->pcm1796_regs[VAR_4]))
  VAR_7->pcm1796_regs[VAR_4][VAR_5 - VAR_2] = VAR_6;
}
