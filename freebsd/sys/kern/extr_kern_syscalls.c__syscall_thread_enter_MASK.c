
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct thread {int dummy; } ;
struct sysent {int sy_thrcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int,int) ;

int
FUNC_1(struct thread *VAR_4, struct sysent *VAR_5)
{
 u_int32_t VAR_6, VAR_7;

 do {
  VAR_7 = VAR_5->sy_thrcnt;
  if ((VAR_7 & (VAR_2 | VAR_1)) != 0)
   return (VAR_0);
  VAR_6 = VAR_7 + VAR_3;
 } while (FUNC_0(&VAR_5->sy_thrcnt, VAR_7, VAR_6) == 0);
 return (0);
}
