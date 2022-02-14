
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdacc_softc {int dev; int ** tags; } ;
typedef int * device_t ;


 int FUNC_0 (int *,int) ;
 struct hdacc_softc* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, uint32_t VAR_1)
{
 struct hdacc_softc *VAR_2 = FUNC_1(VAR_0);
 device_t VAR_3;
 int VAR_4;

 VAR_4 = VAR_1 >> 26;
 if ((VAR_3 = VAR_2->tags[VAR_4]) != ((void*)0))
  FUNC_0(VAR_3, VAR_1);
 else
  FUNC_2(VAR_2->dev, "Unexpected unsolicited "
      "response with tag %d: %08x\n", VAR_4, VAR_1);
}
