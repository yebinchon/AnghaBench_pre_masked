
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_softc {int ** tags; } ;
typedef int * device_t ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 struct hdacc_softc* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2)
{
 struct hdacc_softc *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_2 &= 0x3f;
 VAR_4 = VAR_2;
 do {
  if (VAR_3->tags[VAR_4] == ((void*)0)) {
   VAR_3->tags[VAR_4] = VAR_1;
   FUNC_0(FUNC_1(VAR_0), VAR_0, VAR_4);
   return (VAR_4);
  }
  VAR_4++;
  VAR_4 &= 0x3f;
 } while (VAR_4 != VAR_2);
 return (-1);
}
