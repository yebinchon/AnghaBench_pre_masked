
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int key; int nlen; int * name; int inum; } ;
struct qstr {int len; int * name; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_dent_node*) ;
 int FUNC_1 (struct ubifs_dent_node*) ;
 int FUNC_2 (char*,unsigned long,...) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 int FUNC_4 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_5 (struct ubifs_dent_node*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,scalar_t__) ;
 struct ubifs_dent_node* FUNC_10 (struct ubifs_info*,union ubifs_key*,struct qstr*) ;
 int FUNC_11 (struct ubifs_info*,union ubifs_key*,struct qstr*) ;
 int FUNC_12 (struct ubifs_info*,union ubifs_key*,union ubifs_key*) ;

int FUNC_13(struct ubifs_info *VAR_1, ino_t VAR_2)
{
 union ubifs_key VAR_3, VAR_4;
 struct ubifs_dent_node *VAR_5, *VAR_6 = ((void*)0);
 struct qstr VAR_7 = { .name = ((void*)0) };

 FUNC_2("ino %lu", (unsigned long)VAR_2);





 FUNC_9(VAR_1, &VAR_3, VAR_2);
 while (1) {
  ino_t VAR_8;
  int VAR_9;

  VAR_5 = FUNC_10(VAR_1, &VAR_3, &VAR_7);
  if (FUNC_0(VAR_5)) {
   VAR_9 = FUNC_1(VAR_5);
   if (VAR_9 == -VAR_0)
    break;
   return VAR_9;
  }

  VAR_8 = FUNC_7(VAR_5->inum);
  FUNC_2("xent '%s', ino %lu", VAR_5->name,
   (unsigned long)VAR_8);

  VAR_7.name = VAR_5->name;
  VAR_7.len = FUNC_6(VAR_5->nlen);
  VAR_9 = FUNC_11(VAR_1, &VAR_3, &VAR_7);
  if (VAR_9) {
   FUNC_5(VAR_5);
   return VAR_9;
  }

  FUNC_8(VAR_1, &VAR_3, VAR_8);
  FUNC_3(VAR_1, &VAR_4, VAR_8);
  VAR_9 = FUNC_12(VAR_1, &VAR_3, &VAR_4);
  if (VAR_9) {
   FUNC_5(VAR_5);
   return VAR_9;
  }

  FUNC_5(VAR_6);
  VAR_6 = VAR_5;
  FUNC_4(VAR_1, &VAR_5->key, &VAR_3);
 }

 FUNC_5(VAR_6);
 FUNC_8(VAR_1, &VAR_3, VAR_2);
 FUNC_3(VAR_1, &VAR_4, VAR_2);

 return FUNC_12(VAR_1, &VAR_3, &VAR_4);
}
