
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int * oldptr; } ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
struct kinfo_proc {int dummy; } ;
typedef int ki ;


 int VAR_0 ;
 int FUNC_0 (struct sysctl_req*,int ,int ) ;
 int FUNC_1 (struct proc*,struct sbuf*,int) ;
 int FUNC_2 (struct proc*,int) ;
 int FUNC_3 (struct sbuf*,int ) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct sbuf*,char*,int,struct sysctl_req*) ;

__attribute__((used)) static int
FUNC_7(struct proc *VAR_1, struct sysctl_req *VAR_2, int VAR_3)
{
 struct sbuf VAR_4;
 struct kinfo_proc VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->oldptr == ((void*)0))
  return (FUNC_0(VAR_2, 0, FUNC_2(VAR_1, VAR_3)));

 FUNC_6(&VAR_4, (char *)&VAR_5, sizeof(VAR_5), VAR_2);
 FUNC_3(&VAR_4, VAR_0);
 VAR_6 = FUNC_1(VAR_1, &VAR_4, VAR_3);
 VAR_7 = FUNC_5(&VAR_4);
 FUNC_4(&VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 else if (VAR_7 != 0)
  return (VAR_7);
 return (0);
}
