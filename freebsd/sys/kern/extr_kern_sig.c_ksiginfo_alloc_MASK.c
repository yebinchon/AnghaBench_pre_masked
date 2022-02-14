
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;

ksiginfo_t *
FUNC_1(int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_1;
 if (! VAR_3)
  VAR_4 |= VAR_0;
 if (VAR_2 != ((void*)0))
  return ((ksiginfo_t *)FUNC_0(VAR_2, VAR_4));
 return (((void*)0));
}
