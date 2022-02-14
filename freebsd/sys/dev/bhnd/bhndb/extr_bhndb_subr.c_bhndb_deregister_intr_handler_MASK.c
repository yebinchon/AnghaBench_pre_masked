
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int bus_intrs; } ;
struct bhndb_intr_handler {int ih_active; int ih_cookiep; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct bhndb_intr_handler*,int ,int ) ;
 struct bhndb_intr_handler* FUNC_2 (struct bhndb_resources*,struct bhndb_intr_handler*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct bhndb_resources *VAR_2,
    struct bhndb_intr_handler *VAR_3)
{
 FUNC_0(VAR_3->ih_active, ("duplicate deregistration of interrupt "
     "handler %p", VAR_3->ih_cookiep));

 FUNC_0(FUNC_2(VAR_2, VAR_3) == VAR_3,
     ("unknown interrupt handler %p", VAR_3));

 FUNC_1(&VAR_2->bus_intrs, VAR_3, VAR_0, VAR_1);
 VAR_3->ih_active = 0;
}
