
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bcm_mips74k_softc {int * mem; scalar_t__ mem_rid; int dev; } ;
typedef int device_t ;


 size_t FUNC_0 () ;
 int FUNC_1 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,size_t,size_t,int ) ;
 int * FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 struct bcm_mips74k_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 struct bcm_mips74k_softc *VAR_6;
 u_int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_6(VAR_5);
 VAR_6->dev = VAR_5;


 VAR_6->mem_rid = 0;
 VAR_6->mem = FUNC_3(VAR_5, VAR_3, &VAR_6->mem_rid,
     VAR_2);
 if (VAR_6->mem == ((void*)0)) {
  FUNC_7(VAR_5, "failed to allocate cpu register block\n");
  return (VAR_1);
 }


 VAR_7 = FUNC_0();
 for (size_t VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {


  if (VAR_9 == VAR_7)
   continue;

  FUNC_5(VAR_6->mem, FUNC_1(VAR_9), 0);
 }


 VAR_8 = FUNC_2(VAR_5, VAR_0, VAR_7,
     VAR_4);
 if (VAR_8) {
  FUNC_4(VAR_5, VAR_3, VAR_6->mem_rid, VAR_6->mem);
  return (VAR_8);
 }

 return (0);
}
