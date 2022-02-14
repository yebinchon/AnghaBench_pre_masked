
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_pc; void* tf_r0; void* tf_svc_sp; void* tf_svc_lr; } ;
typedef void* register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int) ;
 int VAR_3 ;


 int FUNC_1 (int,struct trapframe*,int) ;

__attribute__((used)) static int
FUNC_2(struct trapframe *VAR_4)
{
 register_t *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_1(VAR_4->tf_pc, VAR_4, VAR_4->tf_pc);
 switch (VAR_8 & VAR_3) {
 case 128:
  VAR_6 = (register_t *)VAR_4->tf_svc_sp;
  VAR_5 = &VAR_4->tf_r0;
  VAR_7 = FUNC_0(VAR_8);





  if (VAR_7 & (1 << VAR_1)) {
   VAR_6--;
   *VAR_6 = VAR_4->tf_pc;
  }
  if (VAR_7 & (1 << VAR_0)) {
   VAR_6--;
   *VAR_6 = VAR_4->tf_svc_lr;
  }
  if (VAR_7 & (1 << VAR_2)) {
   VAR_6--;
   *VAR_6 = VAR_4->tf_svc_sp;
  }


  for (VAR_9 = 12; VAR_9 >= 0; VAR_9--) {
   if (VAR_7 & (1 << VAR_9)) {
    VAR_6--;
    *VAR_6 = VAR_5[VAR_9];
   }
  }


  VAR_4->tf_svc_sp = (register_t)VAR_6;
  VAR_4->tf_pc += 4;
  break;
 case 129:
  VAR_6 = (register_t *)VAR_4->tf_svc_sp;
  VAR_5 = &VAR_4->tf_r0;
  VAR_7 = FUNC_0(VAR_8);


  for (VAR_9 = 0; VAR_9 <= 12; VAR_9++) {
   if (VAR_7 & (1 << VAR_9)) {
    VAR_5[VAR_9] = *VAR_6;
    VAR_6++;
   }
  }





  VAR_10 = 1;
  if (VAR_7 & (1 << VAR_2)) {
   VAR_4->tf_svc_sp = *VAR_6;
   *VAR_6++;
   VAR_10 = 0;
  }


  if (VAR_7 & (1 << VAR_0)) {
   VAR_4->tf_svc_lr = *VAR_6;
   *VAR_6++;
  }




  if (VAR_7 & (1 << VAR_1)) {
   VAR_4->tf_pc = *VAR_6;
   *VAR_6++;
  } else
   VAR_4->tf_pc += 4;


  if (VAR_10)
   VAR_4->tf_svc_sp = (register_t)VAR_6;
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_8) & 0x00ffffff;

  if ((VAR_7 & (1 << 23)) != 0)
   VAR_7 |= 0xff000000;

  VAR_7 *= 4;
  VAR_7 += 8;
  VAR_4->tf_pc += VAR_7;
  break;
 default:
  return (-1);
  break;
 }

 return (0);
}
