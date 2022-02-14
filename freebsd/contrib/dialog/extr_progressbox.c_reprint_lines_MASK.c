
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int text; } ;
typedef TYPE_1__ MY_OBJ ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_5(MY_OBJ * VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0->text) - (VAR_1 ? 2 : 0);
    int VAR_3 = FUNC_4(VAR_0, VAR_2);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
 FUNC_1(VAR_0, FUNC_3(VAR_0, VAR_3 - VAR_4), VAR_4);
    }
    (void) FUNC_2(VAR_0->text);
    return VAR_3;
}
