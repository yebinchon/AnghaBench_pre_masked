
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (struct ttm_lock*,int *,int,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_lock*) ;

int
FUNC_5(struct ttm_lock *VAR_5, bool VAR_6)
{
 const char *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 if (VAR_6) {
  VAR_8 = VAR_3;
  VAR_7 = "ttmwi";
 } else {
  VAR_8 = 0;
  VAR_7 = "ttmw";
 }
 FUNC_2(&VAR_5->lock);

 while (!FUNC_0(VAR_5)) {
  VAR_9 = -FUNC_1(VAR_5, &VAR_5->lock, VAR_8, VAR_7, 0);
  if (VAR_9 == -VAR_0 || VAR_9 == -VAR_1)
   VAR_9 = -VAR_2;
  if (VAR_6 && VAR_9 != 0) {
   VAR_5->flags &= ~VAR_4;
   FUNC_4(VAR_5);
   break;
  }
 }
 FUNC_3(&VAR_5->lock);

 return (VAR_9);
}
