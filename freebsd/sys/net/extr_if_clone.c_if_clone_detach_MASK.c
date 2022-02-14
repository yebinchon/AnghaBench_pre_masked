
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clone {scalar_t__ ifc_type; int ifc_iflist; scalar_t__ ifcs_minifs; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct if_clone*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct if_clone*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct if_clone*,int ) ;
 int VAR_2 ;

void
FUNC_7(struct if_clone *VAR_3)
{

 FUNC_0();
 FUNC_5(VAR_3, VAR_2);
 VAR_1--;
 FUNC_1();


 if (VAR_3->ifc_type == VAR_0)
  VAR_3->ifcs_minifs = 0;


 while (!FUNC_3(&VAR_3->ifc_iflist))
  FUNC_6(VAR_3, FUNC_4(&VAR_3->ifc_iflist));

 FUNC_2(VAR_3);
}
