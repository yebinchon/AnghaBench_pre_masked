
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int va_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(int VAR_4)
{
    int VAR_5;

    FUNC_1();
    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
 if (!FUNC_2(&VAR_2[VAR_5]))
     continue;
 VAR_2[VAR_5].va_flags |= VAR_0;
 if (!FUNC_0(&VAR_2[VAR_5])) {
     if (FUNC_5(&VAR_2[VAR_5]) < 0)
  continue;
     VAR_2[VAR_5].va_flags |= VAR_1;
 }
    }
    if (&FUNC_4 != ((void*)0))
 FUNC_4)(VAR_4);

    return VAR_3;
}
