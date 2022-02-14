
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_4__ {int * input; } ;
struct TYPE_5__ {scalar_t__ last_pos; TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int FILE ;
typedef int DIALOG_CALLBACK ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(DIALOG_CALLBACK * VAR_1)
{
    MY_OBJ *VAR_2 = (MY_OBJ *) VAR_1;
    FILE *VAR_3 = VAR_2->obj.input;
    struct stat VAR_4;

    if (FUNC_1(FUNC_0(VAR_3), &VAR_4) == 0
 && VAR_4.st_size != VAR_2->last_pos) {
 FUNC_2(VAR_2);
    }

    return VAR_0;
}
