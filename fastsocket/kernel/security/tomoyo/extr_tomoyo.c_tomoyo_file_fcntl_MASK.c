
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {unsigned long f_flags; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,struct file*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 if (VAR_3 == VAR_0 && ((VAR_4 ^ VAR_2->f_flags) & VAR_1))
  return FUNC_0(FUNC_1(), VAR_2);
 return 0;
}
