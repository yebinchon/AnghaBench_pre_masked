
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;


 struct pid* FUNC_0 (int,struct pid_namespace*) ;
 int FUNC_1 (struct pid_namespace*,int) ;

struct pid *FUNC_2(int VAR_0, struct pid_namespace *VAR_1)
{
 struct pid *VAR_2;

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   break;
  VAR_0 = FUNC_1(VAR_1, VAR_0);
 } while (VAR_0 > 0);

 return VAR_2;
}
