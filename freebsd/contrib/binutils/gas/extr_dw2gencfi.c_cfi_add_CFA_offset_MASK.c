
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int offsetT ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;

void
FUNC_4 (unsigned VAR_2, offsetT VAR_3)
{
  unsigned int VAR_4;

  FUNC_2 (VAR_0 != 0);
  FUNC_3 (VAR_1, VAR_2, VAR_3);

  VAR_4 = (VAR_0 < 0
      ? -VAR_0 : VAR_0);
  if (VAR_3 % VAR_4)
    FUNC_1 (FUNC_0("register save offset not a multiple of %u"), VAR_4);
}
