
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_softc {int ** tags; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 struct hdacc_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct hdacc_softc *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(VAR_2 >= 0 && VAR_2 <= 0x3f, ("Wrong tag value %d\n", VAR_2));
 VAR_3->tags[VAR_2] = ((void*)0);
 FUNC_0(FUNC_2(VAR_0), VAR_0, VAR_2);
}
