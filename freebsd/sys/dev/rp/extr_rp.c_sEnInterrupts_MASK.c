
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Word_t ;
struct TYPE_6__ {int* RxControl; int* TxControl; size_t ChanNum; } ;
typedef TYPE_1__ CHANNEL_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int* VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

void FUNC_4(CHANNEL_T *VAR_8,Word_t VAR_9)
{
   Byte_t VAR_10;

   VAR_8->RxControl[2] |=
      ((Byte_t)VAR_9 & (VAR_2 | VAR_3 | VAR_1));

   FUNC_3(VAR_8,VAR_5,FUNC_0(VAR_8->RxControl));

   VAR_8->TxControl[2] |= ((Byte_t)VAR_9 & VAR_4);

   FUNC_3(VAR_8,VAR_5,FUNC_0(VAR_8->TxControl));

   if(VAR_9 & VAR_0)
   {
      VAR_10 = FUNC_1(VAR_8,VAR_6) | VAR_7[VAR_8->ChanNum];
      FUNC_2(VAR_8,VAR_6,VAR_10);
   }
}
