
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_file {int dummy; } ;
struct ttm_lock {struct ttm_object_file* vt_holder; int base; int flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (struct ttm_lock*) ;
 int FUNC_2 (struct ttm_lock*,int *,int,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_object_file*,int *,int,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct ttm_lock*) ;

int FUNC_6(struct ttm_lock *VAR_7,
  bool VAR_8,
  struct ttm_object_file *VAR_9)
{
 const char *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = 0;
 if (VAR_8) {
  VAR_11 = VAR_3;
  VAR_10 = "ttmwi";
 } else {
  VAR_11 = 0;
  VAR_10 = "ttmw";
 }
 FUNC_3(&VAR_7->lock);
 while (!FUNC_0(VAR_7)) {
  VAR_12 = -FUNC_2(VAR_7, &VAR_7->lock, VAR_11, VAR_10, 0);
  if (VAR_12 == -VAR_0 || VAR_12 == -VAR_1)
   VAR_12 = -VAR_2;
  if (VAR_8 && VAR_12 != 0) {
   VAR_7->flags &= ~VAR_4;
   FUNC_5(VAR_7);
   break;
  }
 }







 VAR_12 = FUNC_4(VAR_9, &VAR_7->base, 0,
       VAR_5, &VAR_6, ((void*)0));
 if (VAR_12)
  (void)FUNC_1(VAR_7);
 else
  VAR_7->vt_holder = VAR_9;

 return (VAR_12);
}
