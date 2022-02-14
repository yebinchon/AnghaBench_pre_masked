
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ no_tags; } ;
struct TYPE_4__ {int name; int text; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(DIALOG_LISTITEM * VAR_3, int VAR_4)
{
    bool VAR_5 = VAR_0;

    if (FUNC_1(FUNC_0(),
         (VAR_2.no_tags
   ? VAR_3[VAR_4].text
   : VAR_3[VAR_4].name))) {
 VAR_5 = VAR_1;
    }
    return VAR_5;
}
