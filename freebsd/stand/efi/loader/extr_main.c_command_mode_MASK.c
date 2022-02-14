
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINTN ;
struct TYPE_9__ {TYPE_2__* ConOut; } ;
struct TYPE_8__ {int (* QueryMode ) (TYPE_2__*,int,scalar_t__*,scalar_t__*) ;TYPE_1__* Mode; int (* SetMode ) (TYPE_2__*,unsigned int) ;} ;
struct TYPE_7__ {int Mode; int MaxMode; } ;
typedef TYPE_2__ SIMPLE_TEXT_OUTPUT_INTERFACE ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_6__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 unsigned int FUNC_3 (char*,char**,int ) ;
 int FUNC_4 (TYPE_2__*,unsigned int,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, char *VAR_4[])
{
 UINTN VAR_5, VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 char *VAR_9;
 EFI_STATUS VAR_10;
 SIMPLE_TEXT_OUTPUT_INTERFACE *VAR_11;

 VAR_11 = VAR_2->ConOut;

 if (VAR_3 > 1) {
  VAR_7 = FUNC_3(VAR_4[1], &VAR_9, 0);
  if (VAR_9[0] != '\0') {
   FUNC_2("Invalid mode\n");
   return (VAR_0);
  }
  VAR_10 = VAR_11->QueryMode(VAR_11, VAR_7, &VAR_5, &VAR_6);
  if (FUNC_0(VAR_10)) {
   FUNC_2("invalid mode %d\n", VAR_7);
   return (VAR_0);
  }
  VAR_10 = VAR_11->SetMode(VAR_11, VAR_7);
  if (FUNC_0(VAR_10)) {
   FUNC_2("couldn't set mode %d\n", VAR_7);
   return (VAR_0);
  }
  (void) FUNC_1();
  return (VAR_1);
 }

 FUNC_2("Current mode: %d\n", VAR_11->Mode->Mode);
 for (VAR_8 = 0; VAR_8 <= VAR_11->Mode->MaxMode; VAR_8++) {
  VAR_10 = VAR_11->QueryMode(VAR_11, VAR_8, &VAR_5, &VAR_6);
  if (FUNC_0(VAR_10))
   continue;
  FUNC_2("Mode %d: %u columns, %u rows\n", VAR_8, (unsigned)VAR_5,
      (unsigned)VAR_6);
 }

 if (VAR_8 != 0)
  FUNC_2("Select a mode with the command \"mode <number>\"\n");

 return (VAR_1);
}
