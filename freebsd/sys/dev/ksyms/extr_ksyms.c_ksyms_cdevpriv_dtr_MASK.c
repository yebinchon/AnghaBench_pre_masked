
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_object_t ;
struct ksyms_softc {int * sc_obj; } ;


 int FUNC_0 (struct ksyms_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ksyms_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct ksyms_softc *VAR_4;
 vm_object_t VAR_5;

 VAR_4 = (struct ksyms_softc *)VAR_3;

 FUNC_2(&VAR_1);
 FUNC_0(VAR_4, VAR_2);
 FUNC_3(&VAR_1);
 VAR_5 = VAR_4->sc_obj;
 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5);
 FUNC_1(VAR_4, VAR_0);
}
