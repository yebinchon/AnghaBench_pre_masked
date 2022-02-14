
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int bus_intrs; } ;
struct bhndb_intr_handler {int ih_active; int * ih_cookiep; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,struct bhndb_intr_handler*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct bhndb_resources *VAR_1,
    struct bhndb_intr_handler *VAR_2)
{
 FUNC_0(!VAR_2->ih_active, ("duplicate registration of interrupt "
     "handler %p", VAR_2->ih_cookiep));
 FUNC_0(VAR_2->ih_cookiep != ((void*)0), ("missing cookiep"));

 VAR_2->ih_active = 1;
 FUNC_1(&VAR_1->bus_intrs, VAR_2, VAR_0);
}
