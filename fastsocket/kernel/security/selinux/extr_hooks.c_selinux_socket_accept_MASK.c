
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct inode_security_struct {int initialized; int sid; int sclass; } ;
struct TYPE_2__ {struct inode_security_struct* i_security; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct socket*,int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, struct socket *VAR_3)
{
 int VAR_4;
 struct inode_security_struct *VAR_5;
 struct inode_security_struct *VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_6 = FUNC_0(VAR_3)->i_security;

 VAR_5 = FUNC_0(VAR_2)->i_security;
 VAR_6->sclass = VAR_5->sclass;
 VAR_6->sid = VAR_5->sid;
 VAR_6->initialized = 1;

 return 0;
}
