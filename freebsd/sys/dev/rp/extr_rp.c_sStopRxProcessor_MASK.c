
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* R; } ;
typedef TYPE_1__ CHANNEL_T ;
typedef int Byte_t ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

void FUNC_2(CHANNEL_T *VAR_1)
{
   Byte_t VAR_2[4];

   VAR_2[0] = VAR_1->R[0];
   VAR_2[1] = VAR_1->R[1];
   VAR_2[2] = 0x0a;
   VAR_2[3] = VAR_1->R[3];
   FUNC_1(VAR_1,VAR_0,FUNC_0(VAR_2));
}
