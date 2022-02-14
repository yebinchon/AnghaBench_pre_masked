
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_7__ {struct TYPE_7__* Next; } ;
typedef int DT_SUBTABLE ;
typedef int DT_FIELD ;
typedef TYPE_1__ ASL_CACHE_INFO ;
typedef int ACPI_PARSE_OBJECT ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 TYPE_1__* VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 TYPE_1__* VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 TYPE_1__* VAR_15 ;
 int * VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 TYPE_1__* VAR_20 ;
 int * VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int ,char*,scalar_t__,int,int,int) ;

void
FUNC_2 (
    void)
{
    UINT32 VAR_23;
    ASL_CACHE_INFO *VAR_24;





    VAR_23 = 0;
    while (VAR_15)
    {
        VAR_24 = VAR_15->Next;
        FUNC_0 (VAR_15);
        VAR_15 = VAR_24;
        VAR_23++;
    }

    FUNC_1 (VAR_0,
        "%u Strings (%u bytes), Buffer size: %u bytes, %u Buffers\n",
        VAR_17, VAR_18, VAR_3, VAR_23);



    VAR_18 = 0;
    VAR_17 = 0;
    VAR_16 = ((void*)0);
    VAR_14 = ((void*)0);




    VAR_23 = 0;
    while (VAR_10)
    {
        VAR_24 = VAR_10->Next;
        FUNC_0 (VAR_10);
        VAR_10 = VAR_24;
        VAR_23++;
    }

    FUNC_1 (VAR_0,
        "%u ParseOps, Buffer size: %u ops (%u bytes), %u Buffers\n",
        VAR_12, VAR_2,
        ((UINT32) sizeof (ACPI_PARSE_OBJECT) * VAR_2), VAR_23);



    VAR_12 = 0;
    VAR_11 = ((void*)0);
    VAR_9 = ((void*)0);
    VAR_13 = ((void*)0);




    VAR_23 = 0;
    while (VAR_6)
    {
        VAR_24 = VAR_6->Next;
        FUNC_0 (VAR_6);
        VAR_6 = VAR_24;
        VAR_23++;
    }

    FUNC_1 (VAR_0,
        "%u Fields, Buffer size: %u fields (%u bytes), %u Buffers\n",
        VAR_8, VAR_1,
        ((UINT32) sizeof (DT_FIELD) * VAR_1), VAR_23);



    VAR_8 = 0;
    VAR_7 = ((void*)0);
    VAR_5 = ((void*)0);




    VAR_23 = 0;
    while (VAR_20)
    {
        VAR_24 = VAR_20->Next;
        FUNC_0 (VAR_20);
        VAR_20 = VAR_24;
        VAR_23++;
    }

    FUNC_1 (VAR_0,
        "%u Subtables, Buffer size: %u subtables (%u bytes), %u Buffers\n",
        VAR_22, VAR_4,
        ((UINT32) sizeof (DT_SUBTABLE) * VAR_4), VAR_23);



    VAR_22 = 0;
    VAR_21 = ((void*)0);
    VAR_19 = ((void*)0);
}
