
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct nsproxy {int net_ns; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct nsproxy* FUNC_5 (struct task_struct*) ;

__attribute__((used)) static struct net *FUNC_6(struct inode *VAR_1)
{
 struct task_struct *VAR_2;
 struct nsproxy *VAR_3;
 struct net *VAR_4 = ((void*)0);

 FUNC_3();
 VAR_2 = FUNC_1(FUNC_2(VAR_1), VAR_0);
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3 != ((void*)0))
   VAR_4 = FUNC_0(VAR_3->net_ns);
 }
 FUNC_4();

 return VAR_4;
}
