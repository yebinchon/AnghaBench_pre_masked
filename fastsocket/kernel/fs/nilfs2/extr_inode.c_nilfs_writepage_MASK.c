
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_reclaim; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_ino; int i_sb; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct writeback_control*,struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_1, struct writeback_control *VAR_2)
{
 struct inode *VAR_3 = VAR_1->mapping->host;
 int VAR_4;

 FUNC_2(VAR_2, VAR_1);
 FUNC_4(VAR_1);

 if (VAR_2->sync_mode == VAR_0) {
  VAR_4 = FUNC_0(VAR_3->i_sb);
  if (FUNC_3(VAR_4))
   return VAR_4;
 } else if (VAR_2->for_reclaim)
  FUNC_1(VAR_3->i_sb, VAR_3->i_ino);

 return 0;
}
