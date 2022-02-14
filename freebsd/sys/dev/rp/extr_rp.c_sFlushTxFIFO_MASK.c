
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int* TxControl; int TxFIFOPtrs; } ;
typedef TYPE_1__ CHANNEL_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(CHANNEL_T *VAR_8)
{
   int VAR_9;
   Byte_t VAR_10;
   int VAR_11;

   if(FUNC_6(VAR_8) == 0)
      return;

   VAR_11 = VAR_0;
   if(VAR_8->TxControl[3] & VAR_3)
   {
      VAR_11 = VAR_2;
      FUNC_3(VAR_8);
   }
   FUNC_8(VAR_8);
   for(VAR_9 = 0; VAR_9 < 4000/200; VAR_9++)
      FUNC_0(VAR_8,VAR_7);
   VAR_10 = (Byte_t)FUNC_5(VAR_8);
   FUNC_1(VAR_8,VAR_4,VAR_10 | VAR_1);
   FUNC_1(VAR_8,VAR_4,VAR_10);
   FUNC_2(VAR_8,VAR_5,VAR_8->TxFIFOPtrs);
   FUNC_2(VAR_8,VAR_6,0);
   if(VAR_11)
      FUNC_4(VAR_8);
   FUNC_7(VAR_8);
}
