
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int child_cnt; TYPE_1__* zbranch; } ;
struct ubifs_info {int dummy; } ;
struct qstr {int dummy; } ;
struct TYPE_2__ {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ubifs_info*,int *,union ubifs_key const*) ;
 int FUNC_1 (struct ubifs_info*,TYPE_1__*,struct qstr const*) ;
 int FUNC_2 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_znode**,int*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_5, const union ubifs_key *VAR_6,
        struct ubifs_znode **VAR_7, int *VAR_8,
        const struct qstr *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_5, &(*VAR_7)->zbranch[*VAR_8], VAR_9);
 if (FUNC_5(VAR_10 < 0))
  return VAR_10;
 if (VAR_10 == VAR_4)
  return 1;

 if (VAR_10 == VAR_2) {

  while (1) {
   VAR_10 = FUNC_3(VAR_5, VAR_7, VAR_8);
   if (VAR_10 == -VAR_1) {
    FUNC_4(*VAR_8 == 0);
    *VAR_8 = -1;
    return 0;
   }
   if (VAR_10 < 0)
    return VAR_10;
   if (FUNC_0(VAR_5, &(*VAR_7)->zbranch[*VAR_8].key, VAR_6)) {
    if (*VAR_8 == (*VAR_7)->child_cnt - 1) {
     VAR_10 = FUNC_2(VAR_5, VAR_7, VAR_8);
     if (VAR_10) {

      FUNC_4(0);
      if (VAR_10 == -VAR_1)
       VAR_10 = -VAR_0;
      return VAR_10;
     }
     FUNC_4(*VAR_8 == 0);
     *VAR_8 = -1;
    }
    return 0;
   }
   VAR_10 = FUNC_1(VAR_5, &(*VAR_7)->zbranch[*VAR_8], VAR_9);
   if (VAR_10 < 0)
    return VAR_10;
   if (VAR_10 == VAR_3)
    return 0;
   if (VAR_10 == VAR_4)
    return 1;
   FUNC_4(VAR_10 == VAR_2);
  }
 } else {
  int VAR_11 = *VAR_8;
  struct ubifs_znode *VAR_12 = *VAR_7;


  while (1) {
   VAR_10 = FUNC_2(VAR_5, &VAR_12, &VAR_11);
   if (VAR_10 == -VAR_1)
    return 0;
   if (VAR_10 < 0)
    return VAR_10;
   if (FUNC_0(VAR_5, &VAR_12->zbranch[VAR_11].key, VAR_6))
    return 0;
   VAR_10 = FUNC_1(VAR_5, &VAR_12->zbranch[VAR_11], VAR_9);
   if (VAR_10 < 0)
    return VAR_10;
   if (VAR_10 == VAR_2)
    return 0;
   *VAR_7 = VAR_12;
   *VAR_8 = VAR_11;
   if (VAR_10 == VAR_4)
    return 1;
   FUNC_4(VAR_10 == VAR_3);
  }
 }
}
