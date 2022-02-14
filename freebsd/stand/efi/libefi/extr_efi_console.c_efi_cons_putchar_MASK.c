
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ch ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned char*,int) ;

void
FUNC_3(int VAR_4)
{
 unsigned char VAR_5 = VAR_4;

 if ((VAR_2 & VAR_0) != 0) {
  FUNC_1(VAR_5);
  return;
 }

 if (VAR_1 != ((void*)0))
  FUNC_2(&VAR_3, &VAR_5, sizeof (VAR_5));
 else
  FUNC_0(VAR_4);
}
