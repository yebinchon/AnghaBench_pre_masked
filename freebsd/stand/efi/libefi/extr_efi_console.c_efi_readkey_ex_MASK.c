
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ (* ReadKeyStrokeEx ) (TYPE_4__*,TYPE_2__*) ;} ;
struct TYPE_10__ {char UnicodeChar; } ;
struct TYPE_8__ {int KeyShiftState; } ;
struct TYPE_9__ {TYPE_3__ Key; TYPE_1__ KeyState; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_2__ EFI_KEY_DATA ;
typedef TYPE_3__ EFI_INPUT_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(void)
{
 EFI_STATUS VAR_5;
 EFI_INPUT_KEY *VAR_6;
 EFI_KEY_DATA VAR_7;
 uint32_t VAR_8;

 VAR_5 = VAR_4->ReadKeyStrokeEx(VAR_4, &VAR_7);
 if (VAR_5 == VAR_3) {
  VAR_8 = VAR_7.KeyState.KeyShiftState;
  VAR_6 = &VAR_7.Key;
  if (VAR_8 & VAR_2) {





   if (VAR_8 & VAR_1 ||
       VAR_8 & VAR_0) {
    if (VAR_6->UnicodeChar >= 'a' &&
        VAR_6->UnicodeChar <= 'z') {
     VAR_6->UnicodeChar -= 'a';
     VAR_6->UnicodeChar++;
    }
   }
  }

  FUNC_0(VAR_6);
  return (1);
 }
 return (0);
}
