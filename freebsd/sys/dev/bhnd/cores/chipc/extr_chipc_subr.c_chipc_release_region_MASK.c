
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_softc {int dev; } ;
struct chipc_region {int cr_act_refs; int cr_refs; int * cr_res; int cr_res_rid; } ;


 int FUNC_0 (struct chipc_softc*) ;
 int FUNC_1 (struct chipc_softc*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;

int
FUNC_5(struct chipc_softc *VAR_3, struct chipc_region *VAR_4,
    int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_3);
 VAR_6 = 0;

 FUNC_2(VAR_4->cr_res != ((void*)0), ("release on NULL region resource"));

 if (VAR_5 & VAR_0) {
  FUNC_2(VAR_4->cr_act_refs > 0, ("RF_ACTIVE over-released"));
  FUNC_2(VAR_4->cr_act_refs <= VAR_4->cr_refs,
       ("RF_ALLOCATED released with RF_ACTIVE held"));


  if (VAR_4->cr_act_refs == 1) {
   VAR_6 = FUNC_3(VAR_3->dev,
       VAR_2, VAR_4->cr_res_rid, VAR_4->cr_res);
   if (VAR_6)
    goto done;
  }


  VAR_4->cr_act_refs--;
 }

 if (VAR_5 & VAR_1) {
  FUNC_2(VAR_4->cr_refs > 0, ("overrelease of refs"));

  if (VAR_4->cr_refs == 1) {
   VAR_6 = FUNC_4(VAR_3->dev, VAR_2,
       VAR_4->cr_res_rid, VAR_4->cr_res);
   if (VAR_6)
    goto done;

   VAR_4->cr_res = ((void*)0);
  }


  VAR_4->cr_refs--;
 }

done:
 FUNC_1(VAR_3);
 return (VAR_6);
}
