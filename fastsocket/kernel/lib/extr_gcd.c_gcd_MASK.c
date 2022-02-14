
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long) ;

unsigned long FUNC_1(unsigned long VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 if (VAR_0 < VAR_1)
  FUNC_0(VAR_0, VAR_1);
 while ((VAR_2 = VAR_0 % VAR_1) != 0) {
  VAR_0 = VAR_1;
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
