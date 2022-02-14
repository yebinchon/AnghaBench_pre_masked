
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* pmap_t ;
struct TYPE_8__ {int pm_cookie; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9(pmap_t VAR_5)
{
 int VAR_6;

 FUNC_1(FUNC_2(VAR_2) != ((void*)0), ("no active pmap"));
 FUNC_1(VAR_5 != VAR_4, ("kernel pmap activation"));
 if (VAR_5 == FUNC_2(VAR_2))
  return (0);





 FUNC_3(VAR_2, VAR_5);
 FUNC_4(VAR_3);
 VAR_6 = FUNC_0(VAR_5->pm_cookie);
 if (VAR_6 >= 0 && VAR_6 != VAR_0)
  FUNC_6(VAR_5);

 FUNC_8(FUNC_7(VAR_5));
 if (FUNC_2(VAR_1) != 0)
  FUNC_5();
 return (1);
}
