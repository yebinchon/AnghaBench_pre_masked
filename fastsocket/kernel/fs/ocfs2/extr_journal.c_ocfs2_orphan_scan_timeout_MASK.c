
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long*,int) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_2(void)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_1, sizeof(VAR_1));
 VAR_1 = VAR_0 + (VAR_1 % 5000);
 return FUNC_1(VAR_1);
}
