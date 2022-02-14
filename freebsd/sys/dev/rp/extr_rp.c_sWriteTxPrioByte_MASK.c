
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int TxPrioCnt; int TxPrioBuf; } ;
typedef TYPE_1__ CHANNEL_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

int FUNC_8(CHANNEL_T *VAR_3, Byte_t VAR_4)
{
   Byte_t VAR_5[4];

   if(FUNC_5(VAR_3) > 1)
   {
      FUNC_3(VAR_3,VAR_1,VAR_3->TxPrioCnt);
      if(FUNC_2(VAR_3,VAR_2) & VAR_0)
  return(0);

      FUNC_0(VAR_5,VAR_3->TxPrioBuf);

      VAR_5[2] = VAR_4;
      VAR_5[3] = 0;
      FUNC_4(VAR_3,VAR_1,FUNC_1(VAR_5));

      FUNC_0(VAR_5,VAR_3->TxPrioCnt);

      VAR_5[2] = VAR_0 + 1;
      VAR_5[3] = 0;
      FUNC_4(VAR_3,VAR_1,FUNC_1(VAR_5));
   }
   else
   {
      FUNC_7(VAR_3,FUNC_6(VAR_3),VAR_4);
   }
   return(1);
}
