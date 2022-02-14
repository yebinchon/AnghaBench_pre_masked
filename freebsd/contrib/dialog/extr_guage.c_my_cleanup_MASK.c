
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int win; } ;
struct TYPE_6__ {scalar_t__ prompt; scalar_t__ prompt_buf; scalar_t__ title; TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int DIALOG_CALLBACK ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(DIALOG_CALLBACK * VAR_0)
{
    MY_OBJ *VAR_1 = (MY_OBJ *) VAR_0;

    if (FUNC_3(VAR_1)) {
 if (VAR_1->prompt != VAR_1->prompt_buf) {
     FUNC_2(VAR_1->prompt);
     VAR_1->prompt = VAR_1->prompt_buf;
 }
 FUNC_2(VAR_1->title);
 FUNC_1(VAR_1->obj.win);
 FUNC_0(VAR_1);
    }
}
