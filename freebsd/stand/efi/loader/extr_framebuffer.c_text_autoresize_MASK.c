
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINTN ;
struct TYPE_8__ {TYPE_2__* ConOut; } ;
struct TYPE_7__ {int (* SetMode ) (TYPE_2__*,scalar_t__) ;int (* QueryMode ) (TYPE_2__*,scalar_t__,scalar_t__*,scalar_t__*) ;TYPE_1__* Mode; } ;
struct TYPE_6__ {scalar_t__ MaxMode; } ;
typedef TYPE_2__ SIMPLE_TEXT_OUTPUT_INTERFACE ;
typedef int EFI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3()
{
 SIMPLE_TEXT_OUTPUT_INTERFACE *VAR_2;
 EFI_STATUS VAR_3;
 UINTN VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_2 = VAR_1->ConOut;
 VAR_5 = VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_2->Mode->MaxMode; VAR_4++) {
  VAR_3 = VAR_2->QueryMode(VAR_2, VAR_4, &VAR_7, &VAR_8);
  if (FUNC_0(VAR_3))
   continue;
  if (VAR_7 * VAR_8 > VAR_5) {
   VAR_5 = VAR_7 * VAR_8;
   VAR_6 = VAR_4;
  }
 }
 if (VAR_5 > 0)
  VAR_2->SetMode(VAR_2, VAR_6);
 return (VAR_0);
}
