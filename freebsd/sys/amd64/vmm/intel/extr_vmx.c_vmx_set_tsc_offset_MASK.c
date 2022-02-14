
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vmx {int vm; TYPE_1__* cap; } ;
struct TYPE_2__ {int proc_ctls; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct vmx *VAR_3, int VAR_4, uint64_t VAR_5)
{
 int VAR_6;

 if ((VAR_3->cap[VAR_4].proc_ctls & VAR_0) == 0) {
  VAR_3->cap[VAR_4].proc_ctls |= VAR_0;
  FUNC_1(VAR_1, VAR_3->cap[VAR_4].proc_ctls);
  FUNC_0(VAR_3->vm, VAR_4, "Enabling TSC offsetting");
 }

 VAR_6 = FUNC_2(VAR_2, VAR_5);

 return (VAR_6);
}
