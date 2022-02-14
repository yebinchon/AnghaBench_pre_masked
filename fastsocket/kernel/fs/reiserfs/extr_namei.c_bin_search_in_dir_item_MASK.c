
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {int de_entry_num; struct reiserfs_de_head* de_deh; struct item_head* de_ih; } ;
struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct item_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct reiserfs_de_head*) ;

__attribute__((used)) static int FUNC_2(struct reiserfs_dir_entry *VAR_2, loff_t VAR_3)
{
 struct item_head *VAR_4 = VAR_2->de_ih;
 struct reiserfs_de_head *VAR_5 = VAR_2->de_deh;
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_6 = FUNC_0(VAR_4) - 1;

 for (VAR_8 = (VAR_6 + VAR_7) / 2; VAR_7 <= VAR_6;
      VAR_8 = (VAR_6 + VAR_7) / 2) {
  if (VAR_3 < FUNC_1(VAR_5 + VAR_8)) {
   VAR_6 = VAR_8 - 1;
   continue;
  }
  if (VAR_3 > FUNC_1(VAR_5 + VAR_8)) {
   VAR_7 = VAR_8 + 1;
   continue;
  }

  VAR_2->de_entry_num = VAR_8;
  return VAR_0;
 }

 VAR_2->de_entry_num = VAR_7;
 return VAR_1;
}
