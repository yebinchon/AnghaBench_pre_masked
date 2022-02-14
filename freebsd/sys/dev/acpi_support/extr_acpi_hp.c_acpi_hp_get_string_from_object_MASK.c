
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; int Pointer; } ;
struct TYPE_5__ {scalar_t__ Type; TYPE_1__ String; } ;
typedef TYPE_2__ ACPI_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static __inline char*
FUNC_2(ACPI_OBJECT* VAR_1, char* VAR_2, size_t VAR_3) {
 int VAR_4;

 VAR_2[0] = 0;
 if (VAR_1->Type == VAR_0) {
  VAR_4 = VAR_1->String.Length+1;
  if (VAR_4 > VAR_3) {
   VAR_4 = VAR_3 - 1;
  }
  FUNC_1(VAR_2, VAR_1->String.Pointer, VAR_4);
  FUNC_0(VAR_2);
 }

 return (VAR_2);
}
