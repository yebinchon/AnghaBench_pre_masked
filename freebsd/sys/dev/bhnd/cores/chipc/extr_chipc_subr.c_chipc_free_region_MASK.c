
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {int dev; } ;
struct chipc_region {scalar_t__ cr_refs; int * cr_res; int cr_res_rid; int cr_region_num; int cr_port_num; int cr_port_type; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct chipc_region*,int ) ;

void
FUNC_4(struct chipc_softc *VAR_2, struct chipc_region *VAR_3)
{
 FUNC_0(VAR_3->cr_refs == 0,
     ("chipc %s%u.%u region has %u active references",
      FUNC_1(VAR_3->cr_port_type), VAR_3->cr_port_num,
      VAR_3->cr_region_num, VAR_3->cr_refs));

 if (VAR_3->cr_res != ((void*)0)) {
  FUNC_2(VAR_2->dev, VAR_1, VAR_3->cr_res_rid,
      VAR_3->cr_res);
 }

 FUNC_3(VAR_3, VAR_0);
}
