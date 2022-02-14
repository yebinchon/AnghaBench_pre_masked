
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int efi_guid_t ;
struct TYPE_3__ {int name; int guid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char**) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

int
FUNC_5(efi_guid_t *VAR_1, char **VAR_2)
{
 size_t VAR_3;
 uint32_t VAR_4;

 FUNC_0();
 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_0); VAR_3++) {
  if (FUNC_4(VAR_1, &VAR_0[VAR_3].guid, &VAR_4)) {
   *VAR_2 = FUNC_3(VAR_0[VAR_3].name);
   return (0);
  }
 }
 return (FUNC_1(VAR_1, VAR_2));
}
