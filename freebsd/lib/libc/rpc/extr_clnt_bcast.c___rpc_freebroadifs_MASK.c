
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct broadif {int dummy; } ;
typedef int broadlist_t ;


 struct broadif* FUNC_0 (int *) ;
 struct broadif* FUNC_1 (struct broadif*,int ) ;
 int FUNC_2 (struct broadif*) ;
 int VAR_0 ;

void
FUNC_3(broadlist_t *VAR_1)
{
 struct broadif *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
}
