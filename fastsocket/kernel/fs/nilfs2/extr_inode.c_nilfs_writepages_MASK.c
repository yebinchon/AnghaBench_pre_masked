
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; int range_end; int range_start; } ;
struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct address_space *VAR_1,
       struct writeback_control *VAR_2)
{
 struct inode *VAR_3 = VAR_1->host;
 int VAR_4 = 0;

 if (VAR_2->sync_mode == VAR_0)
  VAR_4 = FUNC_0(VAR_3->i_sb, VAR_3,
          VAR_2->range_start,
          VAR_2->range_end);
 return VAR_4;
}
