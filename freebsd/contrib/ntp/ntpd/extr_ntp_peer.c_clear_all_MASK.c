
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int cast_flags; struct peer* p_link; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct peer*,char*) ;
 struct peer* VAR_2 ;

void
FUNC_2(void)
{
 struct peer *VAR_3;





 for (VAR_3 = VAR_2; VAR_3 != ((void*)0); VAR_3 = VAR_3->p_link)
  if (!(VAR_0 & VAR_3->cast_flags))
   FUNC_1(VAR_3, "STEP");

 FUNC_0(1, ("clear_all: at %lu\n", VAR_1));
}
