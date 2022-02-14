
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdacc_softc {int ** streams; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int,int,int **) ;
 int FUNC_1 (int ) ;
 struct hdacc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    int VAR_4, uint32_t **VAR_5)
{
 struct hdacc_softc *VAR_6 = FUNC_2(VAR_0);
 int VAR_7;

 VAR_7 = FUNC_0(FUNC_1(VAR_0), VAR_0,
     VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 > 0)
  VAR_6->streams[VAR_2][VAR_7] = VAR_1;
 return (VAR_7);
}
