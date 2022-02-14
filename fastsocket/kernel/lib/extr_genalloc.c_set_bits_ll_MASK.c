
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_4 = *VAR_1;
 do {
  VAR_3 = VAR_4;
  if (VAR_3 & VAR_2)
   return -VAR_0;
  FUNC_1();
 } while ((VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_3 | VAR_2)) != VAR_3);

 return 0;
}
