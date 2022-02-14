
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned long VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{







 if (VAR_2 & VAR_1) {
  unsigned long VAR_5 = FUNC_1();
  while (VAR_4 <= VAR_5 / 2)
   VAR_5 /= 2;
  VAR_3 = FUNC_2(VAR_3, VAR_5);
 }

 if (VAR_3 < VAR_0)
  VAR_3 = VAR_0;

 return FUNC_0(VAR_3, sizeof(void *));
}
