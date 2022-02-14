
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct puc_softc {int sc_dev; struct rman sc_iomem; struct rman sc_ioport; struct puc_bar* sc_bar; } ;
struct puc_bar {int b_rid; scalar_t__ b_type; int * b_res; } ;
typedef int rman_res_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ,scalar_t__,int*,int ) ;
 int FUNC_1 (int ,scalar_t__,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rman*,int ,int ) ;

struct puc_bar *
FUNC_5(struct puc_softc *VAR_4, int VAR_5)
{
 struct puc_bar *VAR_6;
 struct rman *VAR_7;
 rman_res_t VAR_8, VAR_9;
 int VAR_10, VAR_11;


 VAR_11 = 0;
 while (VAR_11 < VAR_0 && VAR_4->sc_bar[VAR_11].b_rid != VAR_5)
  VAR_11++;
 if (VAR_11 < VAR_0)
  return (&VAR_4->sc_bar[VAR_11]);


 if (VAR_5 == -1)
  return (((void*)0));


 VAR_6 = FUNC_5(VAR_4, -1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));
 VAR_6->b_rid = VAR_5;
 VAR_6->b_type = VAR_2;
 VAR_6->b_res = FUNC_0(VAR_4->sc_dev, VAR_6->b_type,
     &VAR_6->b_rid, VAR_1);
 if (VAR_6->b_res == ((void*)0)) {
  VAR_6->b_rid = VAR_5;
  VAR_6->b_type = VAR_3;
  VAR_6->b_res = FUNC_0(VAR_4->sc_dev, VAR_6->b_type,
      &VAR_6->b_rid, VAR_1);
  if (VAR_6->b_res == ((void*)0)) {
   VAR_6->b_rid = -1;
   return (((void*)0));
  }
 }


 VAR_7 = (VAR_6->b_type == VAR_2) ? &VAR_4->sc_ioport : &VAR_4->sc_iomem;
 VAR_9 = FUNC_3(VAR_6->b_res);
 VAR_8 = FUNC_2(VAR_6->b_res);
 VAR_10 = FUNC_4(VAR_7, VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_1(VAR_4->sc_dev, VAR_6->b_type, VAR_6->b_rid,
      VAR_6->b_res);
  VAR_6->b_res = ((void*)0);
  VAR_6->b_rid = -1;
  VAR_6 = ((void*)0);
 }

 return (VAR_6);
}
