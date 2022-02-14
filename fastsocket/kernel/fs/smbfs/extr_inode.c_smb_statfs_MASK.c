
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstatfs {int f_namelen; int f_type; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dentry*,struct kstatfs*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 int VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_2();

 VAR_3->f_type = VAR_1;
 VAR_3->f_namelen = VAR_0;
 return VAR_4;
}
