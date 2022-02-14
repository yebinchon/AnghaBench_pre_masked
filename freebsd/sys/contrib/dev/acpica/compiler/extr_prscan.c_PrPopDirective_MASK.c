
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Name; } ;
struct TYPE_4__ {size_t Directive; int Argument; struct TYPE_4__* Next; scalar_t__ IgnoringThisCodeBlock; } ;
typedef TYPE_1__ DIRECTIVE_INFO ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ,int,char*,int,char*,int ,int ,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1 (
    void)
{
    DIRECTIVE_INFO *VAR_8;




    VAR_8 = VAR_5;
    if (!VAR_8)
    {
        return (VAR_0);
    }



    VAR_6--;
    VAR_7 = VAR_8->IgnoringThisCodeBlock;
    VAR_5 = VAR_8->Next;

    FUNC_0 (VAR_2,
        "Pr(%.4u) - [%u %s] %*s Popped [#%s %s]: IgnoreFlag now = %s\n",
        VAR_3, VAR_6,
        VAR_7 ? "I" : "E",
        VAR_6 * 4, " ",
        VAR_4[VAR_8->Directive].Name,
        VAR_8->Argument, VAR_7 ? "TRUE" : "FALSE");

    return (VAR_1);
}
