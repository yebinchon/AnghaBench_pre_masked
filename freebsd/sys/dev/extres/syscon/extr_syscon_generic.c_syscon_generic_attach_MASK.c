
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscon_generic_softc {int * syscon; int * mem_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct syscon_generic_softc*) ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 struct syscon_generic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct syscon_generic_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_6 = 0;

 VAR_5->mem_res = FUNC_1(VAR_4, VAR_2, &VAR_6,
     VAR_1);
 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_3(VAR_4, "Cannot allocate memory resource\n");
  return (VAR_0);
 }

 FUNC_0(VAR_5);
 VAR_5->syscon = FUNC_5(VAR_4, &VAR_3,
  FUNC_4(VAR_4));
 if (VAR_5->syscon == ((void*)0)) {
  FUNC_3(VAR_4, "Failed to create/register syscon\n");
  return (VAR_0);
 }
 return (0);
}
