
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qstr {char const* name; int len; int hash; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* dir; } ;
struct TYPE_4__ {TYPE_1__ pipefs; } ;
struct cache_detail {TYPE_2__ u; } ;
typedef int mode_t ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (char const*,int ) ;
 struct dentry* FUNC_3 (struct dentry*,struct qstr*,int ,struct cache_detail*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct cache_detail*) ;
 int FUNC_6 (struct cache_detail*) ;

int FUNC_7(struct dentry *VAR_0,
     const char *VAR_1, mode_t VAR_2,
     struct cache_detail *VAR_3)
{
 struct qstr VAR_4;
 struct dentry *VAR_5;
 int VAR_6 = 0;

 FUNC_6(VAR_3);
 VAR_4.name = VAR_1;
 VAR_4.len = FUNC_4(VAR_1);
 VAR_4.hash = FUNC_2(VAR_4.name, VAR_4.len);
 VAR_5 = FUNC_3(VAR_0, &VAR_4, VAR_2, VAR_3);
 if (!FUNC_0(VAR_5))
  VAR_3->u.pipefs.dir = VAR_5;
 else {
  FUNC_5(VAR_3);
  VAR_6 = FUNC_1(VAR_5);
 }
 return VAR_6;
}
