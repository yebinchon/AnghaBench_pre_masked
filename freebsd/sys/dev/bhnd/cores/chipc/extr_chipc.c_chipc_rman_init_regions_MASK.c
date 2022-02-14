
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct chipc_softc {int mem_regions; int mem_rman; int dev; } ;
struct chipc_region {scalar_t__ cr_rid; int cr_end; int cr_addr; } ;
typedef int rman_res_t ;
typedef int bhnd_port_type ;


 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct chipc_region*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 struct chipc_region* FUNC_4 (struct chipc_softc*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct chipc_softc*,struct chipc_region*) ;
 int VAR_1 ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_7 (struct chipc_softc *VAR_2, bhnd_port_type VAR_3,
    u_int VAR_4)
{
 struct chipc_region *VAR_5;
 rman_res_t VAR_6, VAR_7;
 u_int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2->dev, VAR_3, VAR_4);
 for (u_int VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {

  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_10);
  if (VAR_5 == ((void*)0))
   return (VAR_0);


  if (VAR_5->cr_rid < 0) {
   FUNC_0(VAR_2->dev, "no rid for chipc region "
       "%s%u.%u", FUNC_3(VAR_3), VAR_4, VAR_10);
   FUNC_5(VAR_2, VAR_5);
   continue;
  }


  VAR_6 = VAR_5->cr_addr;
  VAR_7 = VAR_5->cr_end;
  if ((VAR_9 = FUNC_6(&VAR_2->mem_rman, VAR_6, VAR_7))) {
   FUNC_5(VAR_2, VAR_5);
   return (VAR_9);
  }


  FUNC_1(&VAR_2->mem_regions, VAR_5, VAR_1);
 }

 return (0);
}
