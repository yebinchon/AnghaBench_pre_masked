
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int text; scalar_t__ end_reached; scalar_t__ page_length; } ;
typedef TYPE_1__ MY_OBJ ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(MY_OBJ * VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0;

    VAR_0->page_length = 0;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 FUNC_1(VAR_0, VAR_3, VAR_2);
 if (!VAR_4)
     VAR_0->page_length++;
 if (VAR_0->end_reached && !VAR_4)
     VAR_4 = 1;
    }
    (void) FUNC_2(VAR_0->text);
    FUNC_0(VAR_0->text);
}
