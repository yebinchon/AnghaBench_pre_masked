
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct ttm_lock*,int*) ;
 int FUNC_2 (struct ttm_lock*,int *,int,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ttm_lock *VAR_5, bool VAR_6)
{
 const char *VAR_7;
 int VAR_8, VAR_9;
 bool VAR_10;

 VAR_9 = 0;
 if (VAR_6) {
  VAR_8 = VAR_4;
  VAR_7 = "ttmrti";
 } else {
  VAR_8 = 0;
  VAR_7 = "ttmrt";
 }
 FUNC_3(&VAR_5->lock);
 while (!FUNC_1(VAR_5, &VAR_10)) {
  VAR_9 = -FUNC_2(VAR_5, &VAR_5->lock, VAR_8, VAR_7, 0);
  if (VAR_9 == -VAR_1 || VAR_9 == -VAR_2)
   VAR_9 = -VAR_3;
  if (VAR_9 != 0)
   break;
 }
 FUNC_0(!VAR_10 || VAR_9 == 0);
 FUNC_4(&VAR_5->lock);

 return (VAR_10) ? 0 : -VAR_0;
}
