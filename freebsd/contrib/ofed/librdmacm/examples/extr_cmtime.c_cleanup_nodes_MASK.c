
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_3;

 FUNC_2("destroying id\n");
 FUNC_5(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_4(&VAR_2[VAR_3], VAR_0);
  if (VAR_2[VAR_3].id)
   FUNC_3(VAR_2[VAR_3].id);
  FUNC_0(&VAR_2[VAR_3], VAR_0);
 }
 FUNC_1(VAR_0);
}
