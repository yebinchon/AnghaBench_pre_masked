
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {scalar_t__ len; void* leaf; } ;
struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ubifs_info*,void*) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_0, struct ubifs_zbranch *VAR_1,
       void *VAR_2)
{
 int VAR_3;

 FUNC_2(!VAR_1->leaf);
 FUNC_2(VAR_1->len != 0);

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_1();
  FUNC_0(VAR_0, VAR_2);
  return VAR_3;
 }

 VAR_1->leaf = VAR_2;
 return 0;
}
