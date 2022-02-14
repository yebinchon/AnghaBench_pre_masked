
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_softc {int *** streams; } ;
typedef int * device_t ;


 int FUNC_0 (int *,int,int) ;
 struct hdacc_softc* FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct hdacc_softc *VAR_3 = FUNC_1(VAR_0);
 device_t VAR_4;

 if ((VAR_4 = VAR_3->streams[VAR_1][VAR_2]) != ((void*)0))
  FUNC_0(VAR_4, VAR_1, VAR_2);
}
