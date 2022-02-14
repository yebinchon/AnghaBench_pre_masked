
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct find_ivrs_hdr_args {scalar_t__ i; TYPE_1__* ptr; } ;
struct TYPE_3__ {int Type; } ;
typedef TYPE_1__ ACPI_IVRS_HEADER ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(ACPI_IVRS_HEADER * VAR_0, void *VAR_1)
{
 struct find_ivrs_hdr_args *VAR_2;

 VAR_2 = (struct find_ivrs_hdr_args *)VAR_1;
 if (FUNC_0(VAR_0->Type)) {
  if (VAR_2->i == 0) {
   VAR_2->ptr = VAR_0;
   return (0);
  }
  VAR_2->i--;
 }

 return (1);
}
