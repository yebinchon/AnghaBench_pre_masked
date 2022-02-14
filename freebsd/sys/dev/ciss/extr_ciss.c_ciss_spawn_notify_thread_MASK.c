
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciss_softc {int ciss_dev; int ciss_notify_thread; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void (*) (void*),struct ciss_softc*,int *,int ,int ,char*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct ciss_softc *VAR_1)
{

    if (FUNC_1((void(*)(void *))VAR_0, VAR_1,
         &VAR_1->ciss_notify_thread, 0, 0, "ciss_notify%d",
         FUNC_0(VAR_1->ciss_dev)))
 FUNC_2("Could not create notify thread\n");
}
