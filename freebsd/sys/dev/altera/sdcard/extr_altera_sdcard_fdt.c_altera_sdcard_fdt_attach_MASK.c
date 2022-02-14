
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_sdcard_softc {int * as_res; scalar_t__ as_rid; int as_unit; int as_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct altera_sdcard_softc*) ;
 int * FUNC_1 (int ,int ,scalar_t__*,int ) ;
 struct altera_sdcard_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct altera_sdcard_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->as_dev = VAR_3;
 VAR_4->as_unit = FUNC_3(VAR_3);
 VAR_4->as_rid = 0;
 VAR_4->as_res = FUNC_1(VAR_3, VAR_2,
     &VAR_4->as_rid, VAR_1);
 if (VAR_4->as_res == ((void*)0)) {
  FUNC_4(VAR_3, "couldn't map memory\n");
  return (VAR_0);
 }
 FUNC_0(VAR_4);
 return (0);
}
