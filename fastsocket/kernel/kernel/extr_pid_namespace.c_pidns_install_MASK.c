
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {scalar_t__ level; struct pid_namespace* parent; } ;
struct nsproxy {int pid_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 (int ) ;
 struct pid_namespace* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nsproxy *VAR_2, void *VAR_3)
{
 struct pid_namespace *VAR_4 = FUNC_2(VAR_1);
 struct pid_namespace *VAR_5, *VAR_6 = VAR_3;
 if (VAR_6->level < VAR_4->level)
  return -VAR_0;

 VAR_5 = VAR_6;
 while (VAR_5->level > VAR_4->level)
  VAR_5 = VAR_5->parent;
 if (VAR_5 != VAR_4)
  return -VAR_0;

 FUNC_1(VAR_2->pid_ns);
 VAR_2->pid_ns = FUNC_0(VAR_6);
 return 0;
}
