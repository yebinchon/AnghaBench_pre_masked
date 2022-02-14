
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage {int dummy; } ;
struct l_rusage {int dummy; } ;


 int FUNC_0 (struct rusage*,struct l_rusage*) ;
 int FUNC_1 (struct l_rusage*,void*,int) ;

int
FUNC_2(struct rusage *VAR_0, void *VAR_1)
{
 struct l_rusage VAR_2;

 FUNC_0(VAR_0, &VAR_2);

 return (FUNC_1(&VAR_2, VAR_1, sizeof(struct l_rusage)));
}
