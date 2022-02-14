
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * EndBlkComment; int * CommentList; int * CloseBraceComment; int * EndNodeComment; int * InlineComment; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;

void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_7)
{

    VAR_7->Common.InlineComment = VAR_2;
    VAR_2 = ((void*)0);

    VAR_7->Common.EndNodeComment = VAR_1;
    VAR_1 = ((void*)0);

    VAR_7->Common.CloseBraceComment = VAR_0;
    VAR_0 = ((void*)0);

    VAR_7->Common.CommentList = VAR_5;
    VAR_5 = ((void*)0);
    VAR_6 = ((void*)0);

    VAR_7->Common.EndBlkComment = VAR_3;
    VAR_3 = ((void*)0);
    VAR_4 = ((void*)0);
}
