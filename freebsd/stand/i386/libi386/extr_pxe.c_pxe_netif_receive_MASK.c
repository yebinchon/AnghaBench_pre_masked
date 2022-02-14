
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int offset; scalar_t__ segment; } ;
struct TYPE_8__ {scalar_t__ FuncFlag; scalar_t__ Status; size_t FrameLength; scalar_t__ BufferLength; TYPE_1__ Frame; } ;
typedef TYPE_2__ t_PXENV_UNDI_ISR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(void **VAR_8)
{
 t_PXENV_UNDI_ISR *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;

 VAR_9 = FUNC_2(sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (-1);

 FUNC_4(VAR_9, sizeof(*VAR_9));
 VAR_9->FuncFlag = VAR_4;
 FUNC_7(VAR_1, VAR_9);
 if (VAR_9->Status != 0) {
  FUNC_3(VAR_9, sizeof(*VAR_9));
  return (-1);
 }

 FUNC_4(VAR_9, sizeof(*VAR_9));
 VAR_9->FuncFlag = VAR_3;
 FUNC_7(VAR_1, VAR_9);
 if (VAR_9->Status != 0) {
  FUNC_3(VAR_9, sizeof(*VAR_9));
  return (-1);
 }

 while (VAR_9->FuncFlag == VAR_7) {



  FUNC_4(VAR_9, sizeof(*VAR_9));
  VAR_9->FuncFlag = VAR_2;
  FUNC_7(VAR_1, VAR_9);
  if (VAR_9->Status != 0 ||
      VAR_9->FuncFlag == VAR_5) {
   FUNC_3(VAR_9, sizeof(*VAR_9));
   return (-1);
  }
 }

 while (VAR_9->FuncFlag != VAR_6) {
  if (VAR_9->Status != 0 ||
      VAR_9->FuncFlag == VAR_5) {
   FUNC_3(VAR_9, sizeof(*VAR_9));
   return (-1);
  }
  FUNC_4(VAR_9, sizeof(*VAR_9));
  VAR_9->FuncFlag = VAR_2;
  FUNC_7(VAR_1, VAR_9);
 }

 VAR_13 = VAR_9->FrameLength;
 VAR_10 = FUNC_6(VAR_13 + VAR_0);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_9, sizeof(*VAR_9));
  return (-1);
 }
 VAR_11 = VAR_10 + VAR_0;
 VAR_14 = 0;

 while (VAR_14 < VAR_13) {
  VAR_12 = (char *)((uintptr_t)VAR_9->Frame.segment << 4);
  VAR_12 += VAR_9->Frame.offset;
  FUNC_1(FUNC_0(VAR_12), VAR_11, VAR_9->BufferLength);
  VAR_11 += VAR_9->BufferLength;
  VAR_14 += VAR_9->BufferLength;

  FUNC_4(VAR_9, sizeof(*VAR_9));
  VAR_9->FuncFlag = VAR_2;
  FUNC_7(VAR_1, VAR_9);
  if (VAR_9->Status != 0) {
   FUNC_3(VAR_9, sizeof(*VAR_9));
   FUNC_5(VAR_10);
   return (-1);
  }


  if (VAR_9->FuncFlag == VAR_6)
   continue;
  break;
 }

 *VAR_8 = VAR_10;
 FUNC_3(VAR_9, sizeof(*VAR_9));
 return (VAR_14);
}
