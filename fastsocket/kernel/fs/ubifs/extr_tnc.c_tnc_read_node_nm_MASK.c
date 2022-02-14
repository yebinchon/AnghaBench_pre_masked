
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {scalar_t__ len; scalar_t__ leaf; int key; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,int *) ;
 int FUNC_1 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;
 int FUNC_2 (void*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_zbranch*,void*) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0, struct ubifs_zbranch *VAR_1,
       void *VAR_2)
{
 int VAR_3;

 FUNC_3(FUNC_0(VAR_0, &VAR_1->key));

 if (VAR_1->leaf) {

  FUNC_3(VAR_1->len != 0);
  FUNC_2(VAR_2, VAR_1->leaf, VAR_1->len);
  return 0;
 }

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
