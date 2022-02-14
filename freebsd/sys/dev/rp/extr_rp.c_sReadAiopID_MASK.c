
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONTROLLER_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ,int) ;

int FUNC_2(CONTROLLER_T *VAR_3, int VAR_4)
{
   Byte_t VAR_5;

   FUNC_1(VAR_3, VAR_4, VAR_2, VAR_0);
   FUNC_1(VAR_3, VAR_4, VAR_2, 0x0);
   VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1) & 0x07;
   if(VAR_5 == 0x06)
      return(1);
   else
      return(-1);
}
