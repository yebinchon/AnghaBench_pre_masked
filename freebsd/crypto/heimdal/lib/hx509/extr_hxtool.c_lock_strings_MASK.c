
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_lock ;
struct TYPE_3__ {int num_strings; int * strings; } ;
typedef TYPE_1__ getarg_strings ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(hx509_lock VAR_0, getarg_strings *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->num_strings; VAR_2++) {
 int VAR_3 = FUNC_1(VAR_0, VAR_1->strings[VAR_2]);
 if (VAR_3)
     FUNC_0(1, "hx509_lock_command_string: %s: %d",
   VAR_1->strings[VAR_2], VAR_3);
    }
}
