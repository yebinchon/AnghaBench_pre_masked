
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ NumAiop; scalar_t__* AiopID; int* AiopNumChan; int CtlID; } ;
typedef TYPE_1__ CONTROLLER_t ;
typedef int Byte_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5( CONTROLLER_t *VAR_6,
      int VAR_7,
      int VAR_8,
      Byte_t VAR_9,
      int VAR_10,
      int VAR_11)
{
 int VAR_12;

 VAR_6->CtlID = VAR_2;

 FUNC_2(VAR_6);


 VAR_6->NumAiop = 0;
 for(VAR_12=0; VAR_12 < VAR_7; VAR_12++)
 {

  VAR_6->AiopID[VAR_12] = FUNC_3(VAR_6, VAR_12);

  if(VAR_6->AiopID[VAR_12] == VAR_0)
  {
   break;
  }

  switch( VAR_11 ) {
  case 132:
  case 134:
  case 133:
         VAR_6->AiopNumChan[VAR_12] = 4;
   break;
  case 131:
         VAR_6->AiopNumChan[VAR_12] = 6;
   break;
  case 128:
  case 129:
  case 130:
  case 136:
  case 135:
         VAR_6->AiopNumChan[VAR_12] = 8;
   break;
  default:



         VAR_6->AiopNumChan[VAR_12] = FUNC_4(VAR_6, VAR_12);

   break;
  }

  FUNC_1(VAR_6, VAR_12, VAR_4,VAR_3);

  FUNC_0(VAR_6, VAR_12, VAR_5,VAR_1);

  VAR_6->NumAiop++;
 }

 if(VAR_6->NumAiop == 0)
  return(-1);
 else
  return(VAR_6->NumAiop);
}
