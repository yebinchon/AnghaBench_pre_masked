
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventtimer {int et_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct eventtimer *VAR_2)
{

 VAR_2->et_flags &= ~(VAR_1 | VAR_0);
 return (0);
}
