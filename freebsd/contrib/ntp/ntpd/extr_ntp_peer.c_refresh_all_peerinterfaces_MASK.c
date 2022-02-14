
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int reach; scalar_t__ dstadr; struct peer* p_link; } ;


 struct peer* VAR_0 ;
 int FUNC_0 (struct peer*) ;

void
FUNC_1(void)
{
 struct peer *VAR_1;







 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->p_link) {
  if (!(VAR_1->dstadr && (VAR_1->reach & 0x3)))
   FUNC_0(VAR_1);
 }
}
