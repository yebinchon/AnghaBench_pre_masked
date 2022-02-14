
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_watch {scalar_t__ wd; } ;
struct inotify_handle {scalar_t__ last_wd; int idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct inotify_watch*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct inotify_handle *VAR_3,
     struct inotify_watch *VAR_4)
{
 int VAR_5;

 do {
  if (FUNC_3(!FUNC_1(&VAR_3->idr, VAR_2)))
   return -VAR_1;
  VAR_5 = FUNC_0(&VAR_3->idr, VAR_4, VAR_3->last_wd+1, &VAR_4->wd);
 } while (VAR_5 == -VAR_0);

 if (FUNC_2(!VAR_5))
  VAR_3->last_wd = VAR_4->wd;

 return VAR_5;
}
