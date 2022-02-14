
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* member_1; int member_0; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct path*,struct path*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_1, struct path *VAR_2,
       struct dentry *VAR_3)
{
 struct path VAR_4 = { VAR_2->mnt, VAR_1 };
 struct path VAR_5 = { VAR_2->mnt, VAR_3 };
 return FUNC_0(FUNC_1(),
           VAR_0,
           &VAR_4, &VAR_5);
}
