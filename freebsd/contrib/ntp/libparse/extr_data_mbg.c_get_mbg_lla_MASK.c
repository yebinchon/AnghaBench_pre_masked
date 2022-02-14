
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l_uf; int l_i; } ;
typedef TYPE_1__* LLA ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (unsigned char**,int ,TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_3(
 unsigned char **VAR_7,
 LLA VAR_8
 )
{
  int VAR_9;

  for (VAR_9 = VAR_3; VAR_9 <= VAR_0; VAR_9++)
    {
      if (FUNC_1(VAR_7, VAR_1, &VAR_8[VAR_9], VAR_4) != VAR_2)
 {
   FUNC_0(&VAR_8[VAR_9]);
 }
      else
 if (VAR_9 != VAR_0)
   {
     FUNC_2(&VAR_8[VAR_9].l_i, &VAR_8[VAR_9].l_uf, VAR_8[VAR_9].l_i, VAR_8[VAR_9].l_uf, VAR_6, VAR_5);
   }
    }
}
