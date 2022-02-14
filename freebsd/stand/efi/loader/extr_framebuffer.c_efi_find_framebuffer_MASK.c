
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct efi_fb {int dummy; } ;
typedef int VOID ;
struct TYPE_6__ {scalar_t__ (* LocateProtocol ) (int *,int *,int **) ;} ;
struct TYPE_5__ {int Info; } ;
struct TYPE_4__ {TYPE_2__* Mode; } ;
typedef int EFI_UGA_DRAW_PROTOCOL ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_1__ EFI_GRAPHICS_OUTPUT ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efi_fb*,TYPE_2__*,int ) ;
 int FUNC_1 (struct efi_fb*,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int **) ;
 scalar_t__ FUNC_3 (int *,int *,int **) ;
 int VAR_3 ;

int
FUNC_4(struct efi_fb *VAR_4)
{
 EFI_GRAPHICS_OUTPUT *VAR_5;
 EFI_UGA_DRAW_PROTOCOL *VAR_6;
 EFI_STATUS VAR_7;

 VAR_7 = VAR_0->LocateProtocol(&VAR_2, ((void*)0), (VOID **)&VAR_5);
 if (VAR_7 == VAR_1)
  return (FUNC_0(VAR_4, VAR_5->Mode, VAR_5->Mode->Info));

 VAR_7 = VAR_0->LocateProtocol(&VAR_3, ((void*)0), (VOID **)&VAR_6);
 if (VAR_7 == VAR_1)
  return (FUNC_1(VAR_4, VAR_6));

 return (1);
}
