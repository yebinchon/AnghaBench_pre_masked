
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_softc {int event_list; } ;
struct mpr_event_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mpr_event_handle*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mpr_event_handle*,int ) ;
 int FUNC_2 (struct mpr_softc*,int *,int *) ;

int
FUNC_3(struct mpr_softc *VAR_2, struct mpr_event_handle *VAR_3)
{

 FUNC_0(&VAR_2->event_list, VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_0);
 return (FUNC_2(VAR_2, ((void*)0), ((void*)0)));
}
