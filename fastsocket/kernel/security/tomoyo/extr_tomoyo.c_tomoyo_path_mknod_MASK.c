
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {struct dentry* member_1; int member_0; int mnt; } ;
struct dentry {int dummy; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,struct path*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct path *VAR_6, struct dentry *VAR_7,
        int VAR_8, unsigned int VAR_9)
{
 struct path VAR_10 = { VAR_6->mnt, VAR_7 };
 int VAR_11 = VAR_1;

 switch (VAR_8 & VAR_0) {
 case 130:
  VAR_11 = VAR_3;
  break;
 case 131:
  VAR_11 = VAR_2;
  break;
 case 129:
  VAR_11 = VAR_4;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 }
 return FUNC_0(FUNC_1(),
           VAR_11, &VAR_10);
}
