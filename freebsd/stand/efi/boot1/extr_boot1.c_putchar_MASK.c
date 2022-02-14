
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ConOut; } ;
struct TYPE_4__ {int (* OutputString ) (TYPE_1__*,char*) ;} ;
typedef char CHAR16 ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

void
FUNC_2(int VAR_1)
{
 CHAR16 VAR_2[2];

 if (VAR_1 == '\n') {
  VAR_2[0] = '\r';
  VAR_2[1] = 0;
  VAR_0->ConOut->OutputString(VAR_0->ConOut, VAR_2);
 }
 VAR_2[0] = VAR_1;
 VAR_2[1] = 0;
 VAR_0->ConOut->OutputString(VAR_0->ConOut, VAR_2);
}
