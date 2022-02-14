
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {struct ubifs_zbranch* zbranch; } ;
struct ubifs_zbranch {int lnum; int offs; int key; } ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,union ubifs_key*) ;
 scalar_t__ FUNC_1 (struct ubifs_info*,union ubifs_key*,int *) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key*,struct ubifs_znode**,int*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1, union ubifs_key *VAR_2,
          int VAR_3, int VAR_4)
{
 struct ubifs_zbranch *VAR_5;
 struct ubifs_znode *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 const int VAR_12 = !FUNC_0(VAR_1, VAR_2);

 VAR_9 = FUNC_4(VAR_1, VAR_2, &VAR_6, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (!VAR_9)
  return 0;
 VAR_5 = &VAR_6->zbranch[VAR_8];
 if (VAR_3 == VAR_5->lnum && VAR_4 == VAR_5->offs)
  return 1;
 if (VAR_12)
  return 0;




 VAR_7 = VAR_6;
 VAR_11 = VAR_8;

 while (1) {
  VAR_10 = FUNC_3(VAR_1, &VAR_6, &VAR_8);
  if (VAR_10 == -VAR_0)
   break;
  if (VAR_10)
   return VAR_10;
  if (FUNC_1(VAR_1, VAR_2, &VAR_6->zbranch[VAR_8].key))
   break;
  VAR_5 = &VAR_6->zbranch[VAR_8];
  if (VAR_3 == VAR_5->lnum && VAR_4 == VAR_5->offs)
   return 1;
 }

 VAR_6 = VAR_7;
 VAR_8 = VAR_11;
 while (1) {
  VAR_10 = FUNC_2(VAR_1, &VAR_6, &VAR_8);
  if (VAR_10) {
   if (VAR_10 == -VAR_0)
    return 0;
   return VAR_10;
  }
  if (FUNC_1(VAR_1, VAR_2, &VAR_6->zbranch[VAR_8].key))
   break;
  VAR_5 = &VAR_6->zbranch[VAR_8];
  if (VAR_3 == VAR_5->lnum && VAR_4 == VAR_5->offs)
   return 1;
 }
 return 0;
}
