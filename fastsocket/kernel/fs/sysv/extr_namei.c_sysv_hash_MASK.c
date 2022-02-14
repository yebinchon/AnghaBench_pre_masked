
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {scalar_t__ len; int name; int hash; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_1, struct qstr *VAR_2)
{


 if (VAR_2->len > VAR_0) {
  VAR_2->len = VAR_0;
  VAR_2->hash = FUNC_0(VAR_2->name, VAR_2->len);
 }
 return 0;
}
