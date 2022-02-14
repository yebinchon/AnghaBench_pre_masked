
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned FUNC_3(void)
{
 unsigned VAR_3;

 VAR_3 = FUNC_0(&VAR_1) * VAR_2;
 VAR_3 /= 100;
 VAR_3 = FUNC_1(VAR_3, 1U);
 return FUNC_2(VAR_3, VAR_0 - 1);
}
