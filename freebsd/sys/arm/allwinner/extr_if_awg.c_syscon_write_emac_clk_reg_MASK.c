
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct awg_softc {int ** res; int * syscon; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 struct awg_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_2, uint32_t VAR_3)
{
 struct awg_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4->syscon != ((void*)0))
  FUNC_0(VAR_4->syscon, VAR_0, VAR_3);
 else if (VAR_4->res[VAR_1] != ((void*)0))
  FUNC_1(VAR_4->res[VAR_1], 0, VAR_3);
}
