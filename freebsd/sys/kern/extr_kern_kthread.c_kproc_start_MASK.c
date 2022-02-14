
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kproc_desc {int arg0; int global_procpp; scalar_t__ func; } ;


 int FUNC_0 (void (*) (void*),int *,int ,int ,int ,char*,int ) ;
 int FUNC_1 (char*,int ,int) ;

void
FUNC_2(const void *VAR_0)
{
 const struct kproc_desc *VAR_1 = VAR_0;
 int VAR_2;

 VAR_2 = FUNC_0((void (*)(void *))VAR_1->func, ((void*)0),
      VAR_1->global_procpp, 0, 0, "%s", VAR_1->arg0);
 if (VAR_2)
  FUNC_1("kproc_start: %s: error %d", VAR_1->arg0, VAR_2);
}
