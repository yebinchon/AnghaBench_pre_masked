
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XML_Char ;
struct TYPE_7__ {size_t count; size_t max_count; TYPE_1__* entries; } ;
struct TYPE_6__ {int data0; int data1; int data2; int str; } ;
typedef TYPE_1__ StructDataEntry ;
typedef TYPE_2__ StructData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int const*) ;

void
FUNC_3(StructData *VAR_1,
                   const XML_Char *VAR_2,
                   int VAR_3,
                   int VAR_4,
                   int VAR_5)
{
    StructDataEntry *VAR_6;

    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));
    if (VAR_1->count == VAR_1->max_count) {
        StructDataEntry *VAR_7;

        VAR_1->max_count += VAR_0;
        VAR_7 = FUNC_1(VAR_1->entries,
                      VAR_1->max_count * sizeof(StructDataEntry));
        FUNC_0(VAR_7 != ((void*)0));
        VAR_1->entries = VAR_7;
    }

    VAR_6 = &VAR_1->entries[VAR_1->count];
    VAR_6->str = FUNC_2(VAR_2);
    VAR_6->data0 = VAR_3;
    VAR_6->data1 = VAR_4;
    VAR_6->data2 = VAR_5;
    VAR_1->count++;
}
