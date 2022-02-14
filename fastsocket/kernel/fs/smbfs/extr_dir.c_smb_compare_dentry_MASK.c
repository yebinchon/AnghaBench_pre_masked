
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int * name; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct dentry *VAR_0, struct qstr *VAR_1, struct qstr *VAR_2)
{
 int VAR_3, VAR_4 = 1;

 if (VAR_1->len != VAR_2->len)
  goto out;
 for (VAR_3=0; VAR_3 < VAR_1->len; VAR_3++) {
  if (FUNC_0(VAR_1->name[VAR_3]) != FUNC_0(VAR_2->name[VAR_3]))
   goto out;
 }
 VAR_4 = 0;
out:
 return VAR_4;
}
