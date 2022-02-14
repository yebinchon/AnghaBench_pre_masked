
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uts_namespace ;
struct task_struct {int dummy; } ;
struct nsproxy {void* uts_ns; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct nsproxy* FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void *FUNC_4(struct task_struct *VAR_0)
{
 struct uts_namespace *VAR_1 = ((void*)0);
 struct nsproxy *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  VAR_1 = VAR_2->uts_ns;
  FUNC_0(VAR_1);
 }
 FUNC_2();

 return VAR_1;
}
