
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (struct ttm_lock*,int *,int,char const*,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ttm_lock *VAR_4, bool VAR_5)
{
 const char *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = 0;
 if (VAR_5) {
  VAR_7 = VAR_3;
  VAR_6 = "ttmri";
 } else {
  VAR_7 = 0;
  VAR_6 = "ttmr";
 }
 FUNC_2(&VAR_4->lock);
 while (!FUNC_0(VAR_4)) {
  VAR_8 = -FUNC_1(VAR_4, &VAR_4->lock, VAR_7, VAR_6, 0);
  if (VAR_8 == -VAR_0 || VAR_8 == -VAR_1)
   VAR_8 = -VAR_2;
  if (VAR_8 != 0)
   break;
 }
 return (VAR_8);
}
