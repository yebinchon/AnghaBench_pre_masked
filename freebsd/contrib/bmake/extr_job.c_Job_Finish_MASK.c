
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int children; int commands; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int
FUNC_3(void)
{
    if (VAR_1 != ((void*)0) &&
 (!FUNC_2(VAR_1->commands) ||
  !FUNC_2(VAR_1->children))) {
 if (VAR_0) {
     FUNC_0("Errors reported so .END ignored");
 } else {
     FUNC_1(VAR_1);
 }
    }
    return(VAR_0);
}
