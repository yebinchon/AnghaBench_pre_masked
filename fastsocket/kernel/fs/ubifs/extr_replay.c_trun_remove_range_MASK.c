
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct replay_entry {int new_size; int old_size; int key; } ;
typedef int ino_t ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,union ubifs_key*,int ,unsigned int) ;
 int FUNC_1 (struct ubifs_info*,int *) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_1, struct replay_entry *VAR_2)
{
 unsigned VAR_3, VAR_4;
 union ubifs_key VAR_5, VAR_6;
 ino_t VAR_7;

 VAR_3 = VAR_2->new_size / VAR_0;
 if (VAR_2->new_size & (VAR_0 - 1))
  VAR_3 += 1;

 VAR_4 = VAR_2->old_size / VAR_0;
 if ((VAR_2->old_size & (VAR_0 - 1)) == 0)
  VAR_4 -= 1;

 VAR_7 = FUNC_1(VAR_1, &VAR_2->key);

 FUNC_0(VAR_1, &VAR_5, VAR_7, VAR_3);
 FUNC_0(VAR_1, &VAR_6, VAR_7, VAR_4);

 return FUNC_2(VAR_1, &VAR_5, &VAR_6);
}
