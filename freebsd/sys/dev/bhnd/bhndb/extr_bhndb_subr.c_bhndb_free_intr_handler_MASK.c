
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_intr_handler {int ih_cookiep; int ih_active; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bhndb_intr_handler*,int ) ;

void
FUNC_2(struct bhndb_intr_handler *VAR_1)
{
 FUNC_0(!VAR_1->ih_active, ("free of active interrupt handler %p",
     VAR_1->ih_cookiep));

 FUNC_1(VAR_1, VAR_0);
}
