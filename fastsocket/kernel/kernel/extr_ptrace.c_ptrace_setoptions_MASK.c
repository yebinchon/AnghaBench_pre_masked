
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int ptrace; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_0(struct task_struct *VAR_17, long VAR_18)
{
 VAR_17->ptrace &= ~VAR_14;

 if (VAR_18 & VAR_6)
  VAR_17->ptrace |= VAR_9;

 if (VAR_18 & VAR_5)
  VAR_17->ptrace |= VAR_13;

 if (VAR_18 & VAR_7)
  VAR_17->ptrace |= VAR_15;

 if (VAR_18 & VAR_2)
  VAR_17->ptrace |= VAR_10;

 if (VAR_18 & VAR_3)
  VAR_17->ptrace |= VAR_11;

 if (VAR_18 & VAR_8)
  VAR_17->ptrace |= VAR_16;

 if (VAR_18 & VAR_4)
  VAR_17->ptrace |= VAR_12;

 return (VAR_18 & ~VAR_1) ? -VAR_0 : 0;
}
