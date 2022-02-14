
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa_softc {int intr_hook; } ;
typedef void* device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct cyapa_softc*,int ) ;
 struct cyapa_softc* FUNC_2 (void*) ;
 int FUNC_3 (int ,struct cyapa_softc*,int *,int *,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct cyapa_softc *VAR_3;
 device_t VAR_4 = VAR_2;

 VAR_3 = FUNC_2(VAR_4);

 FUNC_0(&VAR_3->intr_hook);


 FUNC_1(VAR_3, VAR_0);


 FUNC_3(VAR_1, VAR_3, ((void*)0), ((void*)0),
     0, 0, "cyapa-poll");
}
