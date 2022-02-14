
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_18__ {int* io_rid; scalar_t__ NumAiop; scalar_t__* AiopID; int * AiopNumChan; int ** io; int dev; int CtlID; } ;
struct TYPE_17__ {int MBaseIO; int MReg0IO; int MReg1IO; int MReg2IO; int MReg3IO; int MReg2; int MReg3; } ;
typedef TYPE_1__ CONTROLLER_T ;
typedef int Byte_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_15__* FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 int FUNC_4 (TYPE_1__*,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,size_t,int,int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int) ;
 scalar_t__* VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_12( CONTROLLER_T *VAR_11,
   CONTROLLER_T *VAR_12,
   int VAR_13,
   int VAR_14,
   Byte_t VAR_15,
   int VAR_16)
{
 int VAR_17;
 int VAR_18, VAR_19, VAR_20;

 VAR_11->CtlID = VAR_2;

 FUNC_0(VAR_11)->MBaseIO = VAR_9;
 if (VAR_12->io[FUNC_0(VAR_11)->MBaseIO] != ((void*)0)) {
  FUNC_0(VAR_11)->MReg0IO = 0x40 + 0;
  FUNC_0(VAR_11)->MReg1IO = 0x40 + 1;
  FUNC_0(VAR_11)->MReg2IO = 0x40 + 2;
  FUNC_0(VAR_11)->MReg3IO = 0x40 + 3;
 } else {
  VAR_12->io_rid[FUNC_0(VAR_11)->MBaseIO] = FUNC_0(VAR_11)->MBaseIO;
  VAR_18 = FUNC_3(VAR_12->io[0]) + 0x40 + 0x400 * VAR_9;
  VAR_12->io[FUNC_0(VAR_11)->MBaseIO] = FUNC_1(VAR_12->dev, VAR_5, &VAR_11->io_rid[FUNC_0(VAR_11)->MBaseIO], VAR_18, VAR_18 + 3, 4, VAR_4);
  FUNC_0(VAR_11)->MReg0IO = 0;
  FUNC_0(VAR_11)->MReg1IO = 1;
  FUNC_0(VAR_11)->MReg2IO = 2;
  FUNC_0(VAR_11)->MReg3IO = 3;
 }

 FUNC_0(VAR_11)->MReg2 = 0;
 FUNC_0(VAR_11)->MReg3 = 0;
 FUNC_6(VAR_12,FUNC_0(VAR_11)->MBaseIO,FUNC_0(VAR_11)->MReg2IO,FUNC_0(VAR_11)->MReg2);
 FUNC_6(VAR_12,FUNC_0(VAR_11)->MBaseIO,FUNC_0(VAR_11)->MReg3IO,FUNC_0(VAR_11)->MReg3);
 FUNC_7(VAR_12,VAR_11);


 VAR_11->NumAiop = 0;
 for(VAR_17=0; VAR_17 < VAR_13; VAR_17++)
 {
  if (VAR_11->io[VAR_17] == ((void*)0)) {
   VAR_11->io_rid[VAR_17] = VAR_17;
   VAR_19 = FUNC_3(VAR_11->io[0]) + 0x400 * VAR_17;
   if (VAR_9 == 0)
    VAR_20 = 0x44;
   else
    VAR_20 = 0x40;
   VAR_11->io[VAR_17] = FUNC_1(VAR_11->dev, VAR_5, &VAR_11->io_rid[VAR_17], VAR_19, VAR_19 + VAR_20 - 1, VAR_20, VAR_4);
  } else
   VAR_19 = FUNC_3(VAR_11->io[VAR_17]);
  FUNC_6(VAR_12,FUNC_0(VAR_11)->MBaseIO,
       FUNC_0(VAR_11)->MReg2IO,
       FUNC_0(VAR_11)->MReg2 | (VAR_17 & 0x03));
  FUNC_6(VAR_12,FUNC_0(VAR_11)->MBaseIO,
       FUNC_0(VAR_11)->MReg0IO,
       (Byte_t)(VAR_19 >> 6));
  FUNC_9(VAR_12,VAR_11,VAR_17);

  VAR_11->AiopID[VAR_17] = FUNC_10(VAR_11, VAR_17);
  if(VAR_11->AiopID[VAR_17] == VAR_0)
  {
   FUNC_8(VAR_12,VAR_11,VAR_17);
   FUNC_2(VAR_11->dev, VAR_5, VAR_11->io_rid[VAR_17], VAR_11->io[VAR_17]);
   VAR_11->io[VAR_17] = ((void*)0);
   break;
  }

  VAR_11->AiopNumChan[VAR_17] = FUNC_11(VAR_11, VAR_17);
  FUNC_5(VAR_11,VAR_17,VAR_7,VAR_6);
  FUNC_4(VAR_11,VAR_17,VAR_8,VAR_1);
  VAR_11->NumAiop++;
  FUNC_8(VAR_12,VAR_11,VAR_17);
 }

 if(VAR_11->NumAiop == 0)
  return(-1);
 else
  return(VAR_11->NumAiop);
}
