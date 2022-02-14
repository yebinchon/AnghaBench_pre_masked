
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * CvParentFilename; int * CvFilename; int * CloseBraceComment; int * EndBlkComment; int * CommentList; int * NameComment; int * EndNodeComment; int * InlineComment; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;



void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_0)
{

    VAR_0->Common.InlineComment = ((void*)0);
    VAR_0->Common.EndNodeComment = ((void*)0);
    VAR_0->Common.NameComment = ((void*)0);
    VAR_0->Common.CommentList = ((void*)0);
    VAR_0->Common.EndBlkComment = ((void*)0);
    VAR_0->Common.CloseBraceComment = ((void*)0);
    VAR_0->Common.CvFilename = ((void*)0);
    VAR_0->Common.CvParentFilename = ((void*)0);
}
