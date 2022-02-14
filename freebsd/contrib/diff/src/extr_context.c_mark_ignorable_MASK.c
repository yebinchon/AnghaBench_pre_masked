
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {int ignore; struct change* link; } ;
typedef int lin ;


 int FUNC_0 (struct change*,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1 (struct change *VAR_0)
{
  while (VAR_0)
    {
      struct change *VAR_1 = VAR_0->link;
      lin VAR_2, VAR_3, VAR_4, VAR_5;


      VAR_0->link = 0;


      VAR_0->ignore = ! FUNC_0 (VAR_0,
           &VAR_2, &VAR_3, &VAR_4, &VAR_5);


      VAR_0->link = VAR_1;


      VAR_0 = VAR_1;
    }
}
