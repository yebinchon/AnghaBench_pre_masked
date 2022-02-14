
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_4__ {int pStack; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(FICL_VM *VAR_2)
{
    struct stat VAR_3;
    FICL_INT VAR_4;
    int VAR_5;





    VAR_5 = FUNC_2(VAR_2->pStack);
    VAR_4 = VAR_0;
    do {
        if (VAR_5 < 0)
            break;
        if (FUNC_1(VAR_5, &VAR_3) < 0)
            break;
        if (!FUNC_0(VAR_3.st_mode))
            break;
        VAR_4 = VAR_1;
    } while (0);
    FUNC_3(VAR_2->pStack, VAR_4);
}
