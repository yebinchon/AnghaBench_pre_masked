
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_softc {int *** streams; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ) ;
 struct hdacc_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
 struct hdacc_softc *VAR_4 = FUNC_2(VAR_0);

 VAR_4->streams[VAR_2][VAR_3] = ((void*)0);
 FUNC_0(FUNC_1(VAR_0), VAR_0, VAR_2, VAR_3);
}
