
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long gen; scalar_t__ num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ,int *,int *) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(int VAR_7)
{
 int VAR_8, VAR_9;

 if (!FUNC_2())
  return (VAR_0);

 VAR_8 = FUNC_0();
 if (VAR_8)
  return (VAR_8);

 VAR_6 &= VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {






  VAR_3[VAR_9].gen = ~0UL;
  VAR_3[VAR_9].num = VAR_4 - 1;
 }

 FUNC_3();
 FUNC_4(VAR_7);


 FUNC_1(((void*)0), VAR_5, ((void*)0), ((void*)0));

 return (0);
}
