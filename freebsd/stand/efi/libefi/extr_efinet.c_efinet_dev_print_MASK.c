
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* dv_name; } ;
typedef int * EFI_HANDLE ;
typedef char CHAR16 ;


 char* FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_1)
{
 CHAR16 *VAR_2;
 EFI_HANDLE VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_5("%s devices:", VAR_0.dv_name);
 if ((VAR_5 = FUNC_4("\n")) != 0)
  return (VAR_5);

 for (VAR_4 = 0, VAR_3 = FUNC_1(&VAR_0, 0);
     VAR_3 != ((void*)0); VAR_3 = FUNC_1(&VAR_0, ++VAR_4)) {
  FUNC_5("    %s%d:", VAR_0.dv_name, VAR_4);
  if (VAR_1) {
   VAR_2 = FUNC_0(FUNC_3(VAR_3));
   if (VAR_2 != ((void*)0)) {
    FUNC_5("    %S", VAR_2);
    FUNC_2(VAR_2);
   }
  }
  if ((VAR_5 = FUNC_4("\n")) != 0)
   break;
 }
 return (VAR_5);
}
