
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_phdr_info {int dummy; } ;
struct cxa_thread_dtor {int (* func ) (int ) ;int obj; int dso; } ;


 scalar_t__ FUNC_0 (struct dl_phdr_info*,int (*) (int )) ;
 scalar_t__ FUNC_1 (int ,struct dl_phdr_info*) ;
 int FUNC_2 (int ,char*,void*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct cxa_thread_dtor *VAR_1)
{
 struct dl_phdr_info VAR_2;

 if (FUNC_1(VAR_1->dso, &VAR_2) &&
     FUNC_0(&VAR_2, VAR_1->func))
  VAR_1->func(VAR_1->obj);
 else
  FUNC_2(VAR_0, "__cxa_thread_call_dtors: dtr %p from "
      "unloaded dso, skipping\n", (void *)(VAR_1->func));
}
