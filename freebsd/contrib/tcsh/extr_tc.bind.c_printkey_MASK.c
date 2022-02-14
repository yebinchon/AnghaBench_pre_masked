
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uChar ;
struct KeyFuncs {scalar_t__ const func; int name; } ;
struct TYPE_5__ {int len; scalar_t__* buf; } ;
typedef scalar_t__ KEYCMD ;
typedef TYPE_1__ CStr ;


 struct KeyFuncs* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_5(const KEYCMD *VAR_3, CStr *VAR_4)
{
    struct KeyFuncs *VAR_5;

    if (VAR_4->len < 2) {
 unsigned char *VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_1);
 FUNC_1(VAR_6, VAR_2);
 for (VAR_5 = VAR_0; VAR_5->name; VAR_5++) {
     if (VAR_5->func == VAR_3[(uChar) *(VAR_4->buf)]) {
  FUNC_4("%s\t->\t%s\n", VAR_6, VAR_5->name);
     }
 }
 FUNC_2(VAR_6);
    }
    else
 FUNC_0(VAR_4);
}
