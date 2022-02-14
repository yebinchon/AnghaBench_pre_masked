
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terasic_de4led_softc {int * tdl_res; scalar_t__ tdl_rid; int tdl_unit; int tdl_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int ) ;
 struct terasic_de4led_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct terasic_de4led_softc*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3)
{
 struct terasic_de4led_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->tdl_dev = VAR_3;
 VAR_4->tdl_unit = FUNC_2(VAR_3);
 VAR_4->tdl_rid = 0;
 VAR_4->tdl_res = FUNC_0(VAR_3, VAR_2,
     &VAR_4->tdl_rid, VAR_1);
 if (VAR_4->tdl_res == ((void*)0)) {
  FUNC_3(VAR_3, "couldn't map memory\n");
  return (VAR_0);
 }
 FUNC_4(VAR_4);
 return (0);
}
