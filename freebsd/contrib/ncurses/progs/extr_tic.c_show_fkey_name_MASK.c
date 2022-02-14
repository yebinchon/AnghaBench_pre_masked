
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ keycode; char* name; } ;
typedef TYPE_1__ NAME_VALUE ;


 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(NAME_VALUE * VAR_1)
{
    if (VAR_1->keycode > 0) {
 FUNC_0(VAR_0, " %s", FUNC_1(VAR_1->keycode));
 FUNC_0(VAR_0, " (capability \"%s\")", VAR_1->name);
    } else {
 FUNC_0(VAR_0, " capability \"%s\"", VAR_1->name);
    }
}
