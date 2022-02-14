
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tag; } ;
struct TYPE_3__ {scalar_t__ tag; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__** VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{
    int VAR_6;

    if (!VAR_0 && VAR_5[VAR_3]->tag)
    {
 if (VAR_4[VAR_2 - 1])
 {
     for (VAR_6 = VAR_2 - 1; (VAR_6 > 0) && VAR_4[VAR_6]; --VAR_6)
  continue;
     if (VAR_4[VAR_6 + 1] == 0 || VAR_4[VAR_6 + 1]->tag != VAR_5[VAR_3]->tag)
  FUNC_0(VAR_5[VAR_3]->name);
 }
 else
     FUNC_0(VAR_5[VAR_3]->name);
    }

    VAR_0 = 0;
    if (VAR_2 >= VAR_1)
 FUNC_1();
    VAR_4[VAR_2] = 0;
    ++VAR_2;
    ++VAR_3;
}
