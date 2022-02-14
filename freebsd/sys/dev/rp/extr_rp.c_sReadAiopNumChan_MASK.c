
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Word_t ;
typedef int CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ,int) ;
 int FUNC_2 (int *,int,int ,int) ;

int FUNC_3(CONTROLLER_T *VAR_2, int VAR_3)
{
   Word_t VAR_4, VAR_5;

   FUNC_2(VAR_2, VAR_3, VAR_0,0x12340000L);
   FUNC_1(VAR_2, VAR_3, VAR_0,0);
   VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
   FUNC_1(VAR_2, VAR_3, VAR_0,0x4000);
   VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);
   if(VAR_4 != VAR_5)
      return(8);
   else
      return(4);
}
