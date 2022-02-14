
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int* R; scalar_t__ RxFIFOPtrs; } ;
typedef TYPE_1__ CHANNEL_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

void FUNC_8(CHANNEL_T *VAR_7)
{
   int VAR_8;
   Byte_t VAR_9;
   int VAR_10;

   if(FUNC_7(VAR_7) == 0)
      return;

   VAR_10 = VAR_0;
   if(VAR_7->R[0x32] == 0x08)
   {
      VAR_10 = VAR_2;
      FUNC_3(VAR_7);
      for(VAR_8=0; VAR_8 < 2000/200; VAR_8++)
  FUNC_0(VAR_7,VAR_6);
   }
   FUNC_6(VAR_7);
   VAR_9 = (Byte_t)FUNC_5(VAR_7);
   FUNC_1(VAR_7,VAR_3,VAR_9 | VAR_1);
   FUNC_1(VAR_7,VAR_3,VAR_9);
   FUNC_2(VAR_7,VAR_4,VAR_7->RxFIFOPtrs);
   FUNC_2(VAR_7,VAR_5,0);
   FUNC_2(VAR_7,VAR_4,VAR_7->RxFIFOPtrs + 2);
   FUNC_2(VAR_7,VAR_5,0);
   if(VAR_10)
      FUNC_4(VAR_7);
}
