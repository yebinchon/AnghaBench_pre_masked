
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keepdirty {int kd_extent; } ;
struct activemap {scalar_t__ am_nkeepdirty; scalar_t__ am_nkeepdirty_limit; int am_keepdirty; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct keepdirty*,int ) ;
 struct keepdirty* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct keepdirty*,int ) ;
 int VAR_0 ;
 struct keepdirty* FUNC_4 (struct activemap*,int) ;
 struct keepdirty* FUNC_5 (int) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_6(struct activemap *VAR_2, int VAR_3)
{
 struct keepdirty *VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0)) {



  FUNC_3(&VAR_2->am_keepdirty, VAR_4, VAR_0);
  FUNC_1(&VAR_2->am_keepdirty, VAR_4, VAR_0);
  return (0);
 }




 if (VAR_2->am_nkeepdirty >= VAR_2->am_nkeepdirty_limit) {
  VAR_4 = FUNC_2(&VAR_2->am_keepdirty, VAR_1);
  FUNC_0(VAR_4 != ((void*)0));
  FUNC_3(&VAR_2->am_keepdirty, VAR_4, VAR_0);
  VAR_2->am_nkeepdirty--;
  FUNC_0(VAR_2->am_nkeepdirty > 0);
 }
 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_5(sizeof(*VAR_4));

 if (VAR_4 != ((void*)0)) {
  VAR_4->kd_extent = VAR_3;
  VAR_2->am_nkeepdirty++;
  FUNC_1(&VAR_2->am_keepdirty, VAR_4, VAR_0);
 }

 return (1);
}
