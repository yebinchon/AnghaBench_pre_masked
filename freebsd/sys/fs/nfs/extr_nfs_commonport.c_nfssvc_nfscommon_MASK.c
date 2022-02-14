
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct nfssvc_args {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*,struct nfssvc_args*,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_0, struct nfssvc_args *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_0->td_ucred);
 FUNC_0(VAR_2);
 return (VAR_2);
}
