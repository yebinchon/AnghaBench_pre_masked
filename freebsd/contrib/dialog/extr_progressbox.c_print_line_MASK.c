
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wide; int text; } ;
typedef TYPE_1__ MY_OBJ ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,char*,int,char const*) ;

__attribute__((used)) static void
FUNC_5(MY_OBJ * VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1->wide - (2 * VAR_0);
    int VAR_5 = FUNC_0((int) FUNC_1(VAR_2), VAR_4 - 2);

    (void) FUNC_3(VAR_1->text, VAR_3, 0);
    FUNC_4(VAR_1->text, " %.*s", VAR_5, VAR_2);
    FUNC_2(VAR_1->text);
}
