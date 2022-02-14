
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * data; scalar_t__ length; } ;
struct TYPE_6__ {TYPE_1__ keyvalue; } ;
struct TYPE_7__ {TYPE_2__ key; int * salt; int * mkvno; } ;
typedef TYPE_3__ Key ;



void
FUNC_0 (Key *VAR_0, int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
 VAR_0[VAR_2].mkvno = ((void*)0);
 VAR_0[VAR_2].salt = ((void*)0);
 VAR_0[VAR_2].key.keyvalue.length = 0;
 VAR_0[VAR_2].key.keyvalue.data = ((void*)0);
    }
}
