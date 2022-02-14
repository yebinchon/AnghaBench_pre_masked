
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 size_t FUNC_1 (unsigned long,scalar_t__) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;

void FUNC_2(int VAR_5, void *VAR_6, unsigned int VAR_7)
{
 unsigned long VAR_8;

 if (VAR_3 != VAR_5 || !VAR_1)
  return;
 VAR_8 = ((unsigned long)VAR_6 - (unsigned long)VAR_0) >> VAR_4;
 FUNC_0(VAR_7, &VAR_1[FUNC_1(VAR_8, VAR_2 - 1)]);
}
