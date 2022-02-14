
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* OutputString ) (TYPE_1__*,char*) ;int (* TestString ) (TYPE_1__*,char*) ;} ;
typedef int EFI_STATUS ;
typedef char CHAR16 ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void
FUNC_3(int VAR_1)
{
 CHAR16 VAR_2[2];
 EFI_STATUS VAR_3;

 VAR_2[0] = VAR_1;
        VAR_2[1] = 0;

 VAR_3 = VAR_0->TestString(VAR_0, VAR_2);
 if (FUNC_0(VAR_3))
  VAR_2[0] = '?';
 VAR_0->OutputString(VAR_0, VAR_2);
}
