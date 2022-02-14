
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; int * buf; } ;
typedef TYPE_1__ CStr ;


 int FUNC_0 (int,int,char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    int VAR_2, VAR_3;
    CStr VAR_4;
    VAR_4.buf = ((void*)0);
    VAR_4.len = 0;


    FUNC_4("%s", FUNC_0(20, 6, "Standard key bindings\n"));
    VAR_2 = 0;
    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
 if (VAR_1[VAR_2] == VAR_1[VAR_3])
     continue;
 FUNC_3(VAR_1, VAR_2, VAR_3 - 1);
 VAR_2 = VAR_3;
    }
    FUNC_3(VAR_1, VAR_2, VAR_3 - 1);

    FUNC_4("%s", FUNC_0(20, 7, "Alternative key bindings\n"));
    VAR_2 = 0;
    for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
 if (VAR_0[VAR_2] == VAR_0[VAR_3])
     continue;
 FUNC_3(VAR_0, VAR_2, VAR_3 - 1);
 VAR_2 = VAR_3;
    }
    FUNC_3(VAR_0, VAR_2, VAR_3 - 1);
    FUNC_4("%s", FUNC_0(20, 8, "Multi-character bindings\n"));
    FUNC_2(((void*)0));
    FUNC_4("%s", FUNC_0(20, 9, "Arrow key bindings\n"));
    FUNC_1(&VAR_4);
}
