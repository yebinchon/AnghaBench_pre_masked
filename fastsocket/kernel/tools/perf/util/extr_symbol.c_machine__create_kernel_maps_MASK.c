
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int kmaps; int pid; } ;
struct dso {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_modules; } ;


 scalar_t__ FUNC_0 (struct machine*,struct dso*) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 struct dso* FUNC_2 (struct machine*) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__ VAR_0 ;

int FUNC_6(struct machine *VAR_1)
{
 struct dso *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0) ||
     FUNC_0(VAR_1, VAR_2) < 0)
  return -1;

 if (VAR_0.use_modules && FUNC_1(VAR_1) < 0) {
  if (FUNC_3(VAR_1))
   FUNC_5("Problems creating module maps, "
     "continuing anyway...\n");
  else
   FUNC_5("Problems creating module maps for guest %d, "
     "continuing anyway...\n", VAR_1->pid);
 }




 FUNC_4(&VAR_1->kmaps);
 return 0;
}
