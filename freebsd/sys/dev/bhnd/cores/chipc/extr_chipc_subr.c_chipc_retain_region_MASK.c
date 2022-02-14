
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {int dev; } ;
struct chipc_region {scalar_t__ cr_refs; int cr_res_rid; int cr_rid; scalar_t__ cr_act_refs; int * cr_res; int cr_count; int cr_end; int cr_addr; } ;


 int FUNC_0 (struct chipc_softc*) ;
 int FUNC_1 (struct chipc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int,int *) ;
 int * FUNC_4 (int ,int ,int*,int ,int ,int ,int ) ;
 int FUNC_5 (struct chipc_softc*,struct chipc_region*,int) ;

int
FUNC_6(struct chipc_softc *VAR_6, struct chipc_region *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_2(!(VAR_8 &~ (VAR_2|VAR_3)), ("unsupported flags"));

 FUNC_0(VAR_6);


 if (VAR_8 & VAR_3) {

  if (VAR_7->cr_refs == 0) {
   FUNC_2(VAR_7->cr_res == ((void*)0),
       ("non-NULL resource has refcount"));


   if ((VAR_7->cr_res_rid = VAR_7->cr_rid) == -1) {
    FUNC_1(VAR_6);
    return (VAR_0);
   }


   VAR_7->cr_res = FUNC_4(VAR_6->dev,
       VAR_5, &VAR_7->cr_res_rid, VAR_7->cr_addr,
       VAR_7->cr_end, VAR_7->cr_count, VAR_4);
   if (VAR_7->cr_res == ((void*)0)) {
    FUNC_1(VAR_6);
    return (VAR_1);
   }
  }


  VAR_7->cr_refs++;
 }



 if (VAR_8 & VAR_2) {
  FUNC_2(VAR_7->cr_refs > 0,
      ("cannot activate unallocated resource"));


  if (VAR_7->cr_act_refs == 0) {
   VAR_9 = FUNC_3(VAR_6->dev, VAR_5,
       VAR_7->cr_res_rid, VAR_7->cr_res);
   if (VAR_9) {


    FUNC_1(VAR_6);
    FUNC_5(VAR_6, VAR_7,
        VAR_8 &~ VAR_2);
    return (VAR_9);
   }
  }


  VAR_7->cr_act_refs++;
 }

 FUNC_1(VAR_6);
 return (0);
}
