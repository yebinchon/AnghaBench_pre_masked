
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int tf_err; int tf_rflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_0(struct trapframe *VAR_7)
{
 return ((VAR_6 & VAR_0) != 0 &&
     (VAR_7->tf_err & (VAR_2 | VAR_4 | VAR_1 | VAR_3)) ==
     VAR_2 && (VAR_7->tf_rflags & VAR_5) == 0);
}
