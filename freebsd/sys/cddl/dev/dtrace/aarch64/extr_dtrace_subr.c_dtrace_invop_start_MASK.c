
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_elr; size_t tf_sp; size_t* tf_x; int tf_lr; } ;
typedef size_t register_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int FUNC_0 (int,struct trapframe*,int) ;

__attribute__((used)) static int
FUNC_1(struct trapframe *VAR_13)
{
 int VAR_14, VAR_15, VAR_16, VAR_17;
 register_t VAR_18, VAR_19;
 register_t *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_15 = FUNC_0(VAR_13->tf_elr, VAR_13, VAR_13->tf_elr);

 VAR_22 = (VAR_15 & VAR_8);
 if (VAR_22 == 128 || VAR_22 == 129) {
  VAR_20 = (register_t *)VAR_13->tf_sp;
  VAR_14 = VAR_15;
  VAR_18 = (VAR_14 >> VAR_1) & VAR_0;
  VAR_19 = (VAR_14 >> VAR_3) & VAR_2;

  VAR_21 = (VAR_14 >> VAR_10) & VAR_9;

  switch (VAR_22) {
  case 128:
   if (VAR_21 >> (VAR_11 - 1))
    VAR_20 -= (~VAR_21 & VAR_9) + 1;
   else
    VAR_20 += (VAR_21);
   *(VAR_20 + 0) = VAR_13->tf_x[VAR_18];
   *(VAR_20 + 1) = VAR_13->tf_x[VAR_19];
   break;
  case 129:
   VAR_13->tf_x[VAR_18] = *(VAR_20 + 0);
   VAR_13->tf_x[VAR_19] = *(VAR_20 + 1);
   if (VAR_21 >> (VAR_11 - 1))
    VAR_20 -= (~VAR_21 & VAR_9) + 1;
   else
    VAR_20 += (VAR_21);
   break;
  default:
   break;
  }


  VAR_13->tf_sp = (register_t)VAR_20;
  VAR_13->tf_elr += VAR_7;
  return (0);
 }

 if ((VAR_15 & VAR_6) == VAR_5) {
  VAR_14 = (VAR_15 & VAR_4);

  VAR_14 *= 4;
  VAR_13->tf_elr += VAR_14;
  return (0);
 }

 if (VAR_15 == VAR_12) {
  VAR_13->tf_elr = VAR_13->tf_lr;
  return (0);
 }

 return (-1);
}
