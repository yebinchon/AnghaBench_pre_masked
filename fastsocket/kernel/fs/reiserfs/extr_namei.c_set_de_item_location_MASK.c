
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct reiserfs_dir_entry {int de_item_num; int de_ih; int de_bh; int de_deh; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct treepath*) ;
 int FUNC_2 (struct treepath*) ;
 int FUNC_3 (struct treepath*) ;

__attribute__((used)) static inline void FUNC_4(struct reiserfs_dir_entry *VAR_0,
     struct treepath *VAR_1)
{
 VAR_0->de_bh = FUNC_3(VAR_1);
 VAR_0->de_ih = FUNC_2(VAR_1);
 VAR_0->de_deh = FUNC_0(VAR_0->de_bh, VAR_0->de_ih);
 VAR_0->de_item_num = FUNC_1(VAR_1);
}
