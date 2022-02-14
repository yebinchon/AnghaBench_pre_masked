
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iicoc_softc {int * iicbus; int * mem_res; scalar_t__ mem_rid; int sc_mtx; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 struct iicoc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 int VAR_4;
 struct iicoc_softc *VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 VAR_4 = FUNC_4(VAR_3);

 VAR_5->dev = VAR_3;
 FUNC_7(&VAR_5->sc_mtx, "iicoc", "iicoc", VAR_0);
 VAR_5->mem_rid = 0;
 VAR_5->mem_res = FUNC_0(VAR_3,
     VAR_2, &VAR_5->mem_rid, 0x100, VAR_1);

 if (VAR_5->mem_res == ((void*)0)) {
  FUNC_5(VAR_3, "Could not allocate bus resource.\n");
  return (-1);
 }
 FUNC_6(VAR_3);
 VAR_5->iicbus = FUNC_2(VAR_3, "iicbus", -1);
 if (VAR_5->iicbus == ((void*)0)) {
  FUNC_5(VAR_3, "Could not allocate iicbus instance.\n");
  return (-1);
 }
 FUNC_1(VAR_3);

 return (0);
}
