
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {char* name; } ;


 TYPE_3__** VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2() {
    for (size_t VAR_4 = 0; VAR_2[VAR_4] != ((void*)0); ++VAR_4)
        if (FUNC_1(VAR_2[VAR_4]->name)) {
            FUNC_0(VAR_3, "method name %s is bad\n", VAR_2[VAR_4]->name);
            return 1;
        }
    for (size_t VAR_5 = 0; VAR_1[VAR_5] != ((void*)0); ++VAR_5)
        if (FUNC_1(VAR_1[VAR_5]->name)) {
            FUNC_0(VAR_3, "data name %s is bad\n", VAR_1[VAR_5]->name);
            return 1;
        }
    for (size_t VAR_6 = 0; VAR_0[VAR_6] != ((void*)0); ++VAR_6)
        if (FUNC_1(VAR_0[VAR_6]->name)) {
            FUNC_0(VAR_3, "config name %s is bad\n", VAR_0[VAR_6]->name);
            return 1;
        }
    return 0;
}
