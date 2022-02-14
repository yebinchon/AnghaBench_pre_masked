
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int Filename; } ;
struct TYPE_10__ {char* String; } ;
struct TYPE_11__ {TYPE_1__ Value; } ;
struct TYPE_13__ {TYPE_2__ Asl; } ;
struct TYPE_12__ {char* Dir; struct TYPE_12__* Next; } ;
typedef int FILE ;
typedef TYPE_3__ ASL_INCLUDE_DIR ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,TYPE_4__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 () ;
 int * FUNC_3 (char*,TYPE_4__*,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_13 ;
 int FUNC_5 (int ,char*,char*,char*) ;
 char* FUNC_6 (int ) ;

void
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_14)
{
    FILE *VAR_15;
    ASL_INCLUDE_DIR *VAR_16;




    if (!VAR_14)
    {
        FUNC_0 (VAR_0, VAR_3,
            VAR_5, VAR_11,
            VAR_10, VAR_4,
            VAR_8[VAR_1].Filename, " - Null parse node");

        return;
    }





    FUNC_2 ();
    FUNC_4 (VAR_2, "\n");
    VAR_6++;






    if ((VAR_14->Asl.Value.String[0] == '/') ||
        (VAR_14->Asl.Value.String[0] == '\\') ||
        (VAR_14->Asl.Value.String[1] == ':'))
    {
        VAR_15 = FUNC_3 ("", VAR_14, VAR_14->Asl.Value.String);
        if (!VAR_15)
        {
            goto ErrorExit;
        }
        return;
    }
    VAR_15 = FUNC_3 (
        VAR_7, VAR_14, VAR_14->Asl.Value.String);
    if (VAR_15)
    {
        return;
    }





    VAR_16 = VAR_9;
    while (VAR_16)
    {
        VAR_15 = FUNC_3 (
            VAR_16->Dir, VAR_14, VAR_14->Asl.Value.String);
        if (VAR_15)
        {
            return;
        }

        VAR_16 = VAR_16->Next;
    }



ErrorExit:
    FUNC_5 (VAR_12, "%s, %s", VAR_14->Asl.Value.String, FUNC_6 (VAR_13));
    FUNC_1 (VAR_0, VAR_3, VAR_14, VAR_12);
}
