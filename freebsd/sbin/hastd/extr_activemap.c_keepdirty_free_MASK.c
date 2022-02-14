
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keepdirty {int dummy; } ;
struct activemap {scalar_t__ am_nkeepdirty; int am_keepdirty; } ;


 int FUNC_0 (int) ;
 struct keepdirty* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct keepdirty*,int ) ;
 int FUNC_3 (struct keepdirty*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct activemap *VAR_1)
{
 struct keepdirty *VAR_2;

 while ((VAR_2 = FUNC_1(&VAR_1->am_keepdirty)) != ((void*)0)) {
  FUNC_2(&VAR_1->am_keepdirty, VAR_2, VAR_0);
  VAR_1->am_nkeepdirty--;
  FUNC_3(VAR_2);
 }
 FUNC_0(VAR_1->am_nkeepdirty == 0);
}
