
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_watch {int wd; int inode; int h_list; int i_list; } ;
struct inotify_handle {int idr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct inotify_watch *VAR_0,
      struct inotify_handle *VAR_1)
{
 FUNC_2(&VAR_0->i_list);
 FUNC_2(&VAR_0->h_list);

 if (!FUNC_1(VAR_0->inode))
  FUNC_3(VAR_0->inode, 0);

 FUNC_0(&VAR_1->idr, VAR_0->wd);
}
