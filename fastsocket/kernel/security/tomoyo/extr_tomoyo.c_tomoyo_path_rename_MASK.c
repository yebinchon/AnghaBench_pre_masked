
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* member_1; int member_0; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct path*,struct path*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct path *VAR_1,
         struct dentry *VAR_2,
         struct path *VAR_3,
         struct dentry *VAR_4)
{
 struct path VAR_5 = { VAR_1->mnt, VAR_2 };
 struct path VAR_6 = { VAR_3->mnt, VAR_4 };
 return FUNC_0(FUNC_1(),
           VAR_0,
           &VAR_5, &VAR_6);
}
