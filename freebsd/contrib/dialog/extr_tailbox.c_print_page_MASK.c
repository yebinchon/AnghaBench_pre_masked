
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text; } ;
typedef TYPE_1__ MY_OBJ ;


 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(MY_OBJ * VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 FUNC_0(VAR_0, VAR_0->text, VAR_3, VAR_2);
    }
    (void) FUNC_1(VAR_0->text);
}
